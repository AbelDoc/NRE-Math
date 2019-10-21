
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
            inline Vector3D<T>::Vector3D(K value) : Vector3D(value, value, value) {
            }
    
            template <class T>
            inline Vector3D<T>::Vector3D(std::initializer_list<T> list) : Vector3D(*(list.begin()), *(list.begin() + 1), *(list.begin() + 2)) {
                assert(list.size() == 3);
            }

            template <class T>
            template <class K>
            inline Vector3D<T>::Vector3D(Vector3D<K> const& u) : Vector3D(u.getX(), u.getY(), u.getZ()) {
            }

            template <class T>
            template <class K>
            inline Vector3D<T>::Vector3D(Vector4D<K> const& u) : Vector3D(u.getX(), u.getY(), u.getZ()) {
            }

            template <class T>
            template <class K>
            inline Vector3D<T>::Vector3D(Vector2D<K> const& u) : Vector3D(u.getX(), u.getY(), 0) {
            }

            template <class T>
            template <class K, class L>
            inline Vector3D<T>::Vector3D(Vector2D<K> const& u, L nZ) : Vector3D(u.getX(), u.getY(), nZ) {
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
                setX(r);
            }

            template <class T>
            template <class K>
            inline void Vector3D<T>::setG(K g) {
                setY(g);
            }

            template <class T>
            template <class K>
            inline void Vector3D<T>::setB(K b) {
                setZ(b);
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
                return std::sqrt(static_cast <long double> (normSquared()));
            }

            template <class T>
            inline T Vector3D<T>::normSquared() const {
                return x * x + y * y + z * z;
            }

            template <class T>
            inline void Vector3D<T>::normalize() {
                *this /= norm();
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
                x = static_cast <T> (static_cast <std::common_type_t<T, K>> (x) + static_cast <std::common_type_t<T, K>> (u.getX()));
                y = static_cast <T> (static_cast <std::common_type_t<T, K>> (y) + static_cast <std::common_type_t<T, K>> (u.getY()));
                z = static_cast <T> (static_cast <std::common_type_t<T, K>> (z) + static_cast <std::common_type_t<T, K>> (u.getZ()));
                return *this;
            }

            template <class T>
            template <class K>
            inline Vector3D<T>& Vector3D<T>::operator -=(Vector3D<K> const& u) {
                x = static_cast <T> (static_cast <std::common_type_t<T, K>> (x) - static_cast <std::common_type_t<T, K>> (u.getX()));
                y = static_cast <T> (static_cast <std::common_type_t<T, K>> (y) - static_cast <std::common_type_t<T, K>> (u.getY()));
                z = static_cast <T> (static_cast <std::common_type_t<T, K>> (z) - static_cast <std::common_type_t<T, K>> (u.getZ()));
                return *this;
            }

            template <class T>
            template <class K>
            inline Vector3D<T>& Vector3D<T>::operator *=(K k) {
                x = static_cast <T> (static_cast <std::common_type_t<T, K>> (x) * static_cast <std::common_type_t<T, K>> (k));
                y = static_cast <T> (static_cast <std::common_type_t<T, K>> (y) * static_cast <std::common_type_t<T, K>> (k));
                z = static_cast <T> (static_cast <std::common_type_t<T, K>> (z) * static_cast <std::common_type_t<T, K>> (k));
                return *this;
            }

            template <class T>
            template <class K>
            inline Vector3D<T>& Vector3D<T>::operator *=(Vector3D<K> const& u) {
                x = static_cast <T> (static_cast <std::common_type_t<T, K>> (x) * static_cast <std::common_type_t<T, K>> (u.getX()));
                y = static_cast <T> (static_cast <std::common_type_t<T, K>> (y) * static_cast <std::common_type_t<T, K>> (u.getY()));
                z = static_cast <T> (static_cast <std::common_type_t<T, K>> (z) * static_cast <std::common_type_t<T, K>> (u.getZ()));
                return *this;
            }

            template <class T>
            template <class K>
            inline Vector3D<T>& Vector3D<T>::operator /=(K k) {
                x = static_cast <T> (static_cast <std::common_type_t<T, K>> (x) / static_cast <std::common_type_t<T, K>> (k));
                y = static_cast <T> (static_cast <std::common_type_t<T, K>> (y) / static_cast <std::common_type_t<T, K>> (k));
                z = static_cast <T> (static_cast <std::common_type_t<T, K>> (z) / static_cast <std::common_type_t<T, K>> (k));
                return *this;
            }

            template <class T>
            template <class K>
            inline Vector3D<T>& Vector3D<T>::operator /=(Vector3D<K> const& u) {
                x = static_cast <T> (static_cast <std::common_type_t<T, K>> (x) / static_cast <std::common_type_t<T, K>> (u.getX()));
                y = static_cast <T> (static_cast <std::common_type_t<T, K>> (y) / static_cast <std::common_type_t<T, K>> (u.getY()));
                z = static_cast <T> (static_cast <std::common_type_t<T, K>> (z) / static_cast <std::common_type_t<T, K>> (u.getZ()));
                return *this;
            }

            template <class T>
            template <class K>
            inline std::common_type_t<T, K> Vector3D<T>::operator |=(Vector3D<K> const& u) const {
                return static_cast <std::common_type_t<T, K>> (x) * static_cast <std::common_type_t<T, K>> (u.getX())
                     + static_cast <std::common_type_t<T, K>> (y) * static_cast <std::common_type_t<T, K>> (u.getY())
                     + static_cast <std::common_type_t<T, K>> (z) * static_cast <std::common_type_t<T, K>> (u.getZ());
            }

            template <class T>
            template <class K>
            inline Vector3D<T>& Vector3D<T>::operator ^=(Vector3D<K> const& u) {
                setCoord(static_cast <std::common_type_t<T, K>> (y) * static_cast <std::common_type_t<T, K>> (u.getZ()) - static_cast <std::common_type_t<T, K>> (z) * static_cast <std::common_type_t<T, K>> (u.getY()),
                         static_cast <std::common_type_t<T, K>> (z) * static_cast <std::common_type_t<T, K>> (u.getX()) - static_cast <std::common_type_t<T, K>> (x) * static_cast <std::common_type_t<T, K>> (u.getZ()),
                         static_cast <std::common_type_t<T, K>> (x) * static_cast <std::common_type_t<T, K>> (u.getY()) - static_cast <std::common_type_t<T, K>> (y) * static_cast <std::common_type_t<T, K>> (u.getX()));
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
                return static_cast <std::common_type_t<T, K>> (normSquared()) < static_cast <std::common_type_t<T, K>> (u.normSquared());
            }

            template <class T>
            template <class K>
            inline bool Vector3D<T>::operator >(Vector3D<K> const& u) const {
                return static_cast <std::common_type_t<T, K>> (normSquared()) > static_cast <std::common_type_t<T, K>> (u.normSquared());
            }

            template <class T>
            template <class K>
            inline bool Vector3D<T>::operator <=(Vector3D<K> const& u) const {
                return static_cast <std::common_type_t<T, K>> (normSquared()) <= static_cast <std::common_type_t<T, K>> (u.normSquared());
            }

            template <class T>
            template <class K>
            inline bool Vector3D<T>::operator >=(Vector3D<K> const& u) const {
                return static_cast <std::common_type_t<T, K>> (normSquared()) >= static_cast <std::common_type_t<T, K>> (u.normSquared());
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
        }
    }
