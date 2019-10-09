
    /**
     * @file NRE_Vector2D.tpp
     * @brief Implementation of Math's API's Object : Vector2D
     * @author Louis ABEL
     * @date 27/03/2019
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace Math {

            template <class T>
            template <class K, class L>
            inline Vector2D<T>::Vector2D(K nX, L nY) : x(static_cast <T> (nX)), y(static_cast <T> (nY)) {
            }

            template <class T>
            template <class K>
            inline Vector2D<T>::Vector2D(K value) : Vector2D(value, value) {
            }

            template <class T>
            template <class K>
            inline Vector2D<T>::Vector2D(Vector2D<K> const& u) : Vector2D(u.getX(), u.getY()) {
            }

            template <class T>
            template <class K>
            inline Vector2D<T>::Vector2D(Vector3D<K> const& u) : Vector2D(u.getX(), u.getY()) {
            }

            template <class T>
            template <class K>
            inline Vector2D<T>::Vector2D(Vector4D<K> const& u) : Vector2D(u.getX(), u.getY()) {
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
            template <class K>
            inline void Vector2D<T>::setX(K nX) {
                x = static_cast <T> (nX);
            }

            template <class T>
            template <class K>
            inline void Vector2D<T>::setY(K nY) {
                y = static_cast <T> (nY);
            }

            template <class T>
            template <class K>
            inline void Vector2D<T>::setW(K w) {
                setX(w);
            }

            template <class T>
            template <class K>
            inline void Vector2D<T>::setH(K h) {
                setY(h);
            }

            template <class T>
            template <class K, class L>
            inline void Vector2D<T>::setCoord(K nX, L nY) {
                setX(nX);
                setY(nY);
            }

            template <class T>
            template <class K, class L>
            inline void Vector2D<T>::setSize(K w, L h) {
                setX(w);
                setY(h);
            }

            template <class T>
            inline long double Vector2D<T>::norm() const {
                return std::sqrt(static_cast <long double> (normSquared()));
            }

            template <class T>
            inline T Vector2D<T>::normSquared() const {
                return x * x + y * y;
            }

            template <class T>
            inline void Vector2D<T>::normalize() {
                *this /= norm();
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
            template <class K>
            inline Vector2D<T>& Vector2D<T>::operator=(Vector2D<K> const& u) {
                setX(u.getX());
                setY(u.getY());
                return *this;
            }

            template <class T>
            template <class K>
            inline Vector2D<T>& Vector2D<T>::operator=(Vector2D<K> && u) {
                setX(u.getX());
                setY(u.getY());
                return *this;
            }

            template <class T>
            template <class K>
            inline Vector2D<T>& Vector2D<T>::operator +=(Vector2D<K> const& u) {
                x = static_cast <T> (static_cast <std::common_type_t<T, K>> (x) + static_cast <std::common_type_t<T, K>> (u.getX()));
                y = static_cast <T> (static_cast <std::common_type_t<T, K>> (y) + static_cast <std::common_type_t<T, K>> (u.getY()));
                return *this;
            }

            template <class T>
            template <class K>
            inline Vector2D<T>& Vector2D<T>::operator -=(Vector2D<K> const& u) {
                x = static_cast <T> (static_cast <std::common_type_t<T, K>> (x) - static_cast <std::common_type_t<T, K>> (u.getX()));
                y = static_cast <T> (static_cast <std::common_type_t<T, K>> (y) - static_cast <std::common_type_t<T, K>> (u.getY()));
                return *this;
            }

            template <class T>
            template <class K>
            inline Vector2D<T>& Vector2D<T>::operator *=(K k) {
                x = static_cast <T> (static_cast <std::common_type_t<T, K>> (x) * static_cast <std::common_type_t<T, K>> (k));
                y = static_cast <T> (static_cast <std::common_type_t<T, K>> (y) * static_cast <std::common_type_t<T, K>> (k));
                return *this;
            }

            template <class T>
            template <class K>
            inline Vector2D<T>& Vector2D<T>::operator *=(Vector2D<K> const& u) {
                x = static_cast <T> (static_cast <std::common_type_t<T, K>> (x) * static_cast <std::common_type_t<T, K>> (u.getX()));
                y = static_cast <T> (static_cast <std::common_type_t<T, K>> (y) * static_cast <std::common_type_t<T, K>> (u.getY()));
                return *this;
            }

            template <class T>
            template <class K>
            inline Vector2D<T>& Vector2D<T>::operator /=(K k) {
                x = static_cast <T> (static_cast <std::common_type_t<T, K>> (x) / static_cast <std::common_type_t<T, K>> (k));
                y = static_cast <T> (static_cast <std::common_type_t<T, K>> (y) / static_cast <std::common_type_t<T, K>> (k));
                return *this;
            }

            template <class T>
            template <class K>
            inline Vector2D<T>& Vector2D<T>::operator /=(Vector2D<K> const& u) {
                x = static_cast <T> (static_cast <std::common_type_t<T, K>> (x) / static_cast <std::common_type_t<T, K>> (u.getX()));
                y = static_cast <T> (static_cast <std::common_type_t<T, K>> (y) / static_cast <std::common_type_t<T, K>> (u.getY()));
                return *this;
            }

            template <class T>
            template <class K>
            inline std::common_type_t<T, K> Vector2D<T>::operator |=(Vector2D<K> const& u) const {
                return static_cast <std::common_type_t<T, K>> (x * u.getX() + y * u.getY());
            }

            template <class T>
            template <class K>
            inline Vector2D<std::common_type_t<T, K>> Vector2D<T>::operator +(Vector2D<K> const& u) const {
                return Vector2D<std::common_type_t<T, K>>(*this) += u;
            }

            template <class T>
            template <class K>
            inline Vector2D<std::common_type_t<T, K>> Vector2D<T>::operator -(Vector2D<K> const& u) const {
                return Vector2D<std::common_type_t<T, K>>(*this) -= u;
            }

            template <class T>
            inline Vector2D<T> Vector2D<T>::operator -() const {
                return Vector2D<T>(-x, -y);
            }

            template <class T>
            template <class K>
            inline Vector2D<std::common_type_t<T, K>> Vector2D<T>::operator *(K k) const {
                return Vector2D<std::common_type_t<T, K>>(*this) *= k;
            }

            template <class T>
            template <class K>
            inline Vector2D<std::common_type_t<T, K>> Vector2D<T>::operator *(Vector2D<K> const& u) const {
                return Vector2D<std::common_type_t<T, K>>(*this) *= u;
            }

            template <class T>
            template <class K>
            inline Vector2D<std::common_type_t<T, K>> Vector2D<T>::operator /(K k) const {
                return Vector2D<std::common_type_t<T, K>>(*this) /= k;
            }

            template <class T>
            template <class K>
            inline Vector2D<std::common_type_t<T, K>> Vector2D<T>::operator /(Vector2D<K> const& u) const {
                return Vector2D<std::common_type_t<T, K>>(*this) /= u;
            }

            template <class T>
            template <class K>
            inline std::common_type_t<T, K> Vector2D<T>::operator |(Vector2D<K> const& u) const {
                return *this |= u;
            }

            template <class T>
            template <class K>
            inline bool Vector2D<T>::operator ==(Vector2D<K> const& u) const {
                return equal(x, u.getX()) && equal(y, u.getY());
            }

            template <class T>
            template <class K>
            inline bool Vector2D<T>::operator !=(Vector2D<K> const& u) const {
                return !(*this == u);
            }

            template <class T>
            template <class K>
            inline bool Vector2D<T>::operator <(Vector2D<K> const& u) const {
                return static_cast <std::common_type_t<T, K>> (normSquared()) < static_cast <std::common_type_t<T, K>> (u.normSquared());
            }

            template <class T>
            template <class K>
            inline bool Vector2D<T>::operator >(Vector2D<K> const& u) const {
                return static_cast <std::common_type_t<T, K>> (normSquared()) > static_cast <std::common_type_t<T, K>> (u.normSquared());
            }

            template <class T>
            template <class K>
            inline bool Vector2D<T>::operator <=(Vector2D<K> const& u) const {
                return static_cast <std::common_type_t<T, K>> (normSquared()) <= static_cast <std::common_type_t<T, K>> (u.normSquared());
            }

            template <class T>
            template <class K>
            inline bool Vector2D<T>::operator >=(Vector2D<K> const& u) const {
                return static_cast <std::common_type_t<T, K>> (normSquared()) >= static_cast <std::common_type_t<T, K>> (u.normSquared());
            }

            template <class T>
            inline Utility::String Vector2D<T>::toString() const {
                Utility::String res;
                res.reserve(10);
                res << '(';
                res << x;
                res << ", ";
                res << y;
                res << ')';
                return res;
            }

            template <class T>
            std::ostream& operator <<(std::ostream& stream, Vector2D<T> const& o) {
                return stream << o.toString();
            }

        }
    }
