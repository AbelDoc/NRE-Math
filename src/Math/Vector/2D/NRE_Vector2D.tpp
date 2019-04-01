
    /**
     * @file NRE_Vector2D.tpp
     * @brief Implementation of Math's API's Object : Vector2D
     * @author Louis ABEL
     * @date 27/03/2019
     * @copyright GNU GPL v3
     */

    namespace NRE {
        namespace Math {

            template <class T>
            inline Vector2D<T>::Vector2D(T nX, T nY) : x(nX), y(nY) {
            }

            template <class T>
            inline Vector2D<T>::Vector2D(T value) : x(value), y(value) {
            }

            template <class T>
            template <class K>
            inline Vector2D<T>::Vector2D(Vector2D<K> const& u) : x(static_cast <T> (u.getX())), y(static_cast <T> (u.getY())) {
            }

            template <class T>
            template <class K>
            inline Vector2D<T>::Vector2D(Vector3D<K> const& u) : x(static_cast <T> (u.getX())), y(static_cast <T> (u.getY())) {
            }

            template <class T>
            inline T Vector2D<T>::getX() const {
                return x;
            }

            template <class T>
            inline T Vector2D<T>::getY() const {
                return y;
            }

            template <class T>
            inline T Vector2D<T>::getW() const {
                return x;
            }

            template <class T>
            inline T Vector2D<T>::getH() const {
                return y;
            }

            template <class T>
            inline void Vector2D<T>::setX(T nX) {
                x = nX;
            }

            template <class T>
            inline void Vector2D<T>::setY(T nY) {
                y = nY;
            }

            template <class T>
            inline void Vector2D<T>::setW(T w) {
                x = w;
            }

            template <class T>
            inline void Vector2D<T>::setH(T h) {
                y = h;
            }

            template <class T>
            inline void Vector2D<T>::setCoord(T nX, T nY) {
                x = nX;
                y = nY;
            }

            template <class T>
            inline void Vector2D<T>::setSize(T w, T h) {
                x = w;
                y = h;
            }

            template <class T>
            inline double Vector2D<T>::norm() const {
                return std::sqrt(normSquared());
            }

            template <class T>
            inline double Vector2D<T>::normSquared() const {
                return static_cast <double> (x * x + y * y);
            }

            template <class T>
            inline void Vector2D<T>::normalize() {
                *this /= static_cast <T> (norm());
            }

            template <class T>
            inline const T* Vector2D<T>::value() const {
                return &x;
            }

            template <class T>
            inline T& Vector2D<T>::operator [](std::size_t index) {
                return *(&x + index);
            }

            template <class T>
            inline T const& Vector2D<T>::operator [](std::size_t index) const {
                return *(&x + index);
            }

            template <class T>
            inline Vector2D<T>& Vector2D<T>::operator +=(Vector2D const& u) {
                x += u.x;
                y += u.y;
                return *this;
            }

            template <class T>
            inline Vector2D<T>& Vector2D<T>::operator -=(Vector2D const& u) {
                x -= u.x;
                y -= u.y;
                return *this;
            }

            template <class T>
            inline Vector2D<T>& Vector2D<T>::operator *=(T k) {
                x *= k;
                y *= k;
                return *this;
            }

            template <class T>
            inline Vector2D<T>& Vector2D<T>::operator *=(Vector2D const& u) {
                x *= u.x;
                y *= u.y;
                return *this;
            }

            template <class T>
            inline Vector2D<T>& Vector2D<T>::operator /=(T k) {
                x /= k;
                y /= k;
                return *this;
            }

            template <class T>
            inline Vector2D<T>& Vector2D<T>::operator /=(Vector2D const& u) {
                x /= u.x;
                y /= u.y;
                return *this;
            }

            template <class T>
            inline double Vector2D<T>::operator |=(Vector2D const& u) const {
                return x * u.x + y * u.y;
            }

            template <class T>
            inline Vector2D<T> Vector2D<T>::operator +(Vector2D const& u) const {
                return Vector2D<T>(*this) += u;
            }

            template <class T>
            inline Vector2D<T> Vector2D<T>::operator -(Vector2D const& u) const {
                return Vector2D<T>(*this) -= u;
            }

            template <class T>
            inline Vector2D<T> Vector2D<T>::operator -() const {
                return Vector2D<T>(-x, -y);
            }

            template <class T>
            inline Vector2D<T> Vector2D<T>::operator *(T k) const {
                return Vector2D<T>(*this) *= k;
            }

            template <class T>
            inline Vector2D<T> Vector2D<T>::operator *(Vector2D const& u) const {
                return Vector2D<T>(*this) *= u;
            }

            template <class T>
            inline Vector2D<T> Vector2D<T>::operator /(T k) const {
                return Vector2D<T>(*this) /= k;
            }

            template <class T>
            inline Vector2D<T> Vector2D<T>::operator /(Vector2D const& u) const {
                return Vector2D<T>(*this) /= u;
            }

            template <class T>
            inline double Vector2D<T>::operator |(Vector2D const& u) const {
                return *this |= u;
            }

            template <class T>
            template <class K>
            inline bool Vector2D<T>::operator ==(Vector2D<K> const& u) const {
                return x == u.x && y == u.y;
            }

            template <>
            template <class K>
            inline bool Vector2D<double>::operator ==(Vector2D<K> const& u) const {
                return almostEqual(x, u.x) && almostEqual(y, u.y);
            }

            template <>
            template <class K>
            inline bool Vector2D<double>::operator ==(Vector2D<K> const& u) const {
                return almostEqual(x, u.x) && almostEqual(y, u.y);
            }

            template <class T>
            template <class K>
            inline bool Vector2D<T>::operator !=(Vector2D<K> const& u) const {
                return !(*this == u);
            }

            template <class T>
            template <class K>
            inline bool Vector2D<T>::operator <(Vector2D<K> const& u) const {
                return normSquared() < u.normSquared();
            }

            template <class T>
            template <class K>
            inline bool Vector2D<T>::operator >(Vector2D<K> const& u) const {
                return normSquared() > u.normSquared();
            }

            template <class T>
            template <class K>
            inline bool Vector2D<T>::operator <=(Vector2D<K> const& u) const {
                return normSquared() <= u.normSquared();
            }

            template <class T>
            template <class K>
            inline bool Vector2D<T>::operator >=(Vector2D<K> const& u) const {
                return normSquared() >= u.normSquared();
            }

            template <class T>
            inline std::string Vector2D<T>::toString() const {
                std::string res("(");
                res += std::to_string(x);
                res += ", ";
                res += std::to_string(y);
                res += ")";
                return res;
            }

            template <class T>
            std::ostream& operator <<(std::ostream& stream, Vector2D<T> const& o) {
                return stream << o.toString();
            }

        }
    }
