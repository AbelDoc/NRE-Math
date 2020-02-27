
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
            constexpr Vector3D<T>::Vector3D(K nX, L nY, N nZ) : x(static_cast <T> (nX)), y(static_cast <T> (nY)), z(static_cast <T> (nZ)) {
            }

            template <class T>
            template <class K>
            constexpr Vector3D<T>::Vector3D(K value) : Vector3D(value, value, value) {
            }
    
            template <class T>
            constexpr Vector3D<T>::Vector3D(std::initializer_list<T> list) : Vector3D(*(list.begin()), *(list.begin() + 1), *(list.begin() + 2)) {
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
            template <class K>
            inline long double Vector3D<T>::distance(Vector3D<K> const& v) const {
                return std::sqrt(static_cast <long double> (distanceSquared(v)));
            }
    
            template <class T>
            template <class K>
            inline std::common_type_t<T, K> Vector3D<T>::distanceSquared(Vector3D<K> const& v) const {
                auto w(*this - v);
                return w.normSquared();
            }

            template <class T>
            inline Vector3D<T>& Vector3D<T>::normalize() {
                return *this /= norm();
            }
    
            template <class T>
            template <class K>
            inline void Vector3D<T>::limit(K max) {
                auto n = norm();
                if (n > max) {
                    normalize();
                }
            }
    
            template <class T>
            template <class K>
            inline Vector3D<T>& Vector3D<T>::pow(K p) {
                setX(std::pow(static_cast <std::common_type_t<T, K>> (x), static_cast <std::common_type_t<T, K>> (p)));
                setY(std::pow(static_cast <std::common_type_t<T, K>> (y), static_cast <std::common_type_t<T, K>> (p)));
                setZ(std::pow(static_cast <std::common_type_t<T, K>> (z), static_cast <std::common_type_t<T, K>> (p)));
                return *this;
            }
    
            template <class T>
            template <class K>
            inline Vector3D<T>& Vector3D<T>::pow(Vector3D<K> const& p) {
                setX(std::pow(static_cast <std::common_type_t<T, K>> (x), static_cast <std::common_type_t<T, K>> (p.getX())));
                setY(std::pow(static_cast <std::common_type_t<T, K>> (y), static_cast <std::common_type_t<T, K>> (p.getY())));
                setZ(std::pow(static_cast <std::common_type_t<T, K>> (z), static_cast <std::common_type_t<T, K>> (p.getZ())));
                return *this;
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
            inline Vector3D<T>& Vector3D<T>::operator +=(K k) {
                setX(static_cast <std::common_type_t<T, K>> (x) + static_cast <std::common_type_t<T, K>> (k));
                setY(static_cast <std::common_type_t<T, K>> (y) + static_cast <std::common_type_t<T, K>> (k));
                setZ(static_cast <std::common_type_t<T, K>> (z) + static_cast <std::common_type_t<T, K>> (k));
                return *this;
            }

            template <class T>
            template <class K>
            inline Vector3D<T>& Vector3D<T>::operator +=(Vector3D<K> const& u) {
                setX(static_cast <std::common_type_t<T, K>> (x) + static_cast <std::common_type_t<T, K>> (u.getX()));
                setY(static_cast <std::common_type_t<T, K>> (y) + static_cast <std::common_type_t<T, K>> (u.getY()));
                setZ(static_cast <std::common_type_t<T, K>> (z) + static_cast <std::common_type_t<T, K>> (u.getZ()));
                return *this;
            }
    
            template <class T>
            template <class K>
            inline Vector3D<T>& Vector3D<T>::operator -=(K k) {
                setX(static_cast <std::common_type_t<T, K>> (x) - static_cast <std::common_type_t<T, K>> (k));
                setY(static_cast <std::common_type_t<T, K>> (y) - static_cast <std::common_type_t<T, K>> (k));
                setZ(static_cast <std::common_type_t<T, K>> (z) - static_cast <std::common_type_t<T, K>> (k));
                return *this;
            }

            template <class T>
            template <class K>
            inline Vector3D<T>& Vector3D<T>::operator -=(Vector3D<K> const& u) {
                setX(static_cast <std::common_type_t<T, K>> (x) - static_cast <std::common_type_t<T, K>> (u.getX()));
                setY(static_cast <std::common_type_t<T, K>> (y) - static_cast <std::common_type_t<T, K>> (u.getY()));
                setZ(static_cast <std::common_type_t<T, K>> (z) - static_cast <std::common_type_t<T, K>> (u.getZ()));
                return *this;
            }

            template <class T>
            template <class K>
            inline Vector3D<T>& Vector3D<T>::operator *=(K k) {
                setX(static_cast <std::common_type_t<T, K>> (x) * static_cast <std::common_type_t<T, K>> (k));
                setY(static_cast <std::common_type_t<T, K>> (y) * static_cast <std::common_type_t<T, K>> (k));
                setZ(static_cast <std::common_type_t<T, K>> (z) * static_cast <std::common_type_t<T, K>> (k));
                return *this;
            }

            template <class T>
            template <class K>
            inline Vector3D<T>& Vector3D<T>::operator *=(Vector3D<K> const& u) {
                setX(static_cast <std::common_type_t<T, K>> (x) * static_cast <std::common_type_t<T, K>> (u.getX()));
                setY(static_cast <std::common_type_t<T, K>> (y) * static_cast <std::common_type_t<T, K>> (u.getY()));
                setZ(static_cast <std::common_type_t<T, K>> (z) * static_cast <std::common_type_t<T, K>> (u.getZ()));
                return *this;
            }

            template <class T>
            template <class K>
            inline Vector3D<T>& Vector3D<T>::operator /=(K k) {
                setX(static_cast <std::common_type_t<T, K>> (x) / static_cast <std::common_type_t<T, K>> (k));
                setY(static_cast <std::common_type_t<T, K>> (y) / static_cast <std::common_type_t<T, K>> (k));
                setZ(static_cast <std::common_type_t<T, K>> (z) / static_cast <std::common_type_t<T, K>> (k));
                return *this;
            }

            template <class T>
            template <class K>
            inline Vector3D<T>& Vector3D<T>::operator /=(Vector3D<K> const& u) {
                setX(static_cast <std::common_type_t<T, K>> (x) / static_cast <std::common_type_t<T, K>> (u.getX()));
                setY(static_cast <std::common_type_t<T, K>> (y) / static_cast <std::common_type_t<T, K>> (u.getY()));
                setZ(static_cast <std::common_type_t<T, K>> (z) / static_cast <std::common_type_t<T, K>> (u.getZ()));
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
            inline Vector3D<std::common_type_t<T, K>> Vector3D<T>::operator +(K k) const {
                return Vector3D<std::common_type_t<T, K>>(*this) += k;
            }

            template <class T>
            template <class K>
            inline Vector3D<std::common_type_t<T, K>> Vector3D<T>::operator +(Vector3D<K> const& u) const {
                return Vector3D<std::common_type_t<T, K>>(*this) += u;
            }
    
            template <class T>
            template <class K>
            inline Vector3D<std::common_type_t<T, K>> Vector3D<T>::operator -(K k) const {
                return Vector3D<std::common_type_t<T, K>>(*this) -= k;
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
    
            template <class T>
            Vector3D<T> normalize(Vector3D<T> const&u) {
                return Vector3D<T>(u).normalize();
            }
        
            template <class T, class K>
            Vector3D<std::common_type_t<T, K>> pow(Vector3D<T> const& u, K k) {
                return Vector3D<std::common_type_t<T, K>>(u).pow(k);
            }
        
            template <class T, class K>
            Vector3D<std::common_type_t<T, K>> pow(Vector3D<T> const& u, Vector3D<K> const& p) {
                return Vector3D<std::common_type_t<T, K>>(u).pow(p);
            }
        
            template <class T, class K>
            Vector3D<std::common_type_t<T, K>> reflect(Vector3D<T> const& u, Vector3D<K> const& n) {
                return Vector3D<std::common_type_t<T, K>>(u) - static_cast <std::common_type_t<T, K>> (2.0) * (n | u) * n;
            }
        }
    }
