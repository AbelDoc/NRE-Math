
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
            inline Quaternion<T>::Quaternion() {
                setIdentity();
            }

            template <class T>
            template <class K, class L, class N, class M>
            inline Quaternion<T>::Quaternion(K x, L y, N z, M w) : quat(x, y, z, w) {
            }

            template <class T>
            template <class K, class L, class N>
            inline Quaternion<T>::Quaternion(K x, L y, N z, Angle w) : Quaternion({x, y, z}, w) {
            }

            template <class T>
            template <class K, class L>
            inline Quaternion<T>::Quaternion(Vector3D<K> const& ax, L an) : quat(ax, an) {
            }

            template <class T>
            template <class K>
            inline Quaternion<T>::Quaternion(Quaternion<K> const& q) : quat(q.quat) {
            }

            template <class T>
            template <class K>
            inline Quaternion<T>::Quaternion(Vector3D<K> const& ax, Angle an) {
                setAngleAxis(ax, an);
            }

            template <class T>
            inline T Quaternion<T>::getX() const {
                return quat.getX();
            }

            template <class T>
            inline T Quaternion<T>::getY() const {
                return quat.getY();
            }

            template <class T>
            inline T Quaternion<T>::getZ() const {
                return quat.getZ();
            }

            template <class T>
            inline T Quaternion<T>::getW() const {
                return quat.getW();
            }

            template <class T>
            inline Vector3D<T> Quaternion<T>::getAxis() const {
                return Vector3D<T>(getX(), getY(), getZ());
            }

            template <class T>
            inline Vector4D<T> const& Quaternion<T>::getQuaternion() const {
                return quat;
            }

            template <class T>
            template <class K>
            inline void Quaternion<T>::setX(K x) {
                quat.setX(x);
            }

            template <class T>
            template <class K>
            inline void Quaternion<T>::setY(K y) {
                quat.setY(y);
            }

            template <class T>
            template <class K>
            inline void Quaternion<T>::setZ(K z) {
                quat.setZ(z);
            }

            template <class T>
            template <class K>
            inline void Quaternion<T>::setW(K w) {
                quat.setW(w);
            }

            template <class T>
            template <class K>
            inline void Quaternion<T>::setAngleAxis(Vector3D<K> const& axis, Angle w) {
                T s = static_cast <T> (sin(w / 2.0));
                setX(s * axis.getX());
                setY(s * axis.getY());
                setZ(s * axis.getZ());
                setW(static_cast <T> (cos(w / 2.0)));
            }

            template <class T>
            inline void Quaternion<T>::setIdentity() {
                quat.setCoord(0, 0, 0, 1);
            }

            template <class T>
            inline long double Quaternion<T>::norm() const {
                return quat.norm();
            }

            template <class T>
            inline long double Quaternion<T>::normSquared() const {
                return quat.normSquared();
            }

            template <class T>
            inline void Quaternion<T>::normalize() {
                quat.normalize();
            }

            template <class T>
            inline const T* Quaternion<T>::value() const {
                return quat.value();
            }

            template <class T>
            template <class K>
            inline Quaternion<T>& Quaternion<T>::operator=(Quaternion<K> const& q) {
                quat = q.quat;
                return *this;
            }

            template <class T>
            template <class K>
            inline Quaternion<T>& Quaternion<T>::operator=(Quaternion<K> && q) {
                quat = q.quat;
                return *this;
            }

            template <class T>
            template <class K>
            inline Quaternion<T>& Quaternion<T>::operator*=(Quaternion<K> const& q) {
                Quaternion<T> tmp(getW() * static_cast <T> (q.getX()) + getX() * static_cast <T> (q.getW()) - getY() * static_cast <T> (q.getZ()) + getZ() * static_cast <T> (q.getY()),
                                  getW() * static_cast <T> (q.getY()) + getX() * static_cast <T> (q.getZ()) + getY() * static_cast <T> (q.getW()) - getZ() * static_cast <T> (q.getX()),
                                  getW() * static_cast <T> (q.getZ()) - getX() * static_cast <T> (q.getY()) + getY() * static_cast <T> (q.getX()) + getZ() * static_cast <T> (q.getW()),
                                  getW() * static_cast <T> (q.getW()) - getX() * static_cast <T> (q.getX()) - getY() * static_cast <T> (q.getY()) - getZ() * static_cast <T> (q.getZ()));
                *this = std::move(tmp);
                return *this;
            }

            template <class T>
            template <class K>
            inline Quaternion<std::common_type_t<T, K>> Quaternion<T>::operator*(Quaternion<K> const& q) const {
                return Quaternion<std::common_type_t<T, K>>(*this) *= q;
            }

            template <class T>
            inline Utility::String Quaternion<T>::toString() const {
                return quat.toString();
            }

            template <class T>
            std::ostream& operator <<(std::ostream& stream, Quaternion<T> const& o) {
                return stream << o.toString();
            }

        }
    }
