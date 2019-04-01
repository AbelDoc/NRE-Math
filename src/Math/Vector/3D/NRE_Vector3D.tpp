
    /**
     * @file NRE_Vector3D.tpp
     * @brief Implementation of Engine's Math's Object : Vector3D
     * @author Louis ABEL
     * @date 09/09/2018
     * @copyright GNU GPL v3
     */

    namespace NRE {
        namespace Math {

            template <class T>
            inline Vector3D<T>::Vector3D(T nX, T nY, T nZ) : x(nX), y(nY), z(nZ) {
            }

            template <class T>
            inline Vector3D<T>::Vector3D(T value) : x(value), y(value), z(value) {
            }

            template <class T>
            template <class K>
            inline Vector3D<T>::Vector3D(Vector3D<K> const& u) : x(static_cast <T> (u.getX())), y(static_cast <T> (u.getY())), z(static_cast <T> (u.getZ())) {
            }

            template <class T>
            template <class K>
            inline Vector3D<T>::Vector3D(Vector4D<K> const& u) : x(static_cast <T> (u.getX())), y(static_cast <T> (u.getY())), z(static_cast <T> (u.getZ())) {
            }

            template <class T>
            inline Vector3D<T>::Vector3D(Vector2D<T> const& u) : x(u.getX()), y(u.getY()), z(0) {
            }

            template <class T>
            inline Vector3D<T>::Vector3D(Vector2D<T> const& u, T nZ) : x(u.getX()), y(u.getY()), z(nZ) {
            }

            template <class T>
            inline T Vector3D<T>::getX() const {
                return x;
            }

            template <class T>
            inline T Vector3D<T>::getY() const {
                return y;
            }

            template <class T>
            inline T Vector3D<T>::getZ() const {
                return z;
            }

            template <class T>
            inline T Vector3D<T>::getR() const {
                return x;
            }

            template <class T>
            inline T Vector3D<T>::getG() const {
                return y;
            }

            template <class T>
            inline T Vector3D<T>::getB() const {
                return z;
            }

            template <class T>
            inline void Vector3D<T>::setX(T nX) {
                x = nX;
            }

            template <class T>
            inline void Vector3D<T>::setY(T nY) {
                y = nY;
            }

            template <class T>
            inline void Vector3D<T>::setZ(T nZ) {
                z = nZ;
            }

            template <class T>
            inline void Vector3D<T>::setR(T r) {
                x = r;
            }

            template <class T>
            inline void Vector3D<T>::setG(T g) {
                y = g;
            }

            template <class T>
            inline void Vector3D<T>::setB(T b) {
                z = b;
            }

            template <class T>
            inline void Vector3D<T>::setCoord(T nX, T nY, T nZ) {
                x = nX;
                y = nY;
                z = nZ;
            }

            template <class T>
            inline void Vector3D<T>::setCoord(Vector2D<T> const& u, T nZ) {
                x = u.x;
                y = u.y;
                z = nZ;
            }

            template <class T>
            inline void Vector3D<T>::setRGB(T r, T g, T b) {
                x = r;
                y = g;
                z = b;
            }

            template <class T>
            inline float Vector3D<T>::norm() const {
                return std::sqrt(normSquared());
            }

            template <class T>
            inline float Vector3D<T>::normSquared() const {
                return static_cast <float> (x * x + y * y + z * z);
            }

            template <class T>
            inline void Vector3D<T>::normalize() {
                *this /= static_cast <T> (norm());
            }

            template <class T>
            inline const T* Vector3D<T>::value() const {
                return &x;
            }

            template <class T>
            inline T& Vector3D<T>::operator [](std::size_t index) {
                return *(&x + index);
            }

            template <class T>
            inline T const& Vector3D<T>::operator [](std::size_t index) const {
                return *(&x + index);
            }

            template <class T>
            inline Vector3D<T>& Vector3D<T>::operator +=(Vector3D const& u) {
                x += u.x;
                y += u.y;
                z += u.z;
                return *this;
            }

            template <class T>
            inline Vector3D<T>& Vector3D<T>::operator -=(Vector3D const& u) {
                x -= u.x;
                y -= u.y;
                z -= u.z;
                return *this;
            }

            template <class T>
            inline Vector3D<T>& Vector3D<T>::operator *=(T k) {
                x *= k;
                y *= k;
                z *= k;
                return *this;
            }

            template <class T>
            inline Vector3D<T>& Vector3D<T>::operator *=(Vector3D const& u) {
                x *= u.x;
                y *= u.y;
                z *= u.z;
                return *this;
            }

            template <class T>
            inline Vector3D<T>& Vector3D<T>::operator /=(T k) {
                x /= k;
                y /= k;
                z /= k;
                return *this;
            }

            template <class T>
            inline Vector3D<T>& Vector3D<T>::operator /=(Vector3D const& u) {
                x /= u.x;
                y /= u.y;
                z /= u.z;
                return *this;
            }

            template <class T>
            inline float Vector3D<T>::operator |=(Vector3D const& u) const {
                return x * u.x + y * u.y + z * u.z;
            }

            template <class T>
            inline Vector3D<T>& Vector3D<T>::operator ^=(Vector3D const& u) {
                setCoord(y * u.z - z * u.y,
                         z * u.x - x * u.z,
                         x * u.y - y * u.x);
                return *this;
            }

            template <class T>
            inline Vector3D<T> Vector3D<T>::operator +(Vector3D const& u) const {
                return Vector3D<T>(*this) += u;
            }

            template <class T>
            inline Vector3D<T> Vector3D<T>::operator -(Vector3D const& u) const {
                return Vector3D<T>(*this) -= u;
            }

            template <class T>
            inline Vector3D<T> Vector3D<T>::operator -() const {
                return Vector3D<T>(-x, -y, -z);
            }

            template <class T>
            inline Vector3D<T> Vector3D<T>::operator *(T k) const {
                return Vector3D<T>(*this) *= k;
            }

            template <class T>
            inline Vector3D<T> Vector3D<T>::operator *(Vector3D const& u) const {
                return Vector3D<T>(*this) *= u;
            }

            template <class T>
            inline Vector3D<T> Vector3D<T>::operator /(T k) const {
                return Vector3D<T>(*this) /= k;
            }

            template <class T>
            inline Vector3D<T> Vector3D<T>::operator /(Vector3D const& u) const {
                return Vector3D<T>(*this) /= u;
            }

            template <class T>
            inline float Vector3D<T>::operator |(Vector3D const& u) const {
                return *this |= u;
            }

            template <class T>
            inline Vector3D<T> Vector3D<T>::operator ^(Vector3D const& u) const {
                return Vector3D<T>(*this) ^= u;
            }

            template <class T>
            template <class K>
            inline bool Vector3D<T>::operator ==(Vector3D<K> const& u) const {
                return x == u.x && y == u.y && z == u.z;
            }

            template <>
            template <class K>
            inline bool Vector3D<float>::operator ==(Vector3D<K> const& u) const {
                return almostEqual(x, u.x) && almostEqual(y, u.y) && almostEqual(z, u.z);
            }

            template <>
            template <class K>
            inline bool Vector3D<float>::operator ==(Vector3D<K> const& u) const {
                return almostEqual(x, u.x) && almostEqual(y, u.y) && almostEqual(z, u.z);
            }

            template <class T>
            template <class K>
            inline bool Vector3D<T>::operator !=(Vector3D<K> const& u) const {
                return !(*this == u);
            }

            template <class T>
            template <class K>
            inline bool Vector3D<T>::operator <(Vector3D<K> const& u) const {
                return normSquared() < u.normSquared();
            }

            template <class T>
            template <class K>
            inline bool Vector3D<T>::operator >(Vector3D<K> const& u) const {
                return normSquared() > u.normSquared();
            }

            template <class T>
            template <class K>
            inline bool Vector3D<T>::operator <=(Vector3D<K> const& u) const {
                return normSquared() <= u.normSquared();
            }

            template <class T>
            template <class K>
            inline bool Vector3D<T>::operator >=(Vector3D<K> const& u) const {
                return normSquared() >= u.normSquared();
            }

            template <class T>
            inline std::string Vector3D<T>::toString() const {
                std::string res("(");
                res += std::to_string(x);
                res += ", ";
                res += std::to_string(y);
                res += ", ";
                res += std::to_string(z);
                res += ")";
                return res;
            }

            template <class T>
            std::ostream& operator <<(std::ostream& stream, Vector3D<T> const& o) {
                return stream << o.toString();
            }

        }
    }
