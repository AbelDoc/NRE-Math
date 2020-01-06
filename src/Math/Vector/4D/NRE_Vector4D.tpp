
    /**
     * @file NRE_Vector4D.tpp
     * @brief Implementation of Engine's Math's Object : Vector4D
     * @author Louis ABEL
     * @date 09/09/2018
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace Math {

            template <class T>
            template <class K, class L, class N, class M>
            inline Vector4D<T>::Vector4D(K nX, L nY, N nZ, M nW) : x(static_cast <T> (nX)), y(static_cast <T> (nY)), z(static_cast <T> (nZ)), w(static_cast <T> (nW)) {
            }

            template <class T>
            template <class K>
            inline Vector4D<T>::Vector4D(K value) : Vector4D(value, value, value, value) {
            }
    
            template <class T>
            inline Vector4D<T>::Vector4D(std::initializer_list<T> list) : Vector4D(*(list.begin()), *(list.begin() + 1), *(list.begin() + 2), *(list.begin() + 3)) {
                assert(list.size() == 4);
            }

            template <class T>
            template <class K>
            inline Vector4D<T>::Vector4D(Vector4D<K> const& u) : Vector4D(u.getX(), u.getY(), u.getZ(), u.getW()) {
            }

            template <class T>
            template <class K>
            inline Vector4D<T>::Vector4D(Vector2D<K> const& u) : Vector4D(u.getX(), u.getY(), 0, 0) {
            }

            template <class T>
            template <class K, class L, class N>
            inline Vector4D<T>::Vector4D(Vector2D<K> const& u, L nZ, N nW) : Vector4D(u.getX(), u.getY(), nZ, nW) {
            }

            template <class T>
            template <class K>
            inline Vector4D<T>::Vector4D(Vector3D<K> const& u) : Vector4D(u.getX(), u.getY(), u.getZ(), 0) {
            }

            template <class T>
            template <class K, class L>
            inline Vector4D<T>::Vector4D(Vector3D<K> const& u, L nW) : Vector4D(u.getX(), u.getY(), u.getZ(), nW) {
            }

            template <class T>
            inline T Vector4D<T>::getX() const {
                return x;
            }

            template <class T>
            inline T Vector4D<T>::getY() const {
                return y;
            }

            template <class T>
            inline T Vector4D<T>::getZ() const {
                return z;
            }

            template <class T>
            inline T Vector4D<T>::getW() const {
                return w;
            }

            template <class T>
            inline T Vector4D<T>::getR() const {
                return x;
            }

            template <class T>
            inline T Vector4D<T>::getG() const {
                return y;
            }

            template <class T>
            inline T Vector4D<T>::getB() const {
                return z;
            }

            template <class T>
            inline T Vector4D<T>::getA() const {
                return w;
            }

            template <class T>
            template <class K>
            inline void Vector4D<T>::setX(K nX) {
                x = static_cast <T> (nX);
            }

            template <class T>
            template <class K>
            inline void Vector4D<T>::setY(K nY) {
                y = static_cast <T> (nY);
            }

            template <class T>
            template <class K>
            inline void Vector4D<T>::setZ(K nZ) {
                z = static_cast <T> (nZ);
            }

            template <class T>
            template <class K>
            inline void Vector4D<T>::setW(K nW) {
                w = static_cast <T> (nW);
            }

            template <class T>
            template <class K>
            inline void Vector4D<T>::setR(K r) {
                setX(r);
            }

            template <class T>
            template <class K>
            inline void Vector4D<T>::setG(K g) {
                setY(g);
            }

            template <class T>
            template <class K>
            inline void Vector4D<T>::setB(K b) {
                setZ(b);
            }

            template <class T>
            template <class K>
            inline void Vector4D<T>::setA(K a) {
                setW(a);
            }

            template <class T>
            template <class K, class L, class N, class M>
            inline void Vector4D<T>::setCoord(K nX, L nY, N nZ, M nW) {
                setX(nX);
                setY(nY);
                setZ(nZ);
                setW(nW);
            }

            template <class T>
            template <class K, class L, class N>
            inline void Vector4D<T>::setCoord(Vector2D<K> const& u, L nZ, N nW) {
                setX(u.getX());
                setY(u.getY());
                setZ(nZ);
                setW(nW);
            }

            template <class T>
            template <class K, class L>
            inline void Vector4D<T>::setCoord(Vector3D<K> const& u, L nW) {
                setX(u.getX());
                setY(u.getY());
                setZ(u.getZ());
                setW(nW);
            }

            template <class T>
            template <class K, class L, class N, class M>
            inline void Vector4D<T>::setRGBA(K r, L g, N b, M a) {
                setX(r);
                setY(g);
                setZ(b);
                setW(a);
            }

            template <class T>
            template <class K, class L>
            inline void Vector4D<T>::setRGBA(Vector3D<K> const& u, L a) {
                setX(u.getX());
                setY(u.getY());
                setZ(u.getZ());
                setW(a);
            }

            template <class T>
            inline long double Vector4D<T>::norm() const {
                return std::sqrt(static_cast <long double> (normSquared()));
            }

            template <class T>
            inline T Vector4D<T>::normSquared() const {
                return x * x + y * y + z * z + w * w;
            }
    
            template <class T>
            template <class K>
            inline long double Vector4D<T>::distance(Vector4D<K> const& v) const {
                return std::sqrt(static_cast <long double> (distanceSquared(v)));
            }
    
            template <class T>
            template <class K>
            inline std::common_type_t<T, K> Vector4D<T>::distanceSquared(Vector4D<K> const& v) const {
                std::common_type_t<T, K> dx = x - v.getX();
                std::common_type_t<T, K> dy = y - v.getY();
                std::common_type_t<T, K> dz = z - v.getZ();
                std::common_type_t<T, K> dw = w - v.getW();
                return dx * dx + dy * dy + dz * dz + dw * dw;
            }

            template <class T>
            inline void Vector4D<T>::normalize() {
                *this /= static_cast <T> (norm());
            }

            template <class T>
            inline const T* Vector4D<T>::value() const {
                return &x;
            }

            template <class T>
            inline T& Vector4D<T>::operator [](std::size_t index) {
                return *(&x + index);
            }

            template <class T>
            inline T const& Vector4D<T>::operator [](std::size_t index) const {
                return *(&x + index);
            }

            template <class T>
            template <class K>
            inline Vector4D<T>& Vector4D<T>::operator=(Vector4D<K> const& u) {
                setX(u.getX());
                setY(u.getY());
                setZ(u.getZ());
                setW(u.getW());
                return *this;
            }

            template <class T>
            template <class K>
            inline Vector4D<T>& Vector4D<T>::operator=(Vector4D<K> && u) {
                setX(u.getX());
                setY(u.getY());
                setZ(u.getZ());
                setW(u.getW());
                return *this;
            }

            template <class T>
            template <class K>
            inline Vector4D<T>& Vector4D<T>::operator +=(Vector4D<K> const& u) {
                x = static_cast <T> (static_cast <std::common_type_t<T, K>> (x) + static_cast <std::common_type_t<T, K>> (u.getX()));
                y = static_cast <T> (static_cast <std::common_type_t<T, K>> (y) + static_cast <std::common_type_t<T, K>> (u.getY()));
                z = static_cast <T> (static_cast <std::common_type_t<T, K>> (z) + static_cast <std::common_type_t<T, K>> (u.getZ()));
                w = static_cast <T> (static_cast <std::common_type_t<T, K>> (w) + static_cast <std::common_type_t<T, K>> (u.getW()));
                return *this;
            }

            template <class T>
            template <class K>
            inline Vector4D<T>& Vector4D<T>::operator -=(Vector4D<K> const& u) {
                x = static_cast <T> (static_cast <std::common_type_t<T, K>> (x) - static_cast <std::common_type_t<T, K>> (u.getX()));
                y = static_cast <T> (static_cast <std::common_type_t<T, K>> (y) - static_cast <std::common_type_t<T, K>> (u.getY()));
                z = static_cast <T> (static_cast <std::common_type_t<T, K>> (z) - static_cast <std::common_type_t<T, K>> (u.getZ()));
                w = static_cast <T> (static_cast <std::common_type_t<T, K>> (w) - static_cast <std::common_type_t<T, K>> (u.getW()));
                return *this;
            }

            template <class T>
            template <class K>
            inline Vector4D<T>& Vector4D<T>::operator *=(K k) {
                x = static_cast <T> (static_cast <std::common_type_t<T, K>> (x) * static_cast <std::common_type_t<T, K>> (k));
                y = static_cast <T> (static_cast <std::common_type_t<T, K>> (y) * static_cast <std::common_type_t<T, K>> (k));
                z = static_cast <T> (static_cast <std::common_type_t<T, K>> (z) * static_cast <std::common_type_t<T, K>> (k));
                w = static_cast <T> (static_cast <std::common_type_t<T, K>> (w) * static_cast <std::common_type_t<T, K>> (k));
                return *this;
            }

            template <class T>
            template <class K>
            inline Vector4D<T>& Vector4D<T>::operator *=(Vector4D<K> const& u) {
                x = static_cast <T> (static_cast <std::common_type_t<T, K>> (x) * static_cast <std::common_type_t<T, K>> (u.getX()));
                y = static_cast <T> (static_cast <std::common_type_t<T, K>> (y) * static_cast <std::common_type_t<T, K>> (u.getY()));
                z = static_cast <T> (static_cast <std::common_type_t<T, K>> (z) * static_cast <std::common_type_t<T, K>> (u.getZ()));
                w = static_cast <T> (static_cast <std::common_type_t<T, K>> (w) * static_cast <std::common_type_t<T, K>> (u.getW()));
                return *this;
            }

            template <class T>
            template <class K>
            inline Vector4D<T>& Vector4D<T>::operator /=(K k) {
                x = static_cast <T> (static_cast <std::common_type_t<T, K>> (x) / static_cast <std::common_type_t<T, K>> (k));
                y = static_cast <T> (static_cast <std::common_type_t<T, K>> (y) / static_cast <std::common_type_t<T, K>> (k));
                z = static_cast <T> (static_cast <std::common_type_t<T, K>> (z) / static_cast <std::common_type_t<T, K>> (k));
                w = static_cast <T> (static_cast <std::common_type_t<T, K>> (w) / static_cast <std::common_type_t<T, K>> (k));
                return *this;
            }

            template <class T>
            template <class K>
            inline Vector4D<T>& Vector4D<T>::operator /=(Vector4D<K> const& u) {
                x = static_cast <T> (static_cast <std::common_type_t<T, K>> (x) / static_cast <std::common_type_t<T, K>> (u.getX()));
                y = static_cast <T> (static_cast <std::common_type_t<T, K>> (y) / static_cast <std::common_type_t<T, K>> (u.getY()));
                z = static_cast <T> (static_cast <std::common_type_t<T, K>> (z) / static_cast <std::common_type_t<T, K>> (u.getZ()));
                w = static_cast <T> (static_cast <std::common_type_t<T, K>> (w) / static_cast <std::common_type_t<T, K>> (u.getW()));
                return *this;
            }

            template <class T>
            template <class K>
            inline std::common_type_t<T, K> Vector4D<T>::operator |=(Vector4D<K> const& u) const {
                return static_cast <std::common_type_t<T, K>> (x) * static_cast <std::common_type_t<T, K>> (u.getX())
                     + static_cast <std::common_type_t<T, K>> (y) * static_cast <std::common_type_t<T, K>> (u.getY())
                     + static_cast <std::common_type_t<T, K>> (z) * static_cast <std::common_type_t<T, K>> (u.getZ())
                     + static_cast <std::common_type_t<T, K>> (w) * static_cast <std::common_type_t<T, K>> (u.getW());
            }

            template <class T>
            template <class K>
            inline Vector4D<T>& Vector4D<T>::operator ^=(Vector4D<K> const& u) {
                setCoord(y * static_cast <T> (u.getZ()) - z * static_cast <T> (u.getY()),
                         z * static_cast <T> (u.getX()) - x * static_cast <T> (u.getZ()),
                         x * static_cast <T> (u.getY()) - y * static_cast <T> (u.getX()),
                         0);
                return *this;
            }

            template <class T>
            template <class K>
            inline Vector4D<std::common_type_t<T, K>> Vector4D<T>::operator +(Vector4D<K> const& u) const {
                return Vector4D<std::common_type_t<T, K>>(*this) += u;
            }

            template <class T>
            template <class K>
            inline Vector4D<std::common_type_t<T, K>> Vector4D<T>::operator -(Vector4D<K> const& u) const {
                return Vector4D<std::common_type_t<T, K>>(*this) -= u;
            }

            template <class T>
            inline Vector4D<T> Vector4D<T>::operator -() const {
                return Vector4D<T>(-x, -y, -z, -w);
            }

            template <class T>
            template <class K>
            inline Vector4D<std::common_type_t<T, K>> Vector4D<T>::operator *(K k) const {
                return Vector4D<std::common_type_t<T, K>>(*this) *= k;
            }

            template <class T>
            template <class K>
            inline Vector4D<std::common_type_t<T, K>> Vector4D<T>::operator *(Vector4D<K> const& u) const {
                return Vector4D<std::common_type_t<T, K>>(*this) *= u;
            }

            template <class T>
            template <class K>
            inline Vector4D<std::common_type_t<T, K>> Vector4D<T>::operator /(K k) const {
                return Vector4D<std::common_type_t<T, K>>(*this) /= k;
            }

            template <class T>
            template <class K>
            inline Vector4D<std::common_type_t<T, K>> Vector4D<T>::operator /(Vector4D<K> const& u) const {
                return Vector4D<std::common_type_t<T, K>>(*this) /= u;
            }

            template <class T>
            template <class K>
            inline Vector4D<std::common_type_t<T, K>> Vector4D<T>::operator ^(Vector4D<K> const& u) const {
                return Vector4D<std::common_type_t<T, K>>(*this) ^= u;
            }

            template <class T>
            template <class K>
            inline std::common_type_t<T, K> Vector4D<T>::operator |(Vector4D<K> const& u) const {
                return *this |= u;
            }

            template <class T>
            template <class K>
            inline bool Vector4D<T>::operator ==(Vector4D<K> const& u) const {
                return equal(x, u.getX()) && equal(y, u.getY()) && equal(z, u.getZ()) && equal(w, u.getW());
            }

            template <class T>
            template <class K>
            inline bool Vector4D<T>::operator !=(Vector4D<K> const& u) const {
                return !(*this == u);
            }

            template <class T>
            template <class K>
            inline bool Vector4D<T>::operator <(Vector4D<K> const& u) const {
                return static_cast <std::common_type_t<T, K>> (normSquared()) < static_cast <std::common_type_t<T, K>> (u.normSquared());
            }

            template <class T>
            template <class K>
            inline bool Vector4D<T>::operator >(Vector4D<K> const& u) const {
                return static_cast <std::common_type_t<T, K>> (normSquared()) > static_cast <std::common_type_t<T, K>> (u.normSquared());
            }

            template <class T>
            template <class K>
            inline bool Vector4D<T>::operator <=(Vector4D<K> const& u) const {
                return static_cast <std::common_type_t<T, K>> (normSquared()) <= static_cast <std::common_type_t<T, K>> (u.normSquared());
            }

            template <class T>
            template <class K>
            inline bool Vector4D<T>::operator >=(Vector4D<K> const& u) const {
                return static_cast <std::common_type_t<T, K>> (normSquared()) >= static_cast <std::common_type_t<T, K>> (u.normSquared());
            }

            template <class T>
            inline Utility::String Vector4D<T>::toString() const {
                Utility::String res;
                res.reserve(15);
                res << '(';
                res << x;
                res << ", ";
                res << y;
                res << ", ";
                res << z;
                res << ", ";
                res << w;
                res << ')';
                return res;
            }
        }
    }
