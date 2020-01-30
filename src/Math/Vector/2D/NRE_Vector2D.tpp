
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
            inline Vector2D<T>::Vector2D(std::initializer_list<T> list) : Vector2D(*(list.begin()), *(list.begin() + 1)) {
                assert(list.size() == 2);
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
            template <class K>
            inline long double Vector2D<T>::distance(Vector2D<K> const& v) const {
                return std::sqrt(static_cast <long double> (distanceSquared(v)));
            }
    
            template <class T>
            template <class K>
            inline std::common_type_t<T, K> Vector2D<T>::distanceSquared(Vector2D<K> const& v) const {
                auto w(*this - v);
                return w.normSquared();
            }

            template <class T>
            inline Vector2D<T>& Vector2D<T>::normalize() {
                return *this /= norm();
            }
            
            template <class T>
            template <class K>
            inline void Vector2D<T>::limit(K max) {
                auto n = norm();
                if (n > max) {
                    normalize();
                }
            }
    
            template <class T>
            template <class K>
            inline Vector2D<T>& Vector2D<T>::pow(K p) {
                setX(std::pow(static_cast <std::common_type_t<T, K>> (x), static_cast <std::common_type_t<T, K>> (p)));
                setY(std::pow(static_cast <std::common_type_t<T, K>> (y), static_cast <std::common_type_t<T, K>> (p)));
                return *this;
            }
    
            template <class T>
            template <class K>
            inline Vector2D<T>& Vector2D<T>::pow(Vector2D<K> const& p) {
                setX(std::pow(static_cast <std::common_type_t<T, K>> (x), static_cast <std::common_type_t<T, K>> (p.getX())));
                setY(std::pow(static_cast <std::common_type_t<T, K>> (y), static_cast <std::common_type_t<T, K>> (p.getY())));
                return *this;
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
            inline Vector2D<T>& Vector2D<T>::operator +=(K k) {
                setX(static_cast <std::common_type_t<T, K>> (x) + static_cast <std::common_type_t<T, K>> (k));
                setY(static_cast <std::common_type_t<T, K>> (y) + static_cast <std::common_type_t<T, K>> (k));
                return *this;
            }

            template <class T>
            template <class K>
            inline Vector2D<T>& Vector2D<T>::operator +=(Vector2D<K> const& u) {
                setX(static_cast <std::common_type_t<T, K>> (x) + static_cast <std::common_type_t<T, K>> (u.getX()));
                setY(static_cast <std::common_type_t<T, K>> (y) + static_cast <std::common_type_t<T, K>> (u.getY()));
                return *this;
            }
    
            template <class T>
            template <class K>
            inline Vector2D<T>& Vector2D<T>::operator -=(K k) {
                setX(static_cast <std::common_type_t<T, K>> (x) - static_cast <std::common_type_t<T, K>> (k));
                setY(static_cast <std::common_type_t<T, K>> (y) - static_cast <std::common_type_t<T, K>> (k));
                return *this;
            }

            template <class T>
            template <class K>
            inline Vector2D<T>& Vector2D<T>::operator -=(Vector2D<K> const& u) {
                setX(static_cast <std::common_type_t<T, K>> (x) - static_cast <std::common_type_t<T, K>> (u.getX()));
                setY(static_cast <std::common_type_t<T, K>> (y) - static_cast <std::common_type_t<T, K>> (u.getY()));
                return *this;
            }

            template <class T>
            template <class K>
            inline Vector2D<T>& Vector2D<T>::operator *=(K k) {
                setX(static_cast <std::common_type_t<T, K>> (x) * static_cast <std::common_type_t<T, K>> (k));
                setY(static_cast <std::common_type_t<T, K>> (y) * static_cast <std::common_type_t<T, K>> (k));
                return *this;
            }

            template <class T>
            template <class K>
            inline Vector2D<T>& Vector2D<T>::operator *=(Vector2D<K> const& u) {
                setX(static_cast <std::common_type_t<T, K>> (x) * static_cast <std::common_type_t<T, K>> (u.getX()));
                setY(static_cast <std::common_type_t<T, K>> (y) * static_cast <std::common_type_t<T, K>> (u.getY()));
                return *this;
            }

            template <class T>
            template <class K>
            inline Vector2D<T>& Vector2D<T>::operator /=(K k) {
                setX(static_cast <std::common_type_t<T, K>> (x) / static_cast <std::common_type_t<T, K>> (k));
                setY(static_cast <std::common_type_t<T, K>> (y) / static_cast <std::common_type_t<T, K>> (k));
                return *this;
            }

            template <class T>
            template <class K>
            inline Vector2D<T>& Vector2D<T>::operator /=(Vector2D<K> const& u) {
                setX(static_cast <std::common_type_t<T, K>> (x) / static_cast <std::common_type_t<T, K>> (u.getX()));
                setY(static_cast <std::common_type_t<T, K>> (y) / static_cast <std::common_type_t<T, K>> (u.getY()));
                return *this;
            }

            template <class T>
            template <class K>
            inline std::common_type_t<T, K> Vector2D<T>::operator |=(Vector2D<K> const& u) const {
                return static_cast <std::common_type_t<T, K>> (x) * static_cast <std::common_type_t<T, K>> (u.getX())
                     + static_cast <std::common_type_t<T, K>> (y) * static_cast <std::common_type_t<T, K>> (u.getY());
            }
    
            template <class T>
            template <class K>
            inline Vector2D<std::common_type_t<T, K>> Vector2D<T>::operator +(K k) const {
                return Vector2D<std::common_type_t<T, K>>(*this) += k;
            }

            template <class T>
            template <class K>
            inline Vector2D<std::common_type_t<T, K>> Vector2D<T>::operator +(Vector2D<K> const& u) const {
                return Vector2D<std::common_type_t<T, K>>(*this) += u;
            }
    
            template <class T>
            template <class K>
            inline Vector2D<std::common_type_t<T, K>> Vector2D<T>::operator -(K k) const {
                return Vector2D<std::common_type_t<T, K>>(*this) -= k;
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
                res << '(' << x << ", " << y << ')';
                return res;
            }
            
            template <class T, class K>
            Vector2D<std::common_type_t<T, K>> operator *(K k, Vector2D<T> const& u) {
                return u * k;
            }
            
            template <class T>
            Vector2D<T> normalize(Vector2D<T> const&u) {
                return Vector2D<T>(u).normalize();
            }
            
            template <class T, class K>
            Vector2D<std::common_type_t<T, K>> pow(Vector2D<T> const& u, K k) {
                return Vector2D<std::common_type_t<T, K>>(u).pow(k);
            }

            template <class T, class K>
            Vector2D<std::common_type_t<T, K>> pow(Vector2D<T> const& u, Vector2D<K> const& p) {
                return Vector2D<std::common_type_t<T, K>>(u).pow(p);
            }

            template <class T, class K>
            Vector2D<std::common_type_t<T, K>> reflect(Vector2D<T> const& u, Vector2D<K> const& n) {
                return Vector2D<std::common_type_t<T, K>>(u) - static_cast <std::common_type_t<T, K>> (2.0) * (n | u) * n;
            }

        }
    }
