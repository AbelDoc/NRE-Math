
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
            inline Matrix3x3<T>::Matrix3x3() {
                setIdentity();
            }

            template <class T>
            inline Matrix3x3<T>::Matrix3x3(T a, T b, T c,
                                           T d, T e, T f,
                                           T g, T h, T i) : data{{a, b, c}, {d, e, f}, {g, h, i}} {
            }

            template <class T>
            inline Matrix3x3<T>::Matrix3x3(T value) : Matrix3x3(value, value, value, value, value, value, value, value, value) {
            }

            template <class T>
            inline Matrix3x3<T>::Matrix3x3(Vector3D<T> const& l1, Vector3D<T> const& l2, Vector3D<T> const& l3) : data{l1, l2, l3} {
            }

            template <class T>
            template <class K>
            inline Matrix3x3<T>::Matrix3x3(Matrix3x3<K> const& m) : data{static_cast <Vector3D<T>> (m.getL1()), static_cast <Vector3D<T>> (m.getL2()), static_cast <Vector3D<T>> (m.getL3())} {
            }

            template <class T>
            template <class K>
            inline Matrix3x3<T>::Matrix3x3(Matrix4x4<K> const& m) : data{Vector3D<T>(m.getL1()), Vector3D<T>(m.getL2()), Vector3D<T>(m.getL3())} {
            }

            template <class T>
            inline Vector3D<T> const& Matrix3x3<T>::getL1() const {
                return data[0];
            }

            template <class T>
            inline Vector3D<T> const& Matrix3x3<T>::getL2() const {
                return data[1];
            }

            template <class T>
            inline Vector3D<T> const& Matrix3x3<T>::getL3() const {
                return data[2];
            }

            template <class T>
            inline Vector3D<T> Matrix3x3<T>::getC1() const {
                return Vector3D<T>(data[0][0], data[1][0], data[2][0]);
            }

            template <class T>
            inline Vector3D<T> Matrix3x3<T>::getC2() const {
                return Vector3D<T>(data[0][1], data[1][1], data[2][1]);
            }

            template <class T>
            inline Vector3D<T> Matrix3x3<T>::getC3() const {
                return Vector3D<T>(data[0][2], data[1][2], data[2][2]);
            }

            template <class T>
            inline float Matrix3x3<T>::getDeterminant() const {
                return ((data[0][0] * data[1][1] * data[2][2]) + (data[1][0] * data[2][1] * data[0][2]) + (data[2][0] * data[0][1] * data[1][2])) -
                       ((data[2][0] * data[1][1] * data[0][2]) + (data[0][0] * data[2][1] * data[1][2]) + (data[1][0] * data[0][1] * data[2][2]));
            }

            template <class T>
            inline void Matrix3x3<T>::setL1(Vector3D<T> const& l1) {
                data[0] = l1;
            }

            template <class T>
            inline void Matrix3x3<T>::setL2(Vector3D<T> const& l2) {
                data[1] = l2;
            }

            template <class T>
            inline void Matrix3x3<T>::setL3(Vector3D<T> const& l3) {
                data[2] = l3;
            }

            template <class T>
            inline void Matrix3x3<T>::setC1(Vector3D<T> const& c1) {
                data[0][0] = c1.getX();
                data[1][0] = c1.getY();
                data[2][0] = c1.getZ();
            }

            template <class T>
            inline void Matrix3x3<T>::setC2(Vector3D<T> const& c2) {
                data[0][1] = c2.getX();
                data[1][1] = c2.getY();
                data[2][1] = c2.getZ();
            }

            template <class T>
            inline void Matrix3x3<T>::setC3(Vector3D<T> const& c3) {
                data[0][2] = c3.getX();
                data[1][2] = c3.getY();
                data[2][2] = c3.getZ();
            }

            template <class T>
            inline void Matrix3x3<T>::setIdentity() {
                setL1(Vector3D<T>(1, 0, 0));
                setL2(Vector3D<T>(0, 1, 0));
                setL3(Vector3D<T>(0, 0, 1));
            }

            template <class T>
            void Matrix3x3<T>::transpose() {
                Matrix3x3<T> tmp;
                tmp[0][0] = data[0][0];
                tmp[0][1] = data[1][0];
                tmp[0][2] = data[2][0];
                tmp[1][0] = data[0][1];
                tmp[1][1] = data[1][1];
                tmp[1][2] = data[2][1];
                tmp[2][0] = data[0][2];
                tmp[2][1] = data[1][2];
                tmp[2][2] = data[2][2];
                *this = std::move(tmp);
            }

            template <class T>
            void Matrix3x3<T>::inverse() {
                Matrix3x3<T> tmp;
                float det = getDeterminant();
                if (std::abs(det) > F_EPSILON) {
                    tmp[0][0] = (1.0f / det) * (data[1][1] * data[2][2] - data[1][2] * data[2][1]);
                    tmp[0][1] = (1.0f / det) * (data[0][2] * data[2][1] - data[0][1] * data[2][2]);
                    tmp[0][2] = (1.0f / det) * (data[0][1] * data[1][2] - data[0][2] * data[1][1]);
                    tmp[1][0] = (1.0f / det) * (data[1][2] * data[2][0] - data[1][0] * data[2][2]);
                    tmp[1][1] = (1.0f / det) * (data[0][0] * data[2][2] - data[0][2] * data[2][0]);
                    tmp[1][2] = (1.0f / det) * (data[0][2] * data[1][0] - data[0][0] * data[1][2]);
                    tmp[2][0] = (1.0f / det) * (data[1][0] * data[2][1] - data[1][1] * data[2][0]);
                    tmp[2][1] = (1.0f / det) * (data[0][1] * data[2][0] - data[0][0] * data[2][1]);
                    tmp[2][2] = (1.0f / det) * (data[0][0] * data[1][1] - data[0][1] * data[1][0]);
                }

                *this = std::move(tmp);
            }

            template <class T>
            inline void Matrix3x3<T>::translate(Vector2D<T> const& u) {
                Matrix3x3<T> tmp;
                tmp[0][2] = u.getX();
                tmp[1][2] = u.getY();
                *this *= tmp;
            }

            template <class T>
            inline void Matrix3x3<T>::scale(Vector2D<T> const& u) {
                Matrix3x3<T> tmp;
                tmp[0][0] = u.getX();
                tmp[1][1] = u.getY();
                *this *= tmp;
            }

            template <class T>
            inline void Matrix3x3<T>::stretchX(T u) {
                Matrix3x3<T> tmp;
                tmp[0][0] = u;
                *this *= tmp;
            }

            template <class T>
            inline void Matrix3x3<T>::stretchY(T u) {
                Matrix3x3<T> tmp;
                tmp[1][1] = u;
                *this *= tmp;
            }

            template <class T>
            inline void Matrix3x3<T>::squeezeX(Vector2D<T> const& u) {
                Matrix3x3<T> tmp;
                tmp[0][0] = 1.0f / u.getX();
                tmp[1][1] = u.getY();
                *this *= tmp;
            }

            template <class T>
            inline void Matrix3x3<T>::squeezeY(Vector2D<T> const& u) {
                Matrix3x3<T> tmp;
                tmp[0][0] = u.getX();
                tmp[1][1] = 1.0f / u.getY();
                *this *= tmp;
            }

            template <class T>
            inline void Matrix3x3<T>::shearX(T u) {
                Matrix3x3<T> tmp;
                tmp[0][1] = u;
                *this *= tmp;
            }

            template <class T>
            inline void Matrix3x3<T>::shearY(T u) {
                Matrix3x3<T> tmp;
                tmp[1][0] = u;
                *this *= tmp;
            }

            template <class T>
            inline void Matrix3x3<T>::rotate(Angle const& angle) {
                Matrix3x3<T> tmp;
                T c = static_cast <T> (cos(angle));
                T s = static_cast <T> (sin(angle));
                tmp[0][0] = c;
                tmp[0][1] = -s;
                tmp[1][0] = s;
                tmp[1][1] = c;
                *this *= tmp;
            }

            template <class T>
            inline const T* Matrix3x3<T>::value() const {
                return data[0].value();
            }

            template <class T>
            inline Vector3D<T>& Matrix3x3<T>::operator [](std::size_t index) {
                return data[index];
            }

            template <class T>
            inline Vector3D<T> const& Matrix3x3<T>::operator [](std::size_t index) const {
                return data[index];
            }

            template <class T>
            inline std::string Matrix3x3<T>::toString() const {
                std::string res("[");
                res += std::to_string(getL1()[0]);
                res += " ";
                res += std::to_string(getL1()[1]);
                res += " ";
                res += std::to_string(getL1()[2]);
                res += "]\n[";
                res += std::to_string(getL2()[0]);
                res += " ";
                res += std::to_string(getL2()[1]);
                res += " ";
                res += std::to_string(getL2()[2]);
                res += "]\n[";
                res += std::to_string(getL3()[0]);
                res += " ";
                res += std::to_string(getL3()[1]);
                res += " ";
                res += std::to_string(getL3()[2]);
                res += "]";
                return res;
            }

            template <class T>
            inline Matrix3x3<T>& Matrix3x3<T>::operator +=(Matrix3x3 const& m) {
                data[0] += m[0];
                data[1] += m[1];
                data[2] += m[2];
                return *this;
            }

            template <class T>
            inline Matrix3x3<T>& Matrix3x3<T>::operator -=(Matrix3x3 const& m) {
                data[0] -= m[0];
                data[1] -= m[1];
                data[2] -= m[2];
                return *this;
            }

            template <class T>
            inline Matrix3x3<T>& Matrix3x3<T>::operator *=(T k) {
                data[0] *= k;
                data[1] *= k;
                data[2] *= k;
                return *this;
            }

            template <class T>
            inline Matrix3x3<T>& Matrix3x3<T>::operator *=(Matrix3x3 const& m) {
                Matrix3x3<T> tmp(*this);
                tmp[0][0] = getL1() | m.getC1(); tmp[0][1] = getL1() | m.getC2(); tmp[0][2] = getL1() | m.getC3();
                tmp[1][0] = getL2() | m.getC1(); tmp[1][1] = getL2() | m.getC2(); tmp[1][2] = getL2() | m.getC3();
                tmp[2][0] = getL3() | m.getC1(); tmp[2][1] = getL3() | m.getC2(); tmp[2][2] = getL3() | m.getC3();
                *this = std::move(tmp);
                return *this;
            }

            template <class T>
            inline Matrix3x3<T>& Matrix3x3<T>::operator /=(T k) {
                data[0] /= k;
                data[1] /= k;
                data[2] /= k;
                return *this;
            }

            template <class T>
            inline Matrix3x3<T>& Matrix3x3<T>::operator /=(Matrix3x3 const& m) {
                Matrix3x3<T> tmp(m); tmp.inverse();
                return *this *= tmp;
            }

            template <class T>
            inline Matrix3x3<T> Matrix3x3<T>::operator +(Matrix3x3 const& m) const {
                return Matrix3x3<T>(*this) += m;
            }

            template <class T>
            inline Matrix3x3<T> Matrix3x3<T>::operator -(Matrix3x3<T> const& m) const {
                return Matrix3x3<T>(*this) -= m;
            }

            template <class T>
            inline Matrix3x3<T> Matrix3x3<T>::operator *(T k)  const {
                return Matrix3x3<T>(*this) *= k;
            }

            template <class T>
            inline Matrix3x3<T> Matrix3x3<T>::operator *(Matrix3x3 const& m) const {
                return Matrix3x3<T>(*this) *= m;
            }

            template <class T>
            inline Vector3D<T> Matrix3x3<T>::operator *(Vector3D<T> const& u) const {
                return Vector3D<T>(u | getL1(), u | getL2(), u | getL3());
            }

            template <class T>
            inline Matrix3x3<T> Matrix3x3<T>::operator /(T k) const {
                return Matrix3x3<T>(*this) /= k;
            }

            template <class T>
            inline Matrix3x3<T> Matrix3x3<T>::operator /(Matrix3x3 const& m) const {
                return Matrix3x3<T>(*this) /= m;
            }

            template <class T>
            inline bool Matrix3x3<T>::operator ==(Matrix3x3 const& m) const {
                return getL1() == m.getL1() && getL2() == m.getL2() && getL3() == m.getL3();
            }

            template <class T>
            inline bool Matrix3x3<T>::operator !=(Matrix3x3 const& m) const {
                return !(*this == m);
            }

            template <class T>
            std::ostream& operator <<(std::ostream& stream, Matrix3x3<T> const& o) {
                return stream << o.toString();
            }
        }
    }
