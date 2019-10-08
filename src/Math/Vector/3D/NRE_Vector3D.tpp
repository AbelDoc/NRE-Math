
    /**
     * @file NRE_Vector3D.tpp
     * @brief Implementation of Engine's Math's Object : Vector3D
     * @author Louis ABEL
     * @date 09/09/2018
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace Math {

            template <class T>
            template <class K, class L, class N>
            inline Vector3D<T>::Vector3D(K nX, L nY, N nZ) : x(static_cast <T> (nX)), y(static_cast <T> (nY)), z(static_cast <T> (nZ)) {
            }

            template <class T>
            template <class K>
            inline Vector3D<T>::Vector3D(K value) : x(static_cast <T> (value)), y(static_cast <T> (value)), z(static_cast <T> (value)) {
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
            template <class K>
            inline Vector3D<T>::Vector3D(Vector2D<K> const& u) : x(static_cast <T> (u.getX())), y(static_cast <T> (u.getY())), z(0) {
            }

            template <class T>
            template <class K, class L>
            inline Vector3D<T>::Vector3D(Vector2D<K> const& u, L nZ) : x(static_cast <T> (u.getX())), y(static_cast <T> (u.getY())), z(static_cast <T> (nZ)) {
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
            template <class K>
            inline void Vector3D<T>::setX(K nX) {
                x = static_cast <T> (nX);
            }

            template <class T>
            template <class K>
            inline void Vector3D<T>::setY(K nY) {
                y = static_cast <T> (nY);
            }

            template <class T>
            template <class K>
            inline void Vector3D<T>::setZ(K nZ) {
                z = static_cast <T> (nZ);
            }

            template <class T>
            template <class K>
            inline void Vector3D<T>::setR(K r) {
                x = static_cast <T> (r);
            }

            template <class T>
            template <class K>
            inline void Vector3D<T>::setG(K g) {
                y = static_cast <T> (g);
            }

            template <class T>
            template <class K>
            inline void Vector3D<T>::setB(K b) {
                z = static_cast <T> (b);
            }

            template <class T>
            template <class K, class L, class N>
            inline void Vector3D<T>::setCoord(K nX, L nY, N nZ) {
                setX(nX);
                setY(nY);
                setZ(nZ);
            }

            template <class T>
            template <class K, class L>
            inline void Vector3D<T>::setCoord(Vector2D<K> const& u, L nZ) {
                setX(u.getX());
                setY(u.getY());
                setZ(nZ);
            }

            template <class T>
            template <class K, class L, class N>
            inline void Vector3D<T>::setRGB(K r, L g, N b) {
                setR(r);
                setG(g);
                setB(b);
            }

            template <class T>
            inline long double Vector3D<T>::norm() const {
                return std::sqrt(normSquared());
            }

            template <class T>
            inline long double Vector3D<T>::normSquared() const {
                return static_cast <long double> (x * x + y * y + z * z);
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
            template <class K>
            inline Vector3D<T>& Vector3D<T>::operator=(Vector3D<K> const& u) {
                setX(u.getX());
                setY(u.getY());
                setZ(u.getZ());
                return *this;
            }

            template <class T>
            template <class K>
            inline Vector3D<T>& Vector3D<T>::operator=(Vector3D<K> && u) {
                setX(u.getX());
                setY(u.getY());
                setZ(u.getZ());
                return *this;
            }

            template <class T>
            template <class K>
            inline Vector3D<T>& Vector3D<T>::operator +=(Vector3D<K> const& u) {
                x += static_cast <T> (u.getX());
                y += static_cast <T> (u.getY());
                z += static_cast <T> (u.getZ());
                return *this;
            }

            template <class T>
            template <class K>
            inline Vector3D<T>& Vector3D<T>::operator -=(Vector3D<K> const& u) {
                x -= static_cast <T> (u.getX());
                y -= static_cast <T> (u.getY());
                z -= static_cast <T> (u.getZ());
                return *this;
            }

            template <class T>
            template <class K>
            inline Vector3D<T>& Vector3D<T>::operator *=(K k) {
                x *= static_cast <T> (k);
                y *= static_cast <T> (k);
                z *= static_cast <T> (k);
                return *this;
            }

            template <class T>
            template <class K>
            inline Vector3D<T>& Vector3D<T>::operator *=(Vector3D<K> const& u) {
                x *= static_cast <T> (u.getX());
                y *= static_cast <T> (u.getY());
                z *= static_cast <T> (u.getZ());
                return *this;
            }

            template <class T>
            template <class K>
            inline Vector3D<T>& Vector3D<T>::operator /=(K k) {
                x /= static_cast <T> (k);
                y /= static_cast <T> (k);
                z /= static_cast <T> (k);
                return *this;
            }

            template <class T>
            template <class K>
            inline Vector3D<T>& Vector3D<T>::operator /=(Vector3D<K> const& u) {
                x /= static_cast <T> (u.getX());
                y /= static_cast <T> (u.getY());
                z /= static_cast <T> (u.getZ());
                return *this;
            }

            template <class T>
            template <class K>
            inline std::common_type_t<T, K> Vector3D<T>::operator |=(Vector3D<K> const& u) const {
                return static_cast <std::common_type_t<T, K>> (x * u.getX() + y * u.getY() + z * u.getZ());
            }

            template <class T>
            template <class K>
            inline Vector3D<T>& Vector3D<T>::operator ^=(Vector3D<K> const& u) {
                setCoord(y * static_cast <T> (u.getZ()) - z * static_cast <T> (u.getY()),
                         z * static_cast <T> (u.getX()) - x * static_cast <T> (u.getZ()),
                         x * static_cast <T> (u.getY()) - y * static_cast <T> (u.getX()));
                return *this;
            }

            template <class T>
            template <class K>
            inline Vector3D<std::common_type_t<T, K>> Vector3D<T>::operator +(Vector3D<K> const& u) const {
                return Vector3D<std::common_type_t<T, K>>(*this) += u;
            }

            template <class T>
            template <class K>
            inline Vector3D<std::common_type_t<T, K>> Vector3D<T>::operator -(Vector3D<K> const& u) const {
                return Vector3D<std::common_type_t<T, K>>(*this) -= u;
            }

            template <class T>
            inline Vector3D<T> Vector3D<T>::operator -() const {
                return Vector3D<T>(-x, -y, -z);
            }

            template <class T>
            template <class K>
            inline Vector3D<std::common_type_t<T, K>> Vector3D<T>::operator *(K k) const {
                return Vector3D<std::common_type_t<T, K>>(*this) *= k;
            }

            template <class T>
            template <class K>
            inline Vector3D<std::common_type_t<T, K>> Vector3D<T>::operator *(Vector3D<K> const& u) const {
                return Vector3D<std::common_type_t<T, K>>(*this) *= u;
            }

            template <class T>
            template <class K>
            inline Vector3D<std::common_type_t<T, K>> Vector3D<T>::operator /(K k) const {
                return Vector3D<std::common_type_t<T, K>>(*this) /= k;
            }

            template <class T>
            template <class K>
            inline Vector3D<std::common_type_t<T, K>> Vector3D<T>::operator /(Vector3D<K> const& u) const {
                return Vector3D<std::common_type_t<T, K>>(*this) /= u;
            }

            template <class T>
            template <class K>
            inline std::common_type_t<T, K> Vector3D<T>::operator |(Vector3D<K> const& u) const {
                return *this |= u;
            }

            template <class T>
            template <class K>
            inline Vector3D<std::common_type_t<T, K>> Vector3D<T>::operator ^(Vector3D<K> const& u) const {
                return Vector3D<std::common_type_t<T, K>>(*this) ^= u;
            }

            template <class T>
            template <class K>
            inline bool Vector3D<T>::operator ==(Vector3D<K> const& u) const {
                return equal(x, u.getX()) && equal(y, u.getY()) && equal(z, u.getZ());
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
            inline Utility::String Vector3D<T>::toString() const {
                Utility::String res;
                res.reserve(15);
                res << '(';
                res << x;
                res << ", ";
                res << y;
                res << ", ";
                res << z;
                res << ')';
                return res;
            }

            template <class T>
            std::ostream& operator <<(std::ostream& stream, Vector3D<T> const& o) {
                return stream << o.toString();
            }

        }
    }
