
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
            constexpr Vector4D<T>::Vector4D(std::initializer_list<T> list) : Vector4D(*(list.begin()), *(list.begin() + 1), *(list.begin() + 2), *(list.begin() + 3)) {
                assert(list.size() == 4);
            }
    
            template <class T>
            template <class K>
            constexpr Vector4D<T>::Vector4D(Vector4D<K> const& u) : Vector4D(u.getX(), u.getY(), u.getZ(), u.getW()) {
            }
    
            template <class T>
            template <class K>
            constexpr Vector4D<T>::Vector4D(Vector2D<K> const& u) : Vector4D(u.getX(), u.getY(), 0, 0) {
            }
    
            template <class T>
            template <class K>
            constexpr Vector4D<T>::Vector4D(Vector3D<K> const& u) : Vector4D(u.getX(), u.getY(), u.getZ(), 0) {
            }

            template <class T>
            constexpr T Vector4D<T>::getX() const {
                return x;
            }

            template <class T>
            constexpr T Vector4D<T>::getY() const {
                return y;
            }

            template <class T>
            constexpr T Vector4D<T>::getZ() const {
                return z;
            }

            template <class T>
            constexpr T Vector4D<T>::getW() const {
                return w;
            }

            template <class T>
            constexpr T Vector4D<T>::getR() const {
                return x;
            }

            template <class T>
            constexpr T Vector4D<T>::getG() const {
                return y;
            }

            template <class T>
            constexpr T Vector4D<T>::getB() const {
                return z;
            }

            template <class T>
            constexpr T Vector4D<T>::getA() const {
                return w;
            }

            template <class T>
            inline long double Vector4D<T>::norm() const {
                return std::sqrt(static_cast <long double> (normSquared()));
            }

            template <class T>
            constexpr T Vector4D<T>::normSquared() const {
                return x * x + y * y + z * z + w * w;
            }
            
            template <class T>
            template <class K>
            inline long double Vector4D<T>::distance(Vector4D<K> const& v) const {
                return std::sqrt(static_cast <long double> (distanceSquared(v)));
            }
            
            template <class T>
            template <class K>
            constexpr std::common_type_t<T, K> Vector4D<T>::distanceSquared(Vector4D<K> const& v) const {
                auto u(*this - v);
                return u.normSquared();
            }
            
            template <class T>
            inline Vector4D<T>& Vector4D<T>::normalize() {
                return *this /= norm();
            }
    
            template <class T>
            template <class K>
            inline Vector4D<T>& Vector4D<T>::pow(Vector4D<K> const& p) {
                setX(std::pow(static_cast <std::common_type_t<T, K>> (x), static_cast <std::common_type_t<T, K>> (p.getX())));
                setY(std::pow(static_cast <std::common_type_t<T, K>> (y), static_cast <std::common_type_t<T, K>> (p.getY())));
                setZ(std::pow(static_cast <std::common_type_t<T, K>> (z), static_cast <std::common_type_t<T, K>> (p.getZ())));
                setW(std::pow(static_cast <std::common_type_t<T, K>> (w), static_cast <std::common_type_t<T, K>> (p.getW())));
                return *this;
            }

            template <class T>
            constexpr const T* Vector4D<T>::value() const {
                return &x;
            }

            template <class T>
            constexpr T& Vector4D<T>::operator [](std::size_t index) {
                return *(&x + index);
            }

            template <class T>
            constexpr T const& Vector4D<T>::operator [](std::size_t index) const {
                return *(&x + index);
            }
    
            template <class T>
            template <class K>
            constexpr Vector4D<T>& Vector4D<T>::operator =(Vector4D<K> const& u) {
                setX(u.getX());
                setY(u.getY());
                setZ(u.getZ());
                setW(u.getW());
                return *this;
            }
    
            template <class T>
            template <class K>
            constexpr Vector4D<T>& Vector4D<T>::operator =(Vector4D<K> && u) {
                setX(u.getX());
                setY(u.getY());
                setZ(u.getZ());
                setW(u.getW());
                return *this;
            }
    
            template <class T>
            template <class K>
            constexpr Vector4D<T>& Vector4D<T>::operator +=(Vector4D<K> const& u) {
                setX(static_cast <std::common_type_t<T, K>> (x) + static_cast <std::common_type_t<T, K>> (u.getX()));
                setY(static_cast <std::common_type_t<T, K>> (y) + static_cast <std::common_type_t<T, K>> (u.getY()));
                setZ(static_cast <std::common_type_t<T, K>> (z) + static_cast <std::common_type_t<T, K>> (u.getZ()));
                setW(static_cast <std::common_type_t<T, K>> (w) + static_cast <std::common_type_t<T, K>> (u.getW()));
                return *this;
            }
    
            template <class T>
            template <class K>
            constexpr Vector4D<T>& Vector4D<T>::operator -=(Vector4D<K> const& u) {
                setX(static_cast <std::common_type_t<T, K>> (x) - static_cast <std::common_type_t<T, K>> (u.getX()));
                setY(static_cast <std::common_type_t<T, K>> (y) - static_cast <std::common_type_t<T, K>> (u.getY()));
                setZ(static_cast <std::common_type_t<T, K>> (z) - static_cast <std::common_type_t<T, K>> (u.getZ()));
                setW(static_cast <std::common_type_t<T, K>> (w) - static_cast <std::common_type_t<T, K>> (u.getW()));
                return *this;
            }
    
            template <class T>
            template <class K>
            constexpr Vector4D<T>& Vector4D<T>::operator *=(Vector4D<K> const& u) {
                setX(static_cast <std::common_type_t<T, K>> (x) * static_cast <std::common_type_t<T, K>> (u.getX()));
                setY(static_cast <std::common_type_t<T, K>> (y) * static_cast <std::common_type_t<T, K>> (u.getY()));
                setZ(static_cast <std::common_type_t<T, K>> (z) * static_cast <std::common_type_t<T, K>> (u.getZ()));
                setW(static_cast <std::common_type_t<T, K>> (w) * static_cast <std::common_type_t<T, K>> (u.getW()));
                return *this;
            }
    
            template <class T>
            template <class K>
            constexpr Vector4D<T>& Vector4D<T>::operator /=(Vector4D<K> const& u) {
                setX(static_cast <std::common_type_t<T, K>> (x) / static_cast <std::common_type_t<T, K>> (u.getX()));
                setY(static_cast <std::common_type_t<T, K>> (y) / static_cast <std::common_type_t<T, K>> (u.getY()));
                setZ(static_cast <std::common_type_t<T, K>> (z) / static_cast <std::common_type_t<T, K>> (u.getZ()));
                setW(static_cast <std::common_type_t<T, K>> (w) / static_cast <std::common_type_t<T, K>> (u.getW()));
                return *this;
            }
    
            template <class T>
            template <class K>
            constexpr std::common_type_t<T, K> Vector4D<T>::operator |=(Vector4D<K> const& u) const {
                return static_cast <std::common_type_t<T, K>> (x) * static_cast <std::common_type_t<T, K>> (u.getX())
                     + static_cast <std::common_type_t<T, K>> (y) * static_cast <std::common_type_t<T, K>> (u.getY())
                     + static_cast <std::common_type_t<T, K>> (z) * static_cast <std::common_type_t<T, K>> (u.getZ())
                     + static_cast <std::common_type_t<T, K>> (w) * static_cast <std::common_type_t<T, K>> (u.getW());
            }
    
            template <class T>
            template <class K>
            constexpr Vector4D<T>& Vector4D<T>::operator ^=(Vector4D<K> const& u) {
                setCoord(y * static_cast <T> (u.getZ()) - z * static_cast <T> (u.getY()),
                         z * static_cast <T> (u.getX()) - x * static_cast <T> (u.getZ()),
                         x * static_cast <T> (u.getY()) - y * static_cast <T> (u.getX()),
                         0);
                return *this;
            }
    
            template <class T>
            template <class K>
            constexpr Vector4D<std::common_type_t<T, K>> Vector4D<T>::operator +(Vector4D<K> const& u) const {
                return Vector4D<std::common_type_t<T, K>>(*this) += u;
            }
    
            template <class T>
            template <class K>
            constexpr Vector4D<std::common_type_t<T, K>> Vector4D<T>::operator -(Vector4D<K> const& u) const {
                return Vector4D<std::common_type_t<T, K>>(*this) -= u;
            }
    
            template <class T>
            constexpr Vector4D<T> Vector4D<T>::operator -() const {
                return Vector4D<T>(-x, -y, -z, -w);
            }
    
            template <class T>
            template <class K>
            constexpr Vector4D<std::common_type_t<T, K>> Vector4D<T>::operator *(Vector4D<K> const& u) const {
                return Vector4D<std::common_type_t<T, K>>(*this) *= u;
            }
    
            template <class T>
            template <class K>
            constexpr Vector4D<std::common_type_t<T, K>> Vector4D<T>::operator /(Vector4D<K> const& u) const {
                return Vector4D<std::common_type_t<T, K>>(*this) /= u;
            }
    
            template <class T>
            template <class K>
            constexpr std::common_type_t<T, K> Vector4D<T>::operator |(Vector4D<K> const& u) const {
                return *this |= u;
            }
    
            template <class T>
            template <class K>
            constexpr Vector4D<std::common_type_t<T, K>> Vector4D<T>::operator ^(Vector4D<K> const& u) const {
                return Vector4D<std::common_type_t<T, K>>(*this) ^= u;
            }
    
            template <class T>
            template <class K>
            constexpr bool Vector4D<T>::operator ==(Vector4D<K> const& u) const {
                return equal(x, u.getX()) && equal(y, u.getY()) && equal(z, u.getZ()) && equal(w, u.getW());
            }
    
            template <class T>
            template <class K>
            constexpr bool Vector4D<T>::operator !=(Vector4D<K> const& u) const {
                return !(*this == u);
            }
    
            template <class T>
            template <class K>
            constexpr bool Vector4D<T>::operator <(Vector4D<K> const& u) const {
                return static_cast <std::common_type_t<T, K>> (normSquared()) < static_cast <std::common_type_t<T, K>> (u.normSquared());
            }
    
            template <class T>
            template <class K>
            constexpr bool Vector4D<T>::operator >(Vector4D<K> const& u) const {
                return static_cast <std::common_type_t<T, K>> (normSquared()) > static_cast <std::common_type_t<T, K>> (u.normSquared());
            }
    
            template <class T>
            template <class K>
            constexpr bool Vector4D<T>::operator <=(Vector4D<K> const& u) const {
                return static_cast <std::common_type_t<T, K>> (normSquared()) <= static_cast <std::common_type_t<T, K>> (u.normSquared());
            }
    
            template <class T>
            template <class K>
            constexpr bool Vector4D<T>::operator >=(Vector4D<K> const& u) const {
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
    
            template <class T>
            inline Vector4D<T> normalize(Vector4D<T> const&u) {
                return Vector4D<T>(u).normalize();
            }
    
            template <class T, class K>
            inline Vector4D<std::common_type_t<T, K>> pow(Vector4D<T> const& u, Vector4D<K> const& p) {
                return Vector4D<std::common_type_t<T, K>>(u).pow(p);
            }
            
            template <class T, class K>
            constexpr Vector4D<std::common_type_t<T, K>> reflect(Vector4D<T> const& u, Vector4D<K> const& n) {
                return Vector4D<std::common_type_t<T, K>>(u) - static_cast <std::common_type_t<T, K>> (2.0) * (n | u) * n;
            }
        }
    }
