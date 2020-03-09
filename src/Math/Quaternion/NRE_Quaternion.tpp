
    /**
     * @file NRE_Quaternion.hpp
     * @brief Implementation of Math's API's Object : Quaternion
     * @author Louis ABEL
     * @date 31/03/2019
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace Math {

            template <class T>
            template <class K, class L, class N, class M>
            constexpr Quaternion<T>::Quaternion(K x, L y, N z, M w) : quat(x, y, z, w) {
            }

            template <class T>
            template <class K, class L, class N>
            inline Quaternion<T>::Quaternion(K x, L y, N z, Angle w) : Quaternion(Vector3D<std::common_type_t<K, L, N>>(x, y, z), w) {
            }

            template <class T>
            template <class K, class L>
            constexpr Quaternion<T>::Quaternion(Vector3D<K> const& ax, L an) : quat(ax, an) {
            }

            template <class T>
            template <class K>
            constexpr Quaternion<T>::Quaternion(Quaternion<K> const& q) : quat(q.getQuaternion()) {
            }

            template <class T>
            template <class K>
            inline Quaternion<T>::Quaternion(Vector3D<K> const& ax, Angle an) {
                setAngleAxis(ax, an);
            }

            template <class T>
            constexpr T Quaternion<T>::getX() const {
                return quat.getX();
            }

            template <class T>
            constexpr T Quaternion<T>::getY() const {
                return quat.getY();
            }

            template <class T>
            constexpr T Quaternion<T>::getZ() const {
                return quat.getZ();
            }

            template <class T>
            constexpr T Quaternion<T>::getW() const {
                return quat.getW();
            }

            template <class T>
            constexpr Vector3D<T> Quaternion<T>::getAxis() const {
                return Vector3D<T>(getX(), getY(), getZ());
            }

            template <class T>
            constexpr Vector4D<T> const& Quaternion<T>::getQuaternion() const {
                return quat;
            }

            template <class T>
            template <class K>
            constexpr void Quaternion<T>::setX(K x) {
                quat.setX(x);
            }

            template <class T>
            template <class K>
            constexpr void Quaternion<T>::setY(K y) {
                quat.setY(y);
            }

            template <class T>
            template <class K>
            constexpr void Quaternion<T>::setZ(K z) {
                quat.setZ(z);
            }

            template <class T>
            template <class K>
            constexpr void Quaternion<T>::setW(K w) {
                quat.setW(w);
            }

            template <class T>
            template <class K>
            inline void Quaternion<T>::setAngleAxis(Vector3D<K> const& axis, Angle w) {
                std::common_type_t<T, K> s = static_cast <std::common_type_t<T, K>> (sin(w / 2.0));
                setX(s * static_cast <std::common_type_t<T, K>> (axis.getX()));
                setY(s * static_cast <std::common_type_t<T, K>> (axis.getY()));
                setZ(s * static_cast <std::common_type_t<T, K>> (axis.getZ()));
                setW(cos(w / 2.0));
            }

            template <class T>
            constexpr void Quaternion<T>::setIdentity() {
                quat.setCoord(0, 0, 0, 1);
            }

            template <class T>
            inline long double Quaternion<T>::norm() const {
                return quat.norm();
            }

            template <class T>
            constexpr T Quaternion<T>::normSquared() const {
                return quat.normSquared();
            }

            template <class T>
            inline Quaternion<T> Quaternion<T>::normalize() {
                quat.normalize();
                return *this;
            }

            template <class T>
            constexpr const T* Quaternion<T>::value() const {
                return quat.value();
            }

            template <class T>
            template <class K>
            constexpr Quaternion<T>& Quaternion<T>::operator=(Quaternion<K> const& q) {
                quat = q.getQuaternion();
                return *this;
            }

            template <class T>
            template <class K>
            constexpr Quaternion<T>& Quaternion<T>::operator=(Quaternion<K> && q) {
                quat = q.getQuaternion();
                return *this;
            }

            template <class T>
            template <class K>
            constexpr Quaternion<T>& Quaternion<T>::operator*=(Quaternion<K> const& q) {
                quat.setCoord(static_cast <std::common_type_t<T, K>> (getW()) * static_cast <std::common_type_t<T, K>> (q.getX()) + static_cast <std::common_type_t<T, K>> (getX()) * static_cast <std::common_type_t<T, K>> (q.getW())
                            - static_cast <std::common_type_t<T, K>> (getY()) * static_cast <std::common_type_t<T, K>> (q.getZ()) + static_cast <std::common_type_t<T, K>> (getZ()) * static_cast <std::common_type_t<T, K>> (q.getY()),
                              static_cast <std::common_type_t<T, K>> (getW()) * static_cast <std::common_type_t<T, K>> (q.getY()) + static_cast <std::common_type_t<T, K>> (getX()) * static_cast <std::common_type_t<T, K>> (q.getZ())
                            + static_cast <std::common_type_t<T, K>> (getY()) * static_cast <std::common_type_t<T, K>> (q.getW()) - static_cast <std::common_type_t<T, K>> (getZ()) * static_cast <std::common_type_t<T, K>> (q.getX()),
                              static_cast <std::common_type_t<T, K>> (getW()) * static_cast <std::common_type_t<T, K>> (q.getZ()) - static_cast <std::common_type_t<T, K>> (getX()) * static_cast <std::common_type_t<T, K>> (q.getY())
                            + static_cast <std::common_type_t<T, K>> (getY()) * static_cast <std::common_type_t<T, K>> (q.getX()) + static_cast <std::common_type_t<T, K>> (getZ()) * static_cast <std::common_type_t<T, K>> (q.getW()),
                              static_cast <std::common_type_t<T, K>> (getW()) * static_cast <std::common_type_t<T, K>> (q.getW()) - static_cast <std::common_type_t<T, K>> (getX()) * static_cast <std::common_type_t<T, K>> (q.getX())
                            - static_cast <std::common_type_t<T, K>> (getY()) * static_cast <std::common_type_t<T, K>> (q.getY()) - static_cast <std::common_type_t<T, K>> (getZ()) * static_cast <std::common_type_t<T, K>> (q.getZ()));
                return *this;
            }

            template <class T>
            template <class K>
            constexpr Quaternion<std::common_type_t<T, K>> Quaternion<T>::operator*(Quaternion<K> const& q) const {
                return Quaternion<std::common_type_t<T, K>>(*this) *= q;
            }

            template <class T>
            inline Utility::String Quaternion<T>::toString() const {
                return quat.toString();
            }

        }
    }
