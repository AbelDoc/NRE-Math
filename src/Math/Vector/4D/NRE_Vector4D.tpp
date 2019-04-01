
    /**
     * @file NRE_Vector4D.tpp
     * @brief Implementation of Engine's Math's Object : Vector4D
     * @author Louis ABEL
     * @date 09/09/2018
     * @copyright GNU GPL v3
     */

    namespace NRE {
        namespace Math {

            template <class T>
            inline Vector4D<T>::Vector4D(T nX, T nY, T nZ, T nW) : x(nX), y(nY), z(nZ), w(nW) {
            }

            template <class T>
            inline Vector4D<T>::Vector4D(T value) : x(value), y(value), z(value), w(value) {
            }

            template <class T>
            template <class K>
            inline Vector4D<T>::Vector4D(Vector4D<K> const& u) : x(static_cast <T> (u.getX())), y(static_cast <T> (u.getY())), z(static_cast <T> (u.getZ())), w(static_cast <T> (u.getW())) {
            }

            template <class T>
            inline Vector4D<T>::Vector4D(Vector3D<T> const& u) : x(u.getX()), y(u.getY()), z(u.getZ()), w(0) {
            }

            template <class T>
            inline Vector4D<T>::Vector4D(Vector3D<T> const& u, T nW) : x(u.getX()), y(u.getY()), z(u.getZ()), w(nW) {
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
            inline void Vector4D<T>::setX(T nX) {
                x = nX;
            }

            template <class T>
            inline void Vector4D<T>::setY(T nY) {
                y = nY;
            }

            template <class T>
            inline void Vector4D<T>::setZ(T nZ) {
                z = nZ;
            }

            template <class T>
            inline void Vector4D<T>::setW(T nW) {
                w = nW;
            }

            template <class T>
            inline void Vector4D<T>::setR(T r) {
                x = r;
            }

            template <class T>
            inline void Vector4D<T>::setG(T g) {
                y = g;
            }

            template <class T>
            inline void Vector4D<T>::setB(T b) {
                z = b;
            }

            template <class T>
            inline void Vector4D<T>::setA(T a) {
                w = a;
            }

            template <class T>
            inline void Vector4D<T>::setCoord(T nX, T nY, T nZ, T nW) {
                x = nX;
                y = nY;
                z = nZ;
                w = nW;
            }

            template <class T>
            inline void Vector4D<T>::setCoord(Vector3D<T> const& u, T nW) {
                x = u.x;
                y = u.y;
                z = u.z;
                w = nW;
            }

            template <class T>
            inline void Vector4D<T>::setRGBA(T r, T g, T b, T a) {
                x = r;
                y = g;
                z = b;
                w = a;
            }

            template <class T>
            inline void Vector4D<T>::setRGBA(Vector3D<T> const& u, T a) {
                x = u.x;
                y = u.y;
                z = u.z;
                w = a;
            }

            template <class T>
            inline double Vector4D<T>::norm() const {
                return std::sqrt(normSquared());
            }

            template <class T>
            inline double Vector4D<T>::normSquared() const {
                return static_cast <double> (x * x + y * y + z * z + w * w);
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
            inline Vector4D<T>& Vector4D<T>::operator +=(Vector4D const& u) {
                x += u.x;
                y += u.y;
                z += u.z;
                w += u.w;
                return *this;
            }

            template <class T>
            inline Vector4D<T>& Vector4D<T>::operator -=(Vector4D const& u) {
                x -= u.x;
                y -= u.y;
                z -= u.z;
                w -= u.w;
                return *this;
            }

            template <class T>
            inline Vector4D<T>& Vector4D<T>::operator *=(T k) {
                x *= k;
                y *= k;
                z *= k;
                w *= k;
                return *this;
            }

            template <class T>
            inline Vector4D<T>& Vector4D<T>::operator *=(Vector4D const& u) {
                x *= u.x;
                y *= u.y;
                z *= u.z;
                w *= u.w;
                return *this;
            }

            template <class T>
            inline Vector4D<T>& Vector4D<T>::operator /=(T k) {
                x /= k;
                y /= k;
                z /= k;
                w /= k;
                return *this;
            }

            template <class T>
            inline Vector4D<T>& Vector4D<T>::operator /=(Vector4D const& u) {
                x /= u.x;
                y /= u.y;
                z /= u.z;
                w /= u.w;
                return *this;
            }

            template <class T>
            inline double Vector4D<T>::operator |=(Vector4D const& u) const {
                return x * u.x + y * u.y + z * u.z + w * u.w;
            }

            template <class T>
            inline Vector4D<T> Vector4D<T>::operator +(Vector4D const& u) const {
                return Vector4D<T>(*this) += u;
            }

            template <class T>
            inline Vector4D<T> Vector4D<T>::operator -(Vector4D const& u) const {
                return Vector4D<T>(*this) -= u;
            }

            template <class T>
            inline Vector4D<T> Vector4D<T>::operator -() const {
                return Vector4D<T>(-x, -y, -z, -w);
            }

            template <class T>
            inline Vector4D<T> Vector4D<T>::operator *(T k) const {
                return Vector4D<T>(*this) *= k;
            }

            template <class T>
            inline Vector4D<T> Vector4D<T>::operator *(Vector4D const& u) const {
                return Vector4D<T>(*this) *= u;
            }

            template <class T>
            inline Vector4D<T> Vector4D<T>::operator /(T k) const {
                return Vector4D<T>(*this) /= k;
            }

            template <class T>
            inline Vector4D<T> Vector4D<T>::operator /(Vector4D const& u) const {
                return Vector4D<T>(*this) /= u;
            }

            template <class T>
            inline double Vector4D<T>::operator |(Vector4D const& u) const {
                return *this |= u;
            }

            template <class T>
            template <class K>
            inline bool Vector4D<T>::operator ==(Vector4D<K> const& u) const {
                return x == u.x && y == u.y && z == u.z && w == u.w;
            }

            template <>
            template <class K>
            inline bool Vector4D<double>::operator ==(Vector4D<K> const& u) const {
                return almostEqual(x, u.x) && almostEqual(y, u.y) && almostEqual(z, u.z) && almostEqual(w, u.w);
            }

            template <>
            template <class K>
            inline bool Vector4D<double>::operator ==(Vector4D<K> const& u) const {
                return almostEqual(x, u.x) && almostEqual(y, u.y) && almostEqual(z, u.z) && almostEqual(w, u.w);
            }

            template <class T>
            template <class K>
            inline bool Vector4D<T>::operator !=(Vector4D<K> const& u) const {
                return !(*this == u);
            }

            template <class T>
            template <class K>
            inline bool Vector4D<T>::operator <(Vector4D<K> const& u) const {
                return normSquared() < u.normSquared();
            }

            template <class T>
            template <class K>
            inline bool Vector4D<T>::operator >(Vector4D<K> const& u) const {
                return normSquared() > u.normSquared();
            }

            template <class T>
            template <class K>
            inline bool Vector4D<T>::operator <=(Vector4D<K> const& u) const {
                return normSquared() <= u.normSquared();
            }

            template <class T>
            template <class K>
            inline bool Vector4D<T>::operator >=(Vector4D<K> const& u) const {
                return normSquared() >= u.normSquared();
            }

            template <class T>
            inline std::string Vector4D<T>::toString() const {
                std::string res("(");
                res += std::to_string(x);
                res += ", ";
                res += std::to_string(y);
                res += ", ";
                res += std::to_string(z);
                res += ", ";
                res += std::to_string(w);
                res += ")";
                return res;
            }

            template <class T>
            std::ostream& operator <<(std::ostream& stream, Vector4D<T> const& o) {
                return stream << o.toString();
            }
        }
    }
