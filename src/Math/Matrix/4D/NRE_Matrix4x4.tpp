
    /**
     * @file NRE_Matrix4x4.hpp
     * @brief Implementation of Engine's Math's Object : Matrix4x4
     * @author Louis ABEL
     * @date 17/09/2018
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace Math {

            template <class T>
            inline Matrix4x4<T>::Matrix4x4() {
                setIdentity();
            }

            template <class T>
            inline Matrix4x4<T>::Matrix4x4(T a, T b, T c, T d,
                                           T e, T f, T g, T h,
                                           T i, T j, T k, T l,
                                           T m, T n, T o, T p)
                                           : data{{a, b, c, d}, {e, f, g, h}, {i, j, k, l}, {m, n, o, p}} {
            }

            template <class T>
            inline Matrix4x4<T>::Matrix4x4(T value) : Matrix4x4(value, value, value, value,
                                                                value, value, value, value,
                                                                value, value, value, value,
                                                                value, value, value, value) {
            }

            template <class T>
            inline Matrix4x4<T>::Matrix4x4(Vector4D<T> const& l1, Vector4D<T> const& l2, Vector4D<T> const& l3, Vector4D<T> const& l4)
                                          : data{l1, l2, l3, l4} {
            }

            template <class T>
            template <class K>
            inline Matrix4x4<T>::Matrix4x4(Matrix4x4<K> const& m) : data{static_cast <Vector4D<T>> (m.getL1()), static_cast <Vector4D<T>> (m.getL2()), static_cast <Vector4D<T>> (m.getL3()), static_cast <Vector4D<T>> (m.getL4())} {
            }

            template <class T>
            template <class K>
            inline Matrix4x4<T>::Matrix4x4(Matrix3x3<K> const& m) : data{Vector4D<T>(m.getL1(), 0.0f), Vector4D<T>(m.getL2(), 0.0f), Vector4D<T>(m.getL3(), 0.0f), Vector4D<T>(0.0f, 0.0f, 0.0f, 1.0f)} {
            }

            template <class T>
            template <class K>
            inline Matrix4x4<T>::Matrix4x4(Quaternion<K> const& q) {
                T xx = static_cast <T> (q.getX() * q.getX());
                T yy = static_cast <T> (q.getY() * q.getY());
                T zz = static_cast <T> (q.getZ() * q.getZ());
                T xz = static_cast <T> (q.getX() * q.getZ());
                T xy = static_cast <T> (q.getX() * q.getY());
                T yz = static_cast <T> (q.getY() * q.getZ());
                T wx = static_cast <T> (q.getW() * q.getX());
                T wy = static_cast <T> (q.getW() * q.getY());
                T wz = static_cast <T> (q.getW() * q.getZ());

                data[0][0] = 1 - 2 * (yy + zz);
                data[0][1] = 2 * (xy - wz);
                data[0][2] = 2 * (xz + wy);
                data[0][3] = 0;
                data[1][0] = 2 * (xy + wz);
                data[1][1] = 1 - 2 * (xx + zz);
                data[1][2] = 2 * (yz - wx);
                data[1][3] = 0;
                data[2][0] = 2 * (xz - wy);
                data[2][1] = 2 * (yz + wx);
                data[2][2] = 1 - 2 * (xx + yy);
                data[2][3] = 0;
                data[3][0] = 0;
                data[3][1] = 0;
                data[3][2] = 0;
                data[3][3] = 1;
            }

            template <class T>
            inline Vector4D<T> const& Matrix4x4<T>::getL1() const {
                return data[0];
            }

            template <class T>
            inline Vector4D<T> const& Matrix4x4<T>::getL2() const {
                return data[1];
            }

            template <class T>
            inline Vector4D<T> const& Matrix4x4<T>::getL3() const {
                return data[2];
            }

            template <class T>
            inline Vector4D<T> const& Matrix4x4<T>::getL4() const {
                return data[3];
            }

            template <class T>
            inline Vector4D<T> Matrix4x4<T>::getC1() const {
                return Vector4D<T>(data[0][0], data[1][0], data[2][0], data[3][0]);
            }

            template <class T>
            inline Vector4D<T> Matrix4x4<T>::getC2() const {
                return Vector4D<T>(data[0][1], data[1][1], data[2][1], data[3][1]);
            }

            template <class T>
            inline Vector4D<T> Matrix4x4<T>::getC3() const {
                return Vector4D<T>(data[0][2], data[1][2], data[2][2], data[3][2]);
            }

            template <class T>
            inline Vector4D<T> Matrix4x4<T>::getC4() const {
                return Vector4D<T>(data[0][3], data[1][3], data[2][3], data[3][3]);
            }

            template <class T>
            inline float Matrix4x4<T>::getDeterminant() const {
                return (data[0][0] * data[1][1] * data[2][2] * data[3][3]) + (data[0][0] * data[1][2] * data[2][3] * data[3][1]) + (data[0][0] * data[1][3] * data[2][1] * data[3][2])
                     + (data[0][1] * data[1][0] * data[2][3] * data[3][2]) + (data[0][1] * data[1][2] * data[2][0] * data[3][3]) + (data[0][1] * data[1][3] * data[2][2] * data[3][0])
                     + (data[0][2] * data[1][0] * data[2][1] * data[3][3]) + (data[0][2] * data[1][1] * data[2][3] * data[3][0]) + (data[0][2] * data[1][3] * data[2][0] * data[3][1])
                     + (data[0][3] * data[1][0] * data[2][2] * data[3][1]) + (data[0][3] * data[1][1] * data[2][0] * data[3][2]) + (data[0][3] * data[1][2] * data[2][1] * data[3][0])
                     - (data[0][0] * data[1][1] * data[2][3] * data[3][2]) - (data[0][0] * data[1][2] * data[2][1] * data[3][3]) - (data[0][0] * data[1][3] * data[2][2] * data[3][1])
                     - (data[0][1] * data[1][0] * data[2][2] * data[3][3]) - (data[0][1] * data[1][2] * data[2][3] * data[3][0]) - (data[0][1] * data[1][3] * data[2][0] * data[3][2])
                     - (data[0][2] * data[1][0] * data[2][3] * data[3][1]) - (data[0][2] * data[1][1] * data[2][0] * data[3][3]) - (data[0][2] * data[1][3] * data[2][1] * data[3][0])
                     - (data[0][3] * data[1][0] * data[2][1] * data[3][2]) - (data[0][3] * data[1][1] * data[2][2] * data[3][0]) - (data[0][3] * data[1][2] * data[2][0] * data[3][1]);
            }

            template <class T>
            inline void Matrix4x4<T>::setL1(Vector4D<T> const& l1) {
                data[0] = l1;
            }

            template <class T>
            inline void Matrix4x4<T>::setL2(Vector4D<T> const& l2) {
                data[1] = l2;
            }

            template <class T>
            inline void Matrix4x4<T>::setL3(Vector4D<T> const& l3) {
                data[2] = l3;
            }

            template <class T>
            inline void Matrix4x4<T>::setL4(Vector4D<T> const& l4) {
                data[3] = l4;
            }

            template <class T>
            inline void Matrix4x4<T>::setC1(Vector4D<T> const& c1) {
                data[0][0] = c1.getX();
                data[1][0] = c1.getY();
                data[2][0] = c1.getZ();
                data[3][0] = c1.getW();
            }

            template <class T>
            inline void Matrix4x4<T>::setC2(Vector4D<T> const& c2) {
                data[0][1] = c2.getX();
                data[1][1] = c2.getY();
                data[2][1] = c2.getZ();
                data[3][1] = c2.getW();
            }

            template <class T>
            inline void Matrix4x4<T>::setC3(Vector4D<T> const& c3) {
                data[0][2] = c3.getX();
                data[1][2] = c3.getY();
                data[2][2] = c3.getZ();
                data[3][2] = c3.getW();
            }

            template <class T>
            inline void Matrix4x4<T>::setC4(Vector4D<T> const& c4) {
                data[0][3] = c4.getX();
                data[1][3] = c4.getY();
                data[2][3] = c4.getZ();
                data[3][3] = c4.getW();
            }

            template <class T>
            inline void Matrix4x4<T>::setIdentity() {
                setL1(Vector4D<T>(1, 0, 0, 0));
                setL2(Vector4D<T>(0, 1, 0, 0));
                setL3(Vector4D<T>(0, 0, 1, 0));
                setL4(Vector4D<T>(0, 0, 0, 1));
            }

            template <class T>
            inline void Matrix4x4<T>::transpose() {
                Matrix4x4<T> tmp;
                tmp[0][0] = data[0][0];
                tmp[0][1] = data[1][0];
                tmp[0][2] = data[2][0];
                tmp[0][3] = data[3][0];
                tmp[1][0] = data[0][1];
                tmp[1][1] = data[1][1];
                tmp[1][2] = data[2][1];
                tmp[1][3] = data[3][1];
                tmp[2][0] = data[0][2];
                tmp[2][1] = data[1][2];
                tmp[2][2] = data[2][2];
                tmp[2][3] = data[3][2];
                tmp[3][0] = data[0][3];
                tmp[3][1] = data[1][3];
                tmp[3][2] = data[2][3];
                tmp[3][3] = data[3][3];
                *this = std::move(tmp);
            }

            template <class T>
            void Matrix4x4<T>::inverse() {
                Matrix4x4<T> tmp;
                float det = getDeterminant();
                if (std::abs(det) > F_EPSILON) {
                    tmp[0][0] = (1.0f / det) * ((data[1][1] * data[2][2] * data[3][3]) + (data[1][2] * data[2][3] * data[3][1]) + (data[1][3] * data[2][1] * data[3][2])
                                            - (data[1][1] * data[2][3] * data[3][2]) - (data[1][2] * data[2][1] * data[3][3]) - (data[1][3] * data[2][2] * data[3][1]));
                    tmp[0][1] = (1.0f / det) * ((data[0][1] * data[2][3] * data[3][2]) + (data[0][2] * data[2][1] * data[3][3]) + (data[0][3] * data[2][2] * data[3][1])
                                            - (data[0][1] * data[2][2] * data[3][3]) - (data[0][2] * data[2][3] * data[3][1]) - (data[0][3] * data[2][1] * data[3][2]));
                    tmp[0][2] = (1.0f / det) * ((data[0][1] * data[1][2] * data[3][3]) + (data[0][2] * data[1][3] * data[3][1]) + (data[0][3] * data[1][1] * data[3][2])
                                            - (data[0][1] * data[1][3] * data[3][2]) - (data[0][2] * data[1][1] * data[3][3]) - (data[0][3] * data[1][2] * data[3][1]));
                    tmp[0][3] = (1.0f / det) * ((data[0][1] * data[1][3] * data[2][2]) + (data[0][2] * data[1][1] * data[2][3]) + (data[0][3] * data[1][2] * data[2][1])
                                            - (data[0][1] * data[1][2] * data[2][3]) - (data[0][2] * data[1][3] * data[2][1]) - (data[0][3] * data[1][1] * data[2][2]));
                    tmp[1][0] = (1.0f / det) * ((data[1][0] * data[2][3] * data[3][2]) + (data[1][2] * data[2][0] * data[3][3]) + (data[1][3] * data[2][2] * data[3][0])
                                            - (data[1][0] * data[2][2] * data[3][3]) - (data[1][2] * data[2][3] * data[3][0]) - (data[1][3] * data[2][0] * data[3][2]));
                    tmp[1][1] = (1.0f / det) * ((data[0][0] * data[2][2] * data[3][3]) + (data[0][2] * data[2][3] * data[3][0]) + (data[0][3] * data[2][0] * data[3][2])
                                            - (data[0][0] * data[2][3] * data[3][2]) - (data[0][2] * data[2][0] * data[3][3]) - (data[0][3] * data[2][2] * data[3][0]));
                    tmp[1][2] = (1.0f / det) * ((data[0][0] * data[1][3] * data[3][2]) + (data[0][2] * data[1][0] * data[3][3]) + (data[0][3] * data[1][2] * data[3][0])
                                            - (data[0][0] * data[1][2] * data[3][3]) - (data[0][2] * data[1][3] * data[3][0]) - (data[0][3] * data[1][0] * data[3][2]));
                    tmp[1][3] = (1.0f / det) * ((data[0][0] * data[1][2] * data[2][3]) + (data[0][2] * data[1][3] * data[2][0]) + (data[0][3] * data[1][0] * data[2][2])
                                            - (data[0][0] * data[1][3] * data[2][2]) - (data[0][2] * data[1][0] * data[2][3]) - (data[0][3] * data[1][2] * data[2][0]));
                    tmp[2][0] = (1.0f / det) * ((data[1][0] * data[2][1] * data[3][3]) + (data[1][1] * data[2][3] * data[3][0]) + (data[1][3] * data[2][0] * data[3][1])
                                            - (data[1][0] * data[2][3] * data[3][1]) - (data[1][1] * data[2][0] * data[3][3]) - (data[1][3] * data[2][1] * data[3][0]));
                    tmp[2][1] = (1.0f / det) * ((data[0][0] * data[2][3] * data[3][1]) + (data[0][1] * data[2][0] * data[3][3]) + (data[0][3] * data[2][1] * data[3][0])
                                            - (data[0][0] * data[2][1] * data[3][3]) - (data[0][1] * data[2][3] * data[3][0]) - (data[0][3] * data[2][0] * data[3][1]));
                    tmp[2][2] = (1.0f / det) * ((data[0][0] * data[1][1] * data[3][3]) + (data[0][1] * data[1][3] * data[3][0]) + (data[0][3] * data[1][0] * data[3][1])
                                            - (data[0][0] * data[1][3] * data[3][1]) - (data[0][1] * data[1][0] * data[3][3]) - (data[0][3] * data[1][1] * data[3][0]));
                    tmp[2][3] = (1.0f / det) * ((data[0][0] * data[1][3] * data[2][1]) + (data[0][1] * data[1][0] * data[2][3]) + (data[0][3] * data[1][1] * data[2][0])
                                            - (data[0][0] * data[1][1] * data[2][3]) - (data[0][1] * data[1][3] * data[2][0]) - (data[0][3] * data[1][0] * data[2][1]));
                    tmp[3][0] = (1.0f / det) * ((data[1][0] * data[2][2] * data[3][1]) + (data[1][1] * data[2][0] * data[3][2]) + (data[1][2] * data[2][1] * data[3][0])
                                            - (data[1][0] * data[2][1] * data[3][2]) - (data[1][1] * data[2][2] * data[3][0]) - (data[1][2] * data[2][0] * data[3][1]));
                    tmp[3][1] = (1.0f / det) * ((data[0][0] * data[2][1] * data[3][2]) + (data[0][1] * data[2][2] * data[3][0]) + (data[0][2] * data[2][0] * data[3][1])
                                            - (data[0][0] * data[2][2] * data[3][1]) - (data[0][1] * data[2][0] * data[3][2]) - (data[0][2] * data[2][1] * data[3][0]));
                    tmp[3][2] = (1.0f / det) * ((data[0][0] * data[1][2] * data[3][1]) + (data[0][1] * data[1][0] * data[3][2]) + (data[0][2] * data[1][1] * data[3][0])
                                            - (data[0][0] * data[1][1] * data[3][2]) - (data[0][1] * data[1][2] * data[3][0]) - (data[0][2] * data[1][0] * data[3][1]));
                    tmp[3][3] = (1.0f / det) * ((data[0][0] * data[1][1] * data[2][2]) + (data[0][1] * data[1][2] * data[2][0]) + (data[0][2] * data[1][0] * data[2][1])
                                            - (data[0][0] * data[1][2] * data[2][1]) - (data[0][1] * data[1][0] * data[2][2]) - (data[0][2] * data[1][1] * data[2][0]));
                }

                *this = std::move(tmp);
            }

            template <class T>
            inline void Matrix4x4<T>::translate(Vector3D<T> const& u) {
                Matrix4x4<T> tmp;
                tmp[0][3] = u.getX();
                tmp[1][3] = u.getY();
                tmp[2][3] = u.getZ();
                *this *= tmp;
            }

            template <class T>
            inline void Matrix4x4<T>::scale(Vector3D<T> const& u) {
                Matrix4x4<T> tmp;
                tmp[0][0] = u.getX();
                tmp[1][1] = u.getY();
                tmp[2][2] = u.getZ();
                *this *= tmp;
            }

            template <class T>
            inline void Matrix4x4<T>::stretchX(T u) {
                Matrix4x4<T> tmp;
                tmp[0][0] = u;
                *this *= tmp;
            }

            template <class T>
            inline void Matrix4x4<T>::stretchY(T u) {
                Matrix4x4<T> tmp;
                tmp[1][1] = u;
                *this *= tmp;
            }

            template <class T>
            inline void Matrix4x4<T>::stretchZ(T u) {
                Matrix4x4<T> tmp;
                tmp[2][2] = u;
                *this *= tmp;
            }

            template <class T>
            void Matrix4x4<T>::rotate(Angle angle, Vector3D<T> const& axis) {
                Matrix3x3<T> tmp;
                T c = static_cast <T> (cos(angle));
                T s = static_cast <T> (sin(angle));
                Vector3D<T> vec(axis * (static_cast <T> (1.0) - c));

                tmp[0][0] = axis.getX() * vec.getX() + c;
                tmp[0][1] = axis.getY() * vec.getX() - axis.getZ() * s;
                tmp[0][2] = axis.getZ() * vec.getX() + axis.getY() * s;
                tmp[1][0] = axis.getX() * vec.getY() + axis.getZ() * s;
                tmp[1][1] = axis.getY() * vec.getY() + c;
                tmp[1][2] = axis.getZ() * vec.getY() - axis.getX() * s;
                tmp[2][0] = axis.getX() * vec.getZ() - axis.getY() * s;
                tmp[2][1] = axis.getY() * vec.getZ() + axis.getX() * s;
                tmp[2][2] = axis.getZ() * vec.getZ() + c;

                *this *= tmp;
            }

            template <class T>
            inline void Matrix4x4<T>::perspective(Angle fov, T ratio, Vector2D<T> const& z) {
                Matrix4x4<T> tmp;
                T f = static_cast <T> (1.0 / tan(fov / 2.0));
                tmp[0][0] = f / ratio;
                tmp[1][1] = f;
                tmp[2][2] = (z.getY() + z.getX()) / (z.getX() - z.getY());
                tmp[2][3] = (static_cast <T> (2.0) * z.getY() * z.getX()) / (z.getX() - z.getY());
                tmp[3][2] = -1;

                *this *= tmp;
            }

            template <class T>
            inline void Matrix4x4<T>::ortho(Vector2D<T> const& h, Vector2D<T> const& v, Vector2D<T> const& z) {
                Matrix4x4<T> tmp;
                T tX = -((h.getY() + h.getX()) / (h.getY() - h.getX()));
                T tY = -((v.getY() + v.getX()) / (v.getY() - v.getX()));
                T tZ = -((z.getY() + z.getX()) / (z.getY() - z.getX()));

                tmp[0][0] = static_cast <T>  (2.0) / (h.getY() - h.getX());
                tmp[1][1] = static_cast <T>  (2.0) / (v.getY() - v.getX());
                tmp[2][2] = static_cast <T> (-2.0) / (z.getY() - z.getX());
                tmp[0][3] = tX;
                tmp[1][3] = tY;
                tmp[2][3] = tZ;

                *this *= tmp;
            }

            template <class T>
            inline void Matrix4x4<T>::ortho2D(Vector2D<T> const& h, Vector2D<T> const& v) {
                ortho(h, v, Vector2D<T>(-1, 1));
            }

            template <class T>
            void Matrix4x4<T>::lookAt(Vector3D<T> const& eye, Vector3D<T> const& center, Vector3D<T> const& up) {
                Matrix4x4<T> tmp;
                Vector3D<T> f(center.getX() - eye.getX(),
                              center.getY() - eye.getY(),
                              center.getZ() - eye.getZ());
                f.normalize();
                Vector3D<T> tmpUP(up);
                tmpUP.normalize();
                Vector3D<T> s = f ^ up;

                Vector3D<T> tmpS(s);
                tmpS.normalize();
                Vector3D<T> u = s ^ f;

                tmp[0][0] = s.getX();
                tmp[0][1] = s.getY();
                tmp[0][2] = s.getZ();

                tmp[1][0] = u.getX();
                tmp[1][1] = u.getY();
                tmp[1][2] = u.getZ();

                tmp[2][0] = -f.getX();
                tmp[2][1] = -f.getY();
                tmp[2][2] = -f.getZ();

                *this *= tmp;
                translate(-eye);
            }

            template <class T>
            inline const T* Matrix4x4<T>::value() const {
                return data[0].value();
            }

            template <class T>
            inline Vector4D<T>& Matrix4x4<T>::operator [](std::size_t index) {
                return data[index];
            }
            template <class T>
            inline Vector4D<T> const& Matrix4x4<T>::operator [](std::size_t index) const {
                return data[index];
            }

            template <class T>
            Utility::String Matrix4x4<T>::toString() const {
                Utility::String res("[");
                res.reserve(180);
                res << getL1()[0];
                res << ' ';
                res << getL1()[1];
                res << ' ';
                res << getL1()[2];
                res << ' ';
                res << getL1()[3];
                res << "]\n[";
                res << getL2()[0];
                res << ' ';
                res << getL2()[1];
                res << ' ';
                res << getL2()[2];
                res << ' ';
                res << getL2()[3];
                res << "]\n[";
                res << getL3()[0];
                res << ' ';
                res << getL3()[1];
                res << ' ';
                res << getL3()[2];
                res << ' ';
                res << getL3()[3];
                res << "]\n[";
                res << getL4()[0];
                res << ' ';
                res << getL4()[1];
                res << ' ';
                res << getL4()[2];
                res << ' ';
                res << getL4()[3];
                res << ']';
                return res;
            }

            template <class T>
            inline Matrix4x4<T>& Matrix4x4<T>::operator +=(Matrix4x4 const& m) {
                data[0] += m[0];
                data[1] += m[1];
                data[2] += m[2];
                data[3] += m[3];
                return *this;
            }

            template <class T>
            inline Matrix4x4<T>& Matrix4x4<T>::operator -=(Matrix4x4 const& m) {
                data[0] -= m[0];
                data[1] -= m[1];
                data[2] -= m[2];
                data[3] -= m[3];
                return *this;
            }

            template <class T>
            inline Matrix4x4<T>& Matrix4x4<T>::operator *=(T k) {
                data[0] *= k;
                data[1] *= k;
                data[2] *= k;
                data[3] *= k;
                return *this;
            }

            template <class T>
            inline Matrix4x4<T>& Matrix4x4<T>::operator *=(Matrix4x4 const& m) {
                Matrix4x4<T> tmp(*this);
                tmp[0][0] = getL1() | m.getC1(); tmp[0][1] = getL1() | m.getC2(); tmp[0][2] = getL1() | m.getC3(); tmp[0][3] = getL1() | m.getC4();
                tmp[1][0] = getL2() | m.getC1(); tmp[1][1] = getL2() | m.getC2(); tmp[1][2] = getL2() | m.getC3(); tmp[1][3] = getL2() | m.getC4();
                tmp[2][0] = getL3() | m.getC1(); tmp[2][1] = getL3() | m.getC2(); tmp[2][2] = getL3() | m.getC3(); tmp[2][3] = getL3() | m.getC4();
                tmp[3][0] = getL4() | m.getC1(); tmp[3][1] = getL4() | m.getC2(); tmp[3][2] = getL4() | m.getC3(); tmp[3][3] = getL4() | m.getC4();
                *this = std::move(tmp);
                return *this;
            }

            template <class T>
            inline Matrix4x4<T>& Matrix4x4<T>::operator /=(T k) {
                data[0] /= k;
                data[1] /= k;
                data[2] /= k;
                data[3] /= k;
                return *this;
            }

            template <class T>
            inline Matrix4x4<T>& Matrix4x4<T>::operator /=(Matrix4x4 const& m) {
                Matrix4x4<T> tmp(m); tmp.inverse();
                return *this *= tmp;
            }

            template <class T>
            inline Matrix4x4<T> Matrix4x4<T>::operator +(Matrix4x4 const& m) const {
                return Matrix4x4<T>(*this) += m;
            }

            template <class T>
            inline Matrix4x4<T> Matrix4x4<T>::operator -(Matrix4x4 const& m) const {
                return Matrix4x4<T>(*this) -= m;
            }

            template <class T>
            inline Matrix4x4<T> Matrix4x4<T>::operator *(T k)  const {
                return Matrix4x4<T>(*this) *= k;
            }

            template <class T>
            inline Matrix4x4<T> Matrix4x4<T>::operator *(Matrix4x4 const& m) const {
                return Matrix4x4<T>(*this) *= m;
            }

            template <class T>
            inline Vector4D<T> Matrix4x4<T>::operator *(Vector4D<T> const& u) const {
                return Vector4D<T>(u | getL1(), u | getL2(), u | getL3(), u | getL4());
            }

            template <class T>
            inline Plane<T> Matrix4x4<T>::operator *(Plane<T> const& p) const {
                return Plane<T>(*this * p.getNormal(), *this * p.getPoint());
            }

            template <class T>
            inline Segment4D<T> Matrix4x4<T>::operator *(Segment4D<T> const& s) const {
                return Segment4D<T>(*this * s.getStart(), *this * s.getEnd());
            }

            template <class T>
            BezierCurve4D Matrix4x4<T>::operator *(BezierCurve4D const& s) const {
                BezierCurve4D tmp(s);
                for (std::size_t i = 0; i < tmp.getSize(); i++) {
                    tmp[i] = *this * tmp[i];
                }
                return tmp;
            }

            template <class T>
            inline Matrix4x4<T> Matrix4x4<T>::operator /(T k) const {
                return Matrix4x4<T>(*this) /= k;
            }

            template <class T>
            inline Matrix4x4<T> Matrix4x4<T>::operator /(Matrix4x4 const& m) const {
                return Matrix4x4<T>(*this) /= m;
            }

            template <class T>
            inline bool Matrix4x4<T>::operator ==(Matrix4x4 const& m) const {
                return getL1() == m.getL1() && getL2() == m.getL2() && getL3() == m.getL3() && getL4() == m.getL4();
            }

            template <class T>
            inline bool Matrix4x4<T>::operator !=(Matrix4x4 const& m) const {
                return !(*this == m);
            }

            template <class T>
            std::ostream& operator <<(std::ostream& stream, Matrix4x4<T> const& o) {
                return stream << o.toString();
            }
        }
    }
