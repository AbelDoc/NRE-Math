
    /**
     * @file NRE_Quaternion.hpp
     * @brief Implementation of Math's API's Object : Quaternion
     * @author Louis ABEL
     * @date 31/03/2019
     * @copyright GNU GPL v3
     */

    namespace NRE {
        namespace Math {

            template <class T>
            inline Quaternion<T>::Quaternion() {
                setIdentity();
            }

            template <class T>
            inline Quaternion<T>::Quaternion(T x, T y, T z, T w) : quat(x, y, z, w) {
            }

            template <class T>
            inline Quaternion<T>::Quaternion(T x, T y, T z, Angle w) : Quaternion({x, y, z}, w) {
            }

            template <class T>
            inline Quaternion<T>::Quaternion(Vector3D<T> const& ax, T an) : quat(ax, an) {
            }

            template <class T>
            inline Quaternion<T>::Quaternion(Vector3D<T> const& ax, Angle an) {
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
            inline void Quaternion<T>::setX(T x) {
                quat.setX(x);
            }

            template <class T>
            inline void Quaternion<T>::setY(T y) {
                quat.setY(y);
            }

            template <class T>
            inline void Quaternion<T>::setZ(T z) {
                quat.setZ(z);
            }

            template <class T>
            inline void Quaternion<T>::setW(T w) {
                quat.setW(w);
            }

            template <class T>
            inline void Quaternion<T>::setAngleAxis(Vector3D<T> const& axis, Angle w) {
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
            inline float Quaternion<T>::norm() const {
                return quat.norm();
            }

            template <class T>
            inline float Quaternion<T>::normSquared() const {
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
            inline Quaternion<T>& Quaternion<T>::operator*=(Quaternion const& q) {
                Quaternion<T> tmp(getW() * q.getX() + getX() * q.getW() - getY() * q.getZ() + getZ() * q.getY(),
                                  getW() * q.getY() + getX() * q.getZ() + getY() * q.getW() - getZ() * q.getX(),
                                  getW() * q.getZ() - getX() * q.getY() + getY() * q.getX() + getZ() * q.getW(),
                                  getW() * q.getW() - getX() * q.getX() - getY() * q.getY() - getZ() * q.getZ());
                *this = std::move(tmp);
                return *this;
            }

            template <class T>
            inline Quaternion<T> Quaternion<T>::operator*(Quaternion const& q) const {
                return Quaternion<T>(*this) *= q;
            }

            template <class T>
            inline std::string Quaternion<T>::toString() const {
                return quat.toString();
            }

            template <class T>
            std::ostream& operator <<(std::ostream& stream, Quaternion<T> const& o) {
                return stream << o.toString();
            }

        }
    }
