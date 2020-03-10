
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
            template <class A, class B, class C, class D,
                      class E, class F, class G, class H,
                      class I, class J, class K, class L,
                      class M, class N, class O, class P>
            constexpr Matrix4x4<T>::Matrix4x4(A a, B b, C c, D d, E e, F f, G g, H h, I i, J j, K k, L l, M m, N n, O o, P p)
                                           : data{Vector4D<std::common_type_t<A, B, C, D>>(a, b, c, d), Vector4D<std::common_type_t<E, F, G, H>>(e, f, g, h), Vector4D<std::common_type_t<I, J, K, L>>(i, j, k, l), Vector4D<std::common_type_t<M, N, O, P>>(m, n, o, p)} {
            }

            template <class T>
            template <class K>
            constexpr Matrix4x4<T>::Matrix4x4(K value) : Matrix4x4(value, value, value, value,
                                                                   value, value, value, value,
                                                                   value, value, value, value,
                                                                   value, value, value, value) {
            }

            template <class T>
            template <class K, class L, class N, class M>
            constexpr Matrix4x4<T>::Matrix4x4(Vector4D<K> const& l1, Vector4D<L> const& l2, Vector4D<N> const& l3, Vector4D<M> const& l4) : data{l1, l2, l3, l4} {
            }

            template <class T>
            template <class K>
            constexpr Matrix4x4<T>::Matrix4x4(Matrix4x4<K> const& m) : data{static_cast <Vector4D<T>> (m.getL1()), static_cast <Vector4D<T>> (m.getL2()), static_cast <Vector4D<T>> (m.getL3()), static_cast <Vector4D<T>> (m.getL4())} {
            }

            template <class T>
            template <class K>
            constexpr Matrix4x4<T>::Matrix4x4(Matrix3x3<K> const& m) : data{Vector4D<T>(m.getL1(), 0), Vector4D<T>(m.getL2(), 0), Vector4D<T>(m.getL3(), 0), Vector4D<T>(0, 0, 0, 1)} {
            }

            template <class T>
            template <class K>
            constexpr Matrix4x4<T>::Matrix4x4(Quaternion<K> const& q) {
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
            constexpr Vector4D<T> const& Matrix4x4<T>::getL1() const {
                return data[0];
            }

            template <class T>
            constexpr Vector4D<T> const& Matrix4x4<T>::getL2() const {
                return data[1];
            }

            template <class T>
            constexpr Vector4D<T> const& Matrix4x4<T>::getL3() const {
                return data[2];
            }

            template <class T>
            constexpr Vector4D<T> const& Matrix4x4<T>::getL4() const {
                return data[3];
            }

            template <class T>
            constexpr Vector4D<T> Matrix4x4<T>::getC1() const {
                return Vector4D<T>(data[0][0], data[1][0], data[2][0], data[3][0]);
            }

            template <class T>
            constexpr Vector4D<T> Matrix4x4<T>::getC2() const {
                return Vector4D<T>(data[0][1], data[1][1], data[2][1], data[3][1]);
            }

            template <class T>
            constexpr Vector4D<T> Matrix4x4<T>::getC3() const {
                return Vector4D<T>(data[0][2], data[1][2], data[2][2], data[3][2]);
            }

            template <class T>
            constexpr Vector4D<T> Matrix4x4<T>::getC4() const {
                return Vector4D<T>(data[0][3], data[1][3], data[2][3], data[3][3]);
            }

            template <class T>
            constexpr long double Matrix4x4<T>::getDeterminant() const {
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
            template <class K>
            constexpr void Matrix4x4<T>::setL1(Vector4D<K> const& l1) {
                data[0] = l1;
            }

            template <class T>
            template <class K>
            constexpr void Matrix4x4<T>::setL2(Vector4D<K> const& l2) {
                data[1] = l2;
            }

            template <class T>
            template <class K>
            constexpr void Matrix4x4<T>::setL3(Vector4D<K> const& l3) {
                data[2] = l3;
            }

            template <class T>
            template <class K>
            constexpr void Matrix4x4<T>::setL4(Vector4D<K> const& l4) {
                data[3] = l4;
            }

            template <class T>
            template <class K>
            constexpr void Matrix4x4<T>::setC1(Vector4D<K> const& c1) {
                data[0][0] = c1.getX();
                data[1][0] = c1.getY();
                data[2][0] = c1.getZ();
                data[3][0] = c1.getW();
            }

            template <class T>
            template <class K>
            constexpr void Matrix4x4<T>::setC2(Vector4D<K> const& c2) {
                data[0][1] = c2.getX();
                data[1][1] = c2.getY();
                data[2][1] = c2.getZ();
                data[3][1] = c2.getW();
            }

            template <class T>
            template <class K>
            constexpr void Matrix4x4<T>::setC3(Vector4D<K> const& c3) {
                data[0][2] = c3.getX();
                data[1][2] = c3.getY();
                data[2][2] = c3.getZ();
                data[3][2] = c3.getW();
            }

            template <class T>
            template <class K>
            constexpr void Matrix4x4<T>::setC4(Vector4D<K> const& c4) {
                data[0][3] = c4.getX();
                data[1][3] = c4.getY();
                data[2][3] = c4.getZ();
                data[3][3] = c4.getW();
            }

            template <class T>
            constexpr void Matrix4x4<T>::setIdentity() {
                *this = IDENTITY;
            }

            template <class T>
            constexpr void Matrix4x4<T>::transpose() {
                Matrix4x4<T> tmp;
                tmp[0][0] = data[0][0];
                tmp[1][0] = data[0][1];
                tmp[2][0] = data[0][2];
                tmp[3][0] = data[0][3];
                tmp[0][1] = data[1][0];
                tmp[1][1] = data[1][1];
                tmp[2][1] = data[1][2];
                tmp[3][1] = data[1][3];
                tmp[0][2] = data[2][0];
                tmp[1][2] = data[2][1];
                tmp[2][2] = data[2][2];
                tmp[3][2] = data[2][3];
                tmp[0][3] = data[3][0];
                tmp[1][3] = data[3][1];
                tmp[2][3] = data[3][2];
                tmp[3][3] = data[3][3];
                *this = std::move(tmp);
            }

            template <class T>
            constexpr void Matrix4x4<T>::inverse() {
                Matrix4x4<T> tmp = IDENTITY;
                if (auto det = getDeterminant(); std::abs(det) > EPSILON) {
                    long double invDet = 1.0 / det;
                    tmp[0][0] = static_cast <T> (invDet * static_cast <long double> (
                            (data[1][1] * data[2][2] * data[3][3]) + (data[1][2] * data[2][3] * data[3][1]) + (data[1][3] * data[2][1] * data[3][2])
                          - (data[1][1] * data[2][3] * data[3][2]) - (data[1][2] * data[2][1] * data[3][3]) - (data[1][3] * data[2][2] * data[3][1])));
                    tmp[0][1] = static_cast <T> (invDet * static_cast <long double> (
                            (data[0][1] * data[2][3] * data[3][2]) + (data[0][2] * data[2][1] * data[3][3]) + (data[0][3] * data[2][2] * data[3][1])
                          - (data[0][1] * data[2][2] * data[3][3]) - (data[0][2] * data[2][3] * data[3][1]) - (data[0][3] * data[2][1] * data[3][2])));
                    tmp[0][2] = static_cast <T> (invDet * static_cast <long double> (
                            (data[0][1] * data[1][2] * data[3][3]) + (data[0][2] * data[1][3] * data[3][1]) + (data[0][3] * data[1][1] * data[3][2])
                          - (data[0][1] * data[1][3] * data[3][2]) - (data[0][2] * data[1][1] * data[3][3]) - (data[0][3] * data[1][2] * data[3][1])));
                    tmp[0][3] = static_cast <T> (invDet * static_cast <long double> (
                            (data[0][1] * data[1][3] * data[2][2]) + (data[0][2] * data[1][1] * data[2][3]) + (data[0][3] * data[1][2] * data[2][1])
                          - (data[0][1] * data[1][2] * data[2][3]) - (data[0][2] * data[1][3] * data[2][1]) - (data[0][3] * data[1][1] * data[2][2])));
                    tmp[1][0] = static_cast <T> (invDet * static_cast <long double> (
                            (data[1][0] * data[2][3] * data[3][2]) + (data[1][2] * data[2][0] * data[3][3]) + (data[1][3] * data[2][2] * data[3][0])
                          - (data[1][0] * data[2][2] * data[3][3]) - (data[1][2] * data[2][3] * data[3][0]) - (data[1][3] * data[2][0] * data[3][2])));
                    tmp[1][1] = static_cast <T> (invDet * static_cast <long double> (
                            (data[0][0] * data[2][2] * data[3][3]) + (data[0][2] * data[2][3] * data[3][0]) + (data[0][3] * data[2][0] * data[3][2])
                          - (data[0][0] * data[2][3] * data[3][2]) - (data[0][2] * data[2][0] * data[3][3]) - (data[0][3] * data[2][2] * data[3][0])));
                    tmp[1][2] = static_cast <T> (invDet * static_cast <long double> (
                            (data[0][0] * data[1][3] * data[3][2]) + (data[0][2] * data[1][0] * data[3][3]) + (data[0][3] * data[1][2] * data[3][0])
                          - (data[0][0] * data[1][2] * data[3][3]) - (data[0][2] * data[1][3] * data[3][0]) - (data[0][3] * data[1][0] * data[3][2])));
                    tmp[1][3] = static_cast <T> (invDet * static_cast <long double> (
                            (data[0][0] * data[1][2] * data[2][3]) + (data[0][2] * data[1][3] * data[2][0]) + (data[0][3] * data[1][0] * data[2][2])
                          - (data[0][0] * data[1][3] * data[2][2]) - (data[0][2] * data[1][0] * data[2][3]) - (data[0][3] * data[1][2] * data[2][0])));
                    tmp[2][0] = static_cast <T> (invDet * static_cast <long double> (
                            (data[1][0] * data[2][1] * data[3][3]) + (data[1][1] * data[2][3] * data[3][0]) + (data[1][3] * data[2][0] * data[3][1])
                          - (data[1][0] * data[2][3] * data[3][1]) - (data[1][1] * data[2][0] * data[3][3]) - (data[1][3] * data[2][1] * data[3][0])));
                    tmp[2][1] = static_cast <T> (invDet * static_cast <long double> (
                            (data[0][0] * data[2][3] * data[3][1]) + (data[0][1] * data[2][0] * data[3][3]) + (data[0][3] * data[2][1] * data[3][0])
                          - (data[0][0] * data[2][1] * data[3][3]) - (data[0][1] * data[2][3] * data[3][0]) - (data[0][3] * data[2][0] * data[3][1])));
                    tmp[2][2] = static_cast <T> (invDet * static_cast <long double> (
                            (data[0][0] * data[1][1] * data[3][3]) + (data[0][1] * data[1][3] * data[3][0]) + (data[0][3] * data[1][0] * data[3][1])
                          - (data[0][0] * data[1][3] * data[3][1]) - (data[0][1] * data[1][0] * data[3][3]) - (data[0][3] * data[1][1] * data[3][0])));
                    tmp[2][3] = static_cast <T> (invDet * static_cast <long double> (
                            (data[0][0] * data[1][3] * data[2][1]) + (data[0][1] * data[1][0] * data[2][3]) + (data[0][3] * data[1][1] * data[2][0])
                          - (data[0][0] * data[1][1] * data[2][3]) - (data[0][1] * data[1][3] * data[2][0]) - (data[0][3] * data[1][0] * data[2][1])));
                    tmp[3][0] = static_cast <T> (invDet * static_cast <long double> (
                            (data[1][0] * data[2][2] * data[3][1]) + (data[1][1] * data[2][0] * data[3][2]) + (data[1][2] * data[2][1] * data[3][0])
                          - (data[1][0] * data[2][1] * data[3][2]) - (data[1][1] * data[2][2] * data[3][0]) - (data[1][2] * data[2][0] * data[3][1])));
                    tmp[3][1] = static_cast <T> (invDet * static_cast <long double> (
                            (data[0][0] * data[2][1] * data[3][2]) + (data[0][1] * data[2][2] * data[3][0]) + (data[0][2] * data[2][0] * data[3][1])
                          - (data[0][0] * data[2][2] * data[3][1]) - (data[0][1] * data[2][0] * data[3][2]) - (data[0][2] * data[2][1] * data[3][0])));
                    tmp[3][2] = static_cast <T> (invDet * static_cast <long double> (
                            (data[0][0] * data[1][2] * data[3][1]) + (data[0][1] * data[1][0] * data[3][2]) + (data[0][2] * data[1][1] * data[3][0])
                          - (data[0][0] * data[1][1] * data[3][2]) - (data[0][1] * data[1][2] * data[3][0]) - (data[0][2] * data[1][0] * data[3][1])));
                    tmp[3][3] = static_cast <T> (invDet * static_cast <long double> (
                            (data[0][0] * data[1][1] * data[2][2]) + (data[0][1] * data[1][2] * data[2][0]) + (data[0][2] * data[1][0] * data[2][1])
                          - (data[0][0] * data[1][2] * data[2][1]) - (data[0][1] * data[1][0] * data[2][2]) - (data[0][2] * data[1][1] * data[2][0])));
                }

                *this = std::move(tmp);
            }

            template <class T>
            template <class K>
            constexpr void Matrix4x4<T>::translate(Vector3D<K> const& u) {
                Matrix4x4<T> tmp = IDENTITY;
                tmp[0][3] = static_cast <T> (u.getX());
                tmp[1][3] = static_cast <T> (u.getY());
                tmp[2][3] = static_cast <T> (u.getZ());
                *this *= tmp;
            }

            template <class T>
            template <class K>
            constexpr void Matrix4x4<T>::scale(Vector3D<K> const& u) {
                Matrix4x4<T> tmp = IDENTITY;
                tmp[0][0] = static_cast <T> (u.getX());
                tmp[1][1] = static_cast <T> (u.getY());
                tmp[2][2] = static_cast <T> (u.getZ());
                *this *= tmp;
            }

            template <class T>
            template <class K>
            constexpr void Matrix4x4<T>::rotate(Angle angle, Vector3D<K> const& axis) {
                double c = cos(angle);
                double s = sin(angle);
                
                auto vec = axis * (1.0 - c);
                auto ax = static_cast <Vector3D<std::common_type_t<K, double>>> (axis);

                Matrix4x4<T> tmp;
                tmp[0][0] = static_cast <T> (ax.getX() * vec.getX() + c);
                tmp[0][1] = static_cast <T> (ax.getY() * vec.getX() - ax.getZ() * s);
                tmp[0][2] = static_cast <T> (ax.getZ() * vec.getX() + ax.getY() * s);
                tmp[0][3] = 0;
                tmp[1][0] = static_cast <T> (ax.getX() * vec.getY() + ax.getZ() * s);
                tmp[1][1] = static_cast <T> (ax.getY() * vec.getY() + c);
                tmp[1][2] = static_cast <T> (ax.getZ() * vec.getY() - ax.getX() * s);
                tmp[1][3] = 0;
                tmp[2][0] = static_cast <T> (ax.getX() * vec.getZ() - ax.getY() * s);
                tmp[2][1] = static_cast <T> (ax.getY() * vec.getZ() + ax.getX() * s);
                tmp[2][2] = static_cast <T> (ax.getZ() * vec.getZ() + c);
                tmp[2][3] = 0;
                tmp[3][0] = 0;
                tmp[3][1] = 0;
                tmp[3][2] = 0;
                tmp[3][3] = 1;

                *this *= tmp;
            }

            template <class T>
            template <class K, class L, class N>
            constexpr void Matrix4x4<T>::ortho(Vector2D<K> const& h, Vector2D<L> const& v, Vector2D<N> const& z) {
                setIdentity();
                data[0][0] = static_cast <T> (static_cast <K>  (2.0) / (h.getY() - h.getX()));
                data[1][1] = static_cast <T> (static_cast <L>  (2.0) / (v.getY() - v.getX()));
                data[2][2] = static_cast <T> (static_cast <N> (-2.0) / (z.getY() - z.getX()));
                data[0][3] = static_cast <T> (-((h.getY() + h.getX()) / (h.getY() - h.getX())));
                data[1][3] = static_cast <T> (-((v.getY() + v.getX()) / (v.getY() - v.getX())));
                data[2][3] = static_cast <T> (-((z.getY() + z.getX()) / (z.getY() - z.getX())));
            }

            template <class T>
            template <class K, class L>
            constexpr void Matrix4x4<T>::ortho2D(Vector2D<K> const& h, Vector2D<L> const& v) {
                ortho(h, v, Vector2D<T>(-1, 1));
            }

            template <class T>
            template <class K, class L, class N>
            constexpr void Matrix4x4<T>::lookAt(Vector3D<K> const& eye, Vector3D<L> const& center, Vector3D<N> const& up) {
                Vector3D<T> z(static_cast <T> (center.getX()) - static_cast <T> (eye.getX()),
                              static_cast <T> (center.getY()) - static_cast <T> (eye.getY()),
                              static_cast <T> (center.getZ()) - static_cast <T> (eye.getZ()));
                z.normalize();
                Vector3D<T> x(z ^ up);
                x.normalize();
                Vector3D<T> y(x ^ z);
                
                setL1(Vector4D<T>( x, -(x | static_cast <Vector3D<T>> (eye))));
                setL2(Vector4D<T>( y, -(y | static_cast <Vector3D<T>> (eye))));
                setL3(Vector4D<T>(-z,  (z | static_cast <Vector3D<T>> (eye))));
                setL4(Vector4D<T>(0, 0, 0, 1));
            }

            template <class T>
            constexpr const T* Matrix4x4<T>::value() const {
                return data[0].value();
            }

            template <class T>
            constexpr Vector4D<T>& Matrix4x4<T>::operator [](std::size_t index) {
                return data[index];
            }
            
            template <class T>
            constexpr Vector4D<T> const& Matrix4x4<T>::operator [](std::size_t index) const {
                return data[index];
            }
            
            template <class T>
            template <class K>
            constexpr Matrix4x4<T>& Matrix4x4<T>::operator=(Matrix4x4<K> const& m) {
                setL1(m.getL1());
                setL2(m.getL2());
                setL3(m.getL3());
                setL4(m.getL4());
                return *this;
            }
    
            template <class T>
            template <class K>
            constexpr Matrix4x4<T>& Matrix4x4<T>::operator=(Matrix4x4<K> && m) {
                setL1(m.getL1());
                setL2(m.getL2());
                setL3(m.getL3());
                setL4(m.getL4());
                return *this;
            }

            template <class T>
            template <class K>
            constexpr Matrix4x4<T>& Matrix4x4<T>::operator +=(Matrix4x4<K> const& m) {
                data[0] += m[0];
                data[1] += m[1];
                data[2] += m[2];
                data[3] += m[3];
                return *this;
            }

            template <class T>
            template <class K>
            constexpr Matrix4x4<T>& Matrix4x4<T>::operator -=(Matrix4x4<K> const& m) {
                data[0] -= m[0];
                data[1] -= m[1];
                data[2] -= m[2];
                data[3] -= m[3];
                return *this;
            }

            template <class T>
            template <class K>
            constexpr Matrix4x4<T>& Matrix4x4<T>::operator *=(K k) {
                data[0] *= k;
                data[1] *= k;
                data[2] *= k;
                data[3] *= k;
                return *this;
            }

            template <class T>
            template <class K>
            constexpr Matrix4x4<T>& Matrix4x4<T>::operator *=(Matrix4x4<K> const& m) {
                Matrix4x4<T> tmp(*this);
                auto c1 = m.getC1();
                auto c2 = m.getC2();
                auto c3 = m.getC3();
                auto c4 = m.getC4();
                tmp[0][0] = static_cast <T> (getL1() | c1);
                tmp[0][1] = static_cast <T> (getL1() | c2);
                tmp[0][2] = static_cast <T> (getL1() | c3);
                tmp[0][3] = static_cast <T> (getL1() | c4);
                
                tmp[1][0] = static_cast <T> (getL2() | c1);
                tmp[1][1] = static_cast <T> (getL2() | c2);
                tmp[1][2] = static_cast <T> (getL2() | c3);
                tmp[1][3] = static_cast <T> (getL2() | c4);
                
                tmp[2][0] = static_cast <T> (getL3() | c1);
                tmp[2][1] = static_cast <T> (getL3() | c2);
                tmp[2][2] = static_cast <T> (getL3() | c3);
                tmp[2][3] = static_cast <T> (getL3() | c4);
                
                tmp[3][0] = static_cast <T> (getL4() | c1);
                tmp[3][1] = static_cast <T> (getL4() | c2);
                tmp[3][2] = static_cast <T> (getL4() | c3);
                tmp[3][3] = static_cast <T> (getL4() | c4);
                *this = std::move(tmp);
                return *this;
            }

            template <class T>
            template <class K>
            constexpr Matrix4x4<T>& Matrix4x4<T>::operator /=(K k) {
                data[0] /= k;
                data[1] /= k;
                data[2] /= k;
                data[3] /= k;
                return *this;
            }

            template <class T>
            template <class K>
            constexpr Matrix4x4<T>& Matrix4x4<T>::operator /=(Matrix4x4<K> const& m) {
                Matrix4x4<T> tmp(m);
                tmp.inverse();
                return *this *= tmp;
            }

            template <class T>
            template <class K>
            constexpr Matrix4x4<std::common_type_t<T, K>> Matrix4x4<T>::operator +(Matrix4x4<K> const& m) const {
                return Matrix4x4<std::common_type_t<T, K>>(*this) += m;
            }

            template <class T>
            template <class K>
            constexpr Matrix4x4<std::common_type_t<T, K>> Matrix4x4<T>::operator -(Matrix4x4<K> const& m) const {
                return Matrix4x4<std::common_type_t<T, K>>(*this) -= m;
            }

            template <class T>
            template <class K>
            constexpr Matrix4x4<std::common_type_t<T, K>> Matrix4x4<T>::operator *(K k)  const {
                return Matrix4x4<std::common_type_t<T, K>>(*this) *= k;
            }

            template <class T>
            template <class K>
            constexpr Matrix4x4<std::common_type_t<T, K>> Matrix4x4<T>::operator *(Matrix4x4<K> const& m) const {
                return Matrix4x4<std::common_type_t<T, K>>(*this) *= m;
            }

            template <class T>
            template <class K>
            constexpr Vector4D<K> Matrix4x4<T>::operator *(Vector4D<K> const& u) const {
                return Vector4D<K>(u | getL1(), u | getL2(), u | getL3(), u | getL4());
            }

            template <class T>
            template <class K>
            constexpr Segment4D<K> Matrix4x4<T>::operator *(Segment4D<K> const& s) const {
                return Segment4D<K>(*this * s.getStart(), *this * s.getEnd());
            }

            template <class T>
            constexpr BezierCurve4D Matrix4x4<T>::operator *(BezierCurve4D const& s) const {
                BezierCurve4D tmp(s);
                for (std::size_t i = 0; i < tmp.getSize(); i++) {
                    tmp[i] = *this * tmp[i];
                }
                return tmp;
            }

            template <class T>
            template <class K>
            constexpr Matrix4x4<std::common_type_t<T, K>> Matrix4x4<T>::operator /(K k) const {
                return Matrix4x4<std::common_type_t<T, K>>(*this) /= k;
            }

            template <class T>
            template <class K>
            constexpr Matrix4x4<std::common_type_t<T, K>> Matrix4x4<T>::operator /(Matrix4x4<K> const& m) const {
                return Matrix4x4<std::common_type_t<T, K>>(*this) /= m;
            }

            template <class T>
            template <class K>
            constexpr bool Matrix4x4<T>::operator ==(Matrix4x4<K> const& m) const {
                return getL1() == m.getL1() && getL2() == m.getL2() && getL3() == m.getL3() && getL4() == m.getL4();
            }

            template <class T>
            template <class K>
            constexpr bool Matrix4x4<T>::operator !=(Matrix4x4<K> const& m) const {
                return !(*this == m);
            }
    
            template <class T>
            inline Utility::String Matrix4x4<T>::toString() const {
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
        }
    }
