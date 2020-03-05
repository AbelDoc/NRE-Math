
    /**
     * @file NRE_Matrix3x3.hpp
     * @brief Implementation of Engine's Math's Object : Matrix3x3
     * @author Louis ABEL
     * @date 17/09/2018
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace Math {

            template <class T>
            template <class A, class B, class C,
                      class D, class E, class F,
                      class G, class H, class I>
            constexpr Matrix3x3<T>::Matrix3x3(A a, B b, C c, D d, E e, F f, G g, H h, I i) : data{Vector3D<std::common_type_t<A, B, C>>(a, b, c), Vector3D<std::common_type_t<D, E, F>>(d, e, f), Vector3D<std::common_type_t<G, H, I>>(g, h, i)} {
            }

            template <class T>
            template <class K>
            constexpr Matrix3x3<T>::Matrix3x3(K value) : Matrix3x3(value, value, value, value, value, value, value, value, value) {
            }

            template <class T>
            template <class K, class L, class N>
            constexpr Matrix3x3<T>::Matrix3x3(Vector3D<K> const& l1, Vector3D<L> const& l2, Vector3D<N> const& l3) : data{l1, l2, l3} {
            }

            template <class T>
            template <class K>
            constexpr Matrix3x3<T>::Matrix3x3(Matrix3x3<K> const& m) : data{m.getL1(), m.getL2(), m.getL3()} {
            }

            template <class T>
            template <class K>
            constexpr Matrix3x3<T>::Matrix3x3(Matrix4x4<K> const& m) : data{Vector3D<T>(m.getL1()), Vector3D<T>(m.getL2()), Vector3D<T>(m.getL3())} {
            }

            template <class T>
            constexpr Vector3D<T> const& Matrix3x3<T>::getL1() const {
                return data[0];
            }

            template <class T>
            constexpr Vector3D<T> const& Matrix3x3<T>::getL2() const {
                return data[1];
            }

            template <class T>
            constexpr Vector3D<T> const& Matrix3x3<T>::getL3() const {
                return data[2];
            }

            template <class T>
            constexpr Vector3D<T> Matrix3x3<T>::getC1() const {
                return Vector3D<T>(data[0][0], data[1][0], data[2][0]);
            }

            template <class T>
            constexpr Vector3D<T> Matrix3x3<T>::getC2() const {
                return Vector3D<T>(data[0][1], data[1][1], data[2][1]);
            }

            template <class T>
            constexpr Vector3D<T> Matrix3x3<T>::getC3() const {
                return Vector3D<T>(data[0][2], data[1][2], data[2][2]);
            }

            template <class T>
            constexpr long double Matrix3x3<T>::getDeterminant() const {
                return ((data[0][0] * data[1][1] * data[2][2]) + (data[1][0] * data[2][1] * data[0][2]) + (data[2][0] * data[0][1] * data[1][2])) -
                       ((data[2][0] * data[1][1] * data[0][2]) + (data[0][0] * data[2][1] * data[1][2]) + (data[1][0] * data[0][1] * data[2][2]));
            }

            template <class T>
            template <class K>
            constexpr void Matrix3x3<T>::setL1(Vector3D<K> const& l1) {
                data[0] = l1;
            }

            template <class T>
            template <class K>
            constexpr void Matrix3x3<T>::setL2(Vector3D<K> const& l2) {
                data[1] = l2;
            }

            template <class T>
            template <class K>
            constexpr void Matrix3x3<T>::setL3(Vector3D<K> const& l3) {
                data[2] = l3;
            }

            template <class T>
            template <class K>
            constexpr void Matrix3x3<T>::setC1(Vector3D<K> const& c1) {
                data[0][0] = static_cast <T> (c1.getX());
                data[1][0] = static_cast <T> (c1.getY());
                data[2][0] = static_cast <T> (c1.getZ());
            }

            template <class T>
            template <class K>
            constexpr void Matrix3x3<T>::setC2(Vector3D<K> const& c2) {
                data[0][1] = static_cast <T> (c2.getX());
                data[1][1] = static_cast <T> (c2.getY());
                data[2][1] = static_cast <T> (c2.getZ());
            }

            template <class T>
            template <class K>
            constexpr void Matrix3x3<T>::setC3(Vector3D<K> const& c3) {
                data[0][2] = static_cast <T> (c3.getX());
                data[1][2] = static_cast <T> (c3.getY());
                data[2][2] = static_cast <T> (c3.getZ());
            }

            template <class T>
            constexpr void Matrix3x3<T>::setIdentity() {
                *this = IDENTITY;
            }

            template <class T>
            constexpr void Matrix3x3<T>::transpose() {
                Matrix3x3<T> tmp;
                tmp[0][0] = data[0][0];
                tmp[1][0] = data[0][1];
                tmp[2][0] = data[0][2];
                tmp[0][1] = data[1][0];
                tmp[1][1] = data[1][1];
                tmp[2][1] = data[1][2];
                tmp[0][2] = data[2][0];
                tmp[1][2] = data[2][1];
                tmp[2][2] = data[2][2];
                *this = std::move(tmp);
            }

            template <class T>
            constexpr void Matrix3x3<T>::inverse() {
                Matrix3x3<T> tmp;
                if (auto det = getDeterminant(); std::abs(det) > EPSILON) {
                    long double invDet = 1.0 / det;
                    tmp[0][0] = static_cast <T> (invDet * static_cast <long double> (data[1][1] * data[2][2] - data[1][2] * data[2][1]));
                    tmp[0][1] = static_cast <T> (invDet * static_cast <long double> (data[0][2] * data[2][1] - data[0][1] * data[2][2]));
                    tmp[0][2] = static_cast <T> (invDet * static_cast <long double> (data[0][1] * data[1][2] - data[0][2] * data[1][1]));
                    tmp[1][0] = static_cast <T> (invDet * static_cast <long double> (data[1][2] * data[2][0] - data[1][0] * data[2][2]));
                    tmp[1][1] = static_cast <T> (invDet * static_cast <long double> (data[0][0] * data[2][2] - data[0][2] * data[2][0]));
                    tmp[1][2] = static_cast <T> (invDet * static_cast <long double> (data[0][2] * data[1][0] - data[0][0] * data[1][2]));
                    tmp[2][0] = static_cast <T> (invDet * static_cast <long double> (data[1][0] * data[2][1] - data[1][1] * data[2][0]));
                    tmp[2][1] = static_cast <T> (invDet * static_cast <long double> (data[0][1] * data[2][0] - data[0][0] * data[2][1]));
                    tmp[2][2] = static_cast <T> (invDet * static_cast <long double> (data[0][0] * data[1][1] - data[0][1] * data[1][0]));
                }

                *this = std::move(tmp);
            }

            template <class T>
            template <class K>
            constexpr inline void Matrix3x3<T>::translate(Vector2D<K> const& u) {
                Matrix3x3<T> tmp = IDENTITY;
                tmp[0][2] = static_cast <T> (u.getX());
                tmp[1][2] = static_cast <T> (u.getY());
                *this *= tmp;
            }

            template <class T>
            template <class K>
            constexpr void Matrix3x3<T>::scale(Vector2D<K> const& u) {
                Matrix3x3<T> tmp = IDENTITY;
                tmp[0][0] = static_cast <T> (u.getX());
                tmp[1][1] = static_cast <T> (u.getY());
                *this *= tmp;
            }

            template <class T>
            template <class K>
            constexpr void Matrix3x3<T>::stretchX(K u) {
                Matrix3x3<T> tmp = IDENTITY;
                tmp[0][0] = static_cast <T> (u);
                *this *= tmp;
            }

            template <class T>
            template <class K>
            constexpr void Matrix3x3<T>::stretchY(K u) {
                Matrix3x3<T> tmp = IDENTITY;
                tmp[1][1] = static_cast <T> (u);
                *this *= tmp;
            }

            template <class T>
            template <class K>
            constexpr void Matrix3x3<T>::squeezeX(K u) {
                Matrix3x3<T> tmp = IDENTITY;
                tmp[0][0] = static_cast <T> (1.0 / static_cast <long double> (u));
                tmp[1][1] = static_cast <T> (u);
                *this *= tmp;
            }

            template <class T>
            template <class K>
            constexpr void Matrix3x3<T>::squeezeY(K u) {
                Matrix3x3<T> tmp = IDENTITY;
                tmp[0][0] = static_cast <T> (u);
                tmp[1][1] = static_cast <T> (1.0 / static_cast <long double> (u));
                *this *= tmp;
            }

            template <class T>
            template <class K>
            constexpr void Matrix3x3<T>::shearX(K u) {
                Matrix3x3<T> tmp = IDENTITY;
                tmp[0][1] = static_cast <T> (u);
                *this *= tmp;
            }

            template <class T>
            template <class K>
            constexpr void Matrix3x3<T>::shearY(K u) {
                Matrix3x3<T> tmp = IDENTITY;
                tmp[1][0] = static_cast <T> (u);
                *this *= tmp;
            }

            template <class T>
            constexpr void Matrix3x3<T>::rotate(Angle angle) {
                Matrix3x3<T> tmp = IDENTITY;
                T c = static_cast <T> (cos(angle));
                T s = static_cast <T> (sin(angle));
                tmp[0][0] = c;
                tmp[0][1] = s;
                tmp[1][0] = -s;
                tmp[1][1] = c;
                *this *= tmp;
            }

            template <class T>
            constexpr const T* Matrix3x3<T>::value() const {
                return data[0].value();
            }

            template <class T>
            constexpr Vector3D<T>& Matrix3x3<T>::operator [](std::size_t index) {
                return data[index];
            }

            template <class T>
            constexpr Vector3D<T> const& Matrix3x3<T>::operator [](std::size_t index) const {
                return data[index];
            }
            
            template <class T>
            template <class K>
            constexpr Matrix3x3<T>& Matrix3x3<T>::operator=(Matrix3x3<K> const& m) {
                setL1(m.getL1());
                setL2(m.getL2());
                setL3(m.getL3());
                return *this;
            }
    
            template <class T>
            template <class K>
            constexpr Matrix3x3<T>& Matrix3x3<T>::operator=(Matrix3x3<K> && m) {
                setL1(m.getL1());
                setL2(m.getL2());
                setL3(m.getL3());
                return *this;
            }

            template <class T>
            template <class K>
            constexpr Matrix3x3<T>& Matrix3x3<T>::operator +=(Matrix3x3<K> const& m) {
                data[0] += m[0];
                data[1] += m[1];
                data[2] += m[2];
                return *this;
            }

            template <class T>
            template <class K>
            constexpr Matrix3x3<T>& Matrix3x3<T>::operator -=(Matrix3x3<K> const& m) {
                data[0] -= m[0];
                data[1] -= m[1];
                data[2] -= m[2];
                return *this;
            }

            template <class T>
            template <class K>
            constexpr Matrix3x3<T>& Matrix3x3<T>::operator *=(K k) {
                data[0] *= k;
                data[1] *= k;
                data[2] *= k;
                return *this;
            }

            template <class T>
            template <class K>
            constexpr Matrix3x3<T>& Matrix3x3<T>::operator *=(Matrix3x3<K> const& m) {
                Matrix3x3<T> tmp(*this);
                auto c1 = m.getC1();
                auto c2 = m.getC2();
                auto c3 = m.getC3();
                
                
                tmp[0][0] = static_cast <T> (getL1() | c1);
                tmp[0][1] = static_cast <T> (getL1() | c2);
                tmp[0][2] = static_cast <T> (getL1() | c3);
                
                tmp[1][0] = static_cast <T> (getL2() | c1);
                tmp[1][1] = static_cast <T> (getL2() | c2);
                tmp[1][2] = static_cast <T> (getL2() | c3);
                
                tmp[2][0] = static_cast <T> (getL3() | c1);
                tmp[2][1] = static_cast <T> (getL3() | c2);
                tmp[2][2] = static_cast <T> (getL3() | c3);
                *this = std::move(tmp);
                return *this;
            }

            template <class T>
            template <class K>
            constexpr Matrix3x3<T>& Matrix3x3<T>::operator /=(K k) {
                data[0] /= k;
                data[1] /= k;
                data[2] /= k;
                return *this;
            }

            template <class T>
            template <class K>
            constexpr Matrix3x3<T>& Matrix3x3<T>::operator /=(Matrix3x3<K> const& m) {
                Matrix3x3<K> tmp(m);
                tmp.inverse();
                return *this *= tmp;
            }

            template <class T>
            template <class K>
            constexpr Matrix3x3<std::common_type_t<T, K>> Matrix3x3<T>::operator +(Matrix3x3<K> const& m) const {
                return Matrix3x3<std::common_type_t<T, K>>(*this) += m;
            }

            template <class T>
            template <class K>
            constexpr Matrix3x3<std::common_type_t<T, K>> Matrix3x3<T>::operator -(Matrix3x3<K> const& m) const {
                return Matrix3x3<std::common_type_t<T, K>>(*this) -= m;
            }

            template <class T>
            template <class K>
            constexpr Matrix3x3<std::common_type_t<T, K>> Matrix3x3<T>::operator *(K k)  const {
                return Matrix3x3<std::common_type_t<T, K>>(*this) *= k;
            }

            template <class T>
            template <class K>
            constexpr Matrix3x3<std::common_type_t<T, K>> Matrix3x3<T>::operator *(Matrix3x3<K> const& m) const {
                return Matrix3x3<std::common_type_t<T, K>>(*this) *= m;
            }

            template <class T>
            template <class K>
            constexpr Vector3D<K> Matrix3x3<T>::operator *(Vector3D<K> const& u) const {
                return Vector3D<K>(u | getL1(), u | getL2(), u | getL3());
            }

            template <class T>
            template <class K>
            constexpr Segment3D<K> Matrix3x3<T>::operator *(Segment3D<K> const& s) const {
                return Segment3D<K>(*this * s.getStart(), *this * s.getEnd());
            }

            template <class T>
            constexpr BezierCurve3D Matrix3x3<T>::operator *(BezierCurve3D const& s) const {
                BezierCurve3D tmp(s);
                for (std::size_t i = 0; i < tmp.getSize(); i++) {
                    tmp[i] = *this * tmp[i];
                }
                return tmp;
            }

            template <class T>
            template <class K>
            constexpr Matrix3x3<std::common_type_t<T, K>> Matrix3x3<T>::operator /(K k) const {
                return Matrix3x3<std::common_type_t<T, K>>(*this) /= k;
            }

            template <class T>
            template <class K>
            constexpr Matrix3x3<std::common_type_t<T, K>> Matrix3x3<T>::operator /(Matrix3x3<K> const& m) const {
                return Matrix3x3<std::common_type_t<T, K>>(*this) /= m;
            }

            template <class T>
            template <class K>
            constexpr bool Matrix3x3<T>::operator ==(Matrix3x3<K> const& m) const {
                return getL1() == m.getL1() && getL2() == m.getL2() && getL3() == m.getL3();
            }

            template <class T>
            template <class K>
            constexpr bool Matrix3x3<T>::operator !=(Matrix3x3<K> const& m) const {
                return !(*this == m);
            }
    
            template <class T>
            inline Utility::String Matrix3x3<T>::toString() const {
                Utility::String res("[");
                res.reserve(100);
                res << getL1()[0];
                res << ' ';
                res << getL1()[1];
                res << ' ';
                res << getL1()[2];
                res << "]\n[";
                res << getL2()[0];
                res << ' ';
                res << getL2()[1];
                res << ' ';
                res << getL2()[2];
                res << "]\n[";
                res << getL3()[0];
                res << ' ';
                res << getL3()[1];
                res << ' ';
                res << getL3()[2];
                res << "]";
                return res;
            }
        }
    }
