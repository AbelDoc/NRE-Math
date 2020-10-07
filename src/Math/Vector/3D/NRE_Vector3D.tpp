
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
            constexpr Vector3D<T>::Vector3D(std::initializer_list<T> list) : Vector3D(*(list.begin()), *(list.begin() + 1), *(list.begin() + 2)) {
                assert(list.size() == 3);
            }
            
            template <class T>
            template <class K>
            constexpr Vector3D<T>::Vector3D(Vector3D<K> const& u)  : Vector3D(u.getX(), u.getY(), u.getZ()) {
            }
    
            template <class T>
            template <class K>
            constexpr Vector3D<T>::Vector3D(Vector2D<K> const& u) : Vector3D(u.getX(), u.getY(), 0) {
            }
    
            template <class T>
            template <class K>
            constexpr Vector3D<T>::Vector3D(Vector4D<K> const& u) : Vector3D(u.getX(), u.getY(), u.getZ()) {
            }

            template <class T>
            constexpr T Vector3D<T>::getX() const {
                return x;
            }

            template <class T>
            constexpr T Vector3D<T>::getY() const {
                return y;
            }

            template <class T>
            constexpr T Vector3D<T>::getZ() const {
                return z;
            }

            template <class T>
            constexpr T Vector3D<T>::getR() const {
                return x;
            }

            template <class T>
            constexpr T Vector3D<T>::getG() const {
                return y;
            }

            template <class T>
            constexpr T Vector3D<T>::getB() const {
                return z;
            }

            template <class T>
            inline long double Vector3D<T>::norm() const {
                return std::sqrt(static_cast <long double> (normSquared()));
            }

            template <class T>
            constexpr T Vector3D<T>::normSquared() const {
                return x * x + y * y + z * z;
            }
    
            template <class T>
            template <class K>
            inline long double Vector3D<T>::distance(Vector3D<K> const& v) const {
                return std::sqrt(static_cast <long double> (distanceSquared(v)));
            }
    
            template <class T>
            template <class K>
            constexpr std::common_type_t<T, K> Vector3D<T>::distanceSquared(Vector3D<K> const& v) const {
                auto w(*this - v);
                return w.normSquared();
            }

            template <class T>
            inline Vector3D<T>& Vector3D<T>::normalize() {
                return *this /= norm();
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
            constexpr const T* Vector3D<T>::value() const {
                return &x;
            }

            template <class T>
            constexpr T& Vector3D<T>::operator [](std::size_t index) {
                return *(&x + index);
            }

            template <class T>
            constexpr T const& Vector3D<T>::operator [](std::size_t index) const {
                return *(&x + index);
            }
    
            template <class T>
            template <class K>
            constexpr Vector3D<T>& Vector3D<T>::operator =(Vector3D<K> const& u) {
                setX(u.getX());
                setY(u.getY());
                setZ(u.getZ());
                return *this;
            }

            template <class T>
            template <class K>
            constexpr Vector3D<T>& Vector3D<T>::operator =(Vector3D<K> && u) {
                setX(u.getX());
                setY(u.getY());
                setZ(u.getZ());
                return *this;
            }
    
            template <class T>
            template <class K>
            constexpr Vector3D<T>& Vector3D<T>::operator +=(Vector3D<K> const& u) {
                setX(static_cast <std::common_type_t<T, K>> (x) + static_cast <std::common_type_t<T, K>> (u.getX()));
                setY(static_cast <std::common_type_t<T, K>> (y) + static_cast <std::common_type_t<T, K>> (u.getY()));
                setZ(static_cast <std::common_type_t<T, K>> (z) + static_cast <std::common_type_t<T, K>> (u.getZ()));
                return *this;
            }
    
            template <class T>
            template <class K>
            constexpr Vector3D<T>& Vector3D<T>::operator -=(Vector3D<K> const& u) {
                setX(static_cast <std::common_type_t<T, K>> (x) - static_cast <std::common_type_t<T, K>> (u.getX()));
                setY(static_cast <std::common_type_t<T, K>> (y) - static_cast <std::common_type_t<T, K>> (u.getY()));
                setZ(static_cast <std::common_type_t<T, K>> (z) - static_cast <std::common_type_t<T, K>> (u.getZ()));
                return *this;
            }
    
            template <class T>
            template <class K>
            constexpr Vector3D<T>& Vector3D<T>::operator *=(Vector3D<K> const& u) {
                setX(static_cast <std::common_type_t<T, K>> (x) * static_cast <std::common_type_t<T, K>> (u.getX()));
                setY(static_cast <std::common_type_t<T, K>> (y) * static_cast <std::common_type_t<T, K>> (u.getY()));
                setZ(static_cast <std::common_type_t<T, K>> (z) * static_cast <std::common_type_t<T, K>> (u.getZ()));
                return *this;
            }
    
            template <class T>
            template <class K>
            constexpr Vector3D<T>& Vector3D<T>::operator /=(Vector3D<K> const& u) {
                setX(static_cast <std::common_type_t<T, K>> (x) / static_cast <std::common_type_t<T, K>> (u.getX()));
                setY(static_cast <std::common_type_t<T, K>> (y) / static_cast <std::common_type_t<T, K>> (u.getY()));
                setZ(static_cast <std::common_type_t<T, K>> (z) / static_cast <std::common_type_t<T, K>> (u.getZ()));
                return *this;
            }
    
            template <class T>
            template <class K>
            constexpr std::common_type_t<T, K> Vector3D<T>::operator |=(Vector3D<K> const& u) const {
                return static_cast <std::common_type_t<T, K>> (x) * static_cast <std::common_type_t<T, K>> (u.getX())
                     + static_cast <std::common_type_t<T, K>> (y) * static_cast <std::common_type_t<T, K>> (u.getY())
                     + static_cast <std::common_type_t<T, K>> (z) * static_cast <std::common_type_t<T, K>> (u.getZ());
            }
    
            template <class T>
            template <class K>
            constexpr Vector3D<T>& Vector3D<T>::operator ^=(Vector3D<K> const& u) {
                setCoord(static_cast <std::common_type_t<T, K>> (y) * static_cast <std::common_type_t<T, K>> (u.getZ()) - static_cast <std::common_type_t<T, K>> (z) * static_cast <std::common_type_t<T, K>> (u.getY()),
                         static_cast <std::common_type_t<T, K>> (z) * static_cast <std::common_type_t<T, K>> (u.getX()) - static_cast <std::common_type_t<T, K>> (x) * static_cast <std::common_type_t<T, K>> (u.getZ()),
                         static_cast <std::common_type_t<T, K>> (x) * static_cast <std::common_type_t<T, K>> (u.getY()) - static_cast <std::common_type_t<T, K>> (y) * static_cast <std::common_type_t<T, K>> (u.getX()));
                return *this;
            }
            
            template <class T>
            template <class K>
            constexpr Vector3D<std::common_type_t<T, K>> Vector3D<T>::operator +(Vector3D<K> const& u) const {
                return Vector3D<std::common_type_t<T, K>>(*this) += u;
            }
    
            template <class T>
            template <class K>
            constexpr Vector3D<std::common_type_t<T, K>> Vector3D<T>::operator -(Vector3D<K> const& u) const {
                return Vector3D<std::common_type_t<T, K>>(*this) -= u;
            }
    
            template <class T>
            constexpr Vector3D<T> Vector3D<T>::operator -() const {
                return Vector3D<T>(-x, -y, -z);
            }
    
            template <class T>
            template <class K>
            constexpr Vector3D<std::common_type_t<T, K>> Vector3D<T>::operator *(Vector3D<K> const& u) const {
                return Vector3D<std::common_type_t<T, K>>(*this) *= u;
            }
    
            template <class T>
            template <class K>
            constexpr Vector3D<std::common_type_t<T, K>> Vector3D<T>::operator /(Vector3D<K> const& u) const {
                return Vector3D<std::common_type_t<T, K>>(*this) /= u;
            }
    
            template <class T>
            template <class K>
            constexpr std::common_type_t<T, K> Vector3D<T>::operator |(Vector3D<K> const& u) const {
                return *this |= u;
            }
    
            template <class T>
            template <class K>
            constexpr Vector3D<std::common_type_t<T, K>> Vector3D<T>::operator ^(Vector3D<K> const& u) const {
                return Vector3D<std::common_type_t<T, K>>(*this) ^= u;
            }
    
            template <class T>
            template <class K>
            constexpr bool Vector3D<T>::operator ==(Vector3D<K> const& u) const {
                return equal(x, u.getX()) && equal(y, u.getY()) && equal(z, u.getZ());
            }
    
            template <class T>
            template <class K>
            constexpr bool Vector3D<T>::operator !=(Vector3D<K> const& u) const {
                return !(*this == u);
            }
    
            template <class T>
            template <class K>
            constexpr bool Vector3D<T>::operator <(Vector3D<K> const& u) const {
                return static_cast <std::common_type_t<T, K>> (normSquared()) < static_cast <std::common_type_t<T, K>> (u.normSquared());
            }
    
            template <class T>
            template <class K>
            constexpr bool Vector3D<T>::operator >(Vector3D<K> const& u) const {
                return static_cast <std::common_type_t<T, K>> (normSquared()) > static_cast <std::common_type_t<T, K>> (u.normSquared());
            }
    
            template <class T>
            template <class K>
            constexpr bool Vector3D<T>::operator <=(Vector3D<K> const& u) const {
                return static_cast <std::common_type_t<T, K>> (normSquared()) <= static_cast <std::common_type_t<T, K>> (u.normSquared());
            }
    
            template <class T>
            template <class K>
            constexpr bool Vector3D<T>::operator >=(Vector3D<K> const& u) const {
                return static_cast <std::common_type_t<T, K>> (normSquared()) >= static_cast <std::common_type_t<T, K>> (u.normSquared());
            }

            template <class T>
            inline Core::String Vector3D<T>::toString() const {
                Core::String res;
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
            inline Vector3D<T> normalize(Vector3D<T> const&u) {
                return Vector3D<T>(u).normalize();
            }
    
            template <class T, class K>
            inline Vector3D<std::common_type_t<T, K>> pow(Vector3D<T> const& u, Vector3D<K> const& p) {
                return Vector3D<std::common_type_t<T, K>>(u).pow(p);
            }

            template <class T, class K>
            constexpr Vector3D<std::common_type_t<T, K>> reflect(Vector3D<T> const& u, Vector3D<K> const& n) {
                return Vector3D<std::common_type_t<T, K>>(u) - static_cast <std::common_type_t<T, K>> (2.0) * (n | u) * n;
            }
        
        }
    }
