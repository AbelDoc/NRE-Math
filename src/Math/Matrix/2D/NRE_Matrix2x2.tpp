
    /**
    * @file NRE_Matrix2x2.hpp
    * @brief Implementation of Engine's Math's Object : Matrix2x2
    * @author Louis ABEL
    * @date 17/09/2018
    * @copyright GNU GPL v3
    */

   namespace NRE {
       namespace Math {

           template <class T>
           inline Matrix2x2<T>::Matrix2x2() {
               setIdentity();
           }

           template <class T>
           inline Matrix2x2<T>::Matrix2x2(T a, T b,
                                   T c, T d) : data{{a, b}, {c, d}} {
           }

           template <class T>
           inline Matrix2x2<T>::Matrix2x2(T value) : Matrix2x2(value, value, value, value) {
           }

           template <class T>
           inline Matrix2x2<T>::Matrix2x2(Vector2D<T> const& l1, Vector2D<T> const& l2) : data{l1, l2} {
           }

           template <class T>
           template <class K>
           inline Matrix2x2<T>::Matrix2x2(Matrix2x2<K> const& m) : data{static_cast <Vector2D<T>> (m.getL1()), static_cast <Vector2D<T>> (m.getL2())} {
           }

           template <class T>
           inline Vector2D<T> const& Matrix2x2<T>::getL1() const {
               return data[0];
           }

           template <class T>
           inline Vector2D<T> const& Matrix2x2<T>::getL2() const {
               return data[1];
           }

           template <class T>
           inline Vector2D<T> Matrix2x2<T>::getC1() const {
               return Vector2D<T>(data[0][0], data[1][0]);
           }

           template <class T>
           inline Vector2D<T> Matrix2x2<T>::getC2() const {
               return Vector2D<T>(data[0][1], data[1][1]);
           }

           template <class T>
           inline float Matrix2x2<T>::getDeterminant() const {
               return data[0][0] * data[1][1] - data[0][1] * data[1][0];
           }

           template <class T>
           inline void Matrix2x2<T>::setL1(Vector2D<T> const& l1) {
               data[0] = l1;
           }

           template <class T>
           inline void Matrix2x2<T>::setL2(Vector2D<T> const& l2) {
               data[1] = l2;
           }

           template <class T>
           inline void Matrix2x2<T>::setC1(Vector2D<T> const& c1) {
               data[0][0] = c1.getX();
               data[1][0] = c1.getY();
           }

           template <class T>
           inline void Matrix2x2<T>::setC2(Vector2D<T> const& c2) {
               data[0][1] = c2.getX();
               data[1][1] = c2.getY();
           }

           template <class T>
           inline void Matrix2x2<T>::setIdentity() {
               setL1(Vector2D<T>(1, 0));
               setL2(Vector2D<T>(0, 1));
           }

           template <class T>
           inline void Matrix2x2<T>::transpose() {
               Matrix2x2<T> tmp;
               tmp[0][0] = data[0][0];
               tmp[0][1] = data[1][0];
               tmp[1][0] = data[0][1];
               tmp[1][1] = data[1][1];
               *this = std::move(tmp);
           }

           template <class T>
           inline void Matrix2x2<T>::inverse() {
               Matrix2x2<T> tmp;
               float det = getDeterminant();
               if (std::abs(det) > F_EPSILON) {
                   tmp[0][0] = (1.0f / det) * data[1][1];
                   tmp[0][1] = (1.0f / det) * -data[0][1];
                   tmp[1][0] = (1.0f / det) * -data[1][0];
                   tmp[1][1] = (1.0f / det) * data[0][0];
               }

               *this = std::move(tmp);
           }

           template <class T>
           inline void Matrix2x2<T>::translate(T u) {
               setC2(getC1() * u + getC2());
           }

           template <class T>
           inline void Matrix2x2<T>::scale(T u) {
               setC1(getC1() * u);
           }

           template <class T>
           inline const T* Matrix2x2<T>::value() const {
               return data[0].value();
           }

           template <class T>
           inline Vector2D<T>& Matrix2x2<T>::operator [](std::size_t index) {
               return data[index];
           }
           template <class T>
           inline Vector2D<T> const& Matrix2x2<T>::operator [](std::size_t index) const {
               return data[index];
           }

           template <class T>
           inline std::string Matrix2x2<T>::toString() const {
               std::string res("[");
               res += std::to_string(getL1()[0]);
               res += " ";
               res += std::to_string(getL1()[1]);
               res += "]\n[";
               res += std::to_string(getL2()[0]);
               res += " ";
               res += std::to_string(getL2()[1]);
               res += "]";
               return res;
           }

           template <class T>
           inline Matrix2x2<T>& Matrix2x2<T>::operator +=(Matrix2x2 const& m) {
               data[0] += m[0];
               data[1] += m[1];
               return *this;
           }

           template <class T>
           inline Matrix2x2<T>& Matrix2x2<T>::operator -=(Matrix2x2 const& m) {
               data[0] -= m[0];
               data[1] -= m[1];
               return *this;
           }

           template <class T>
           inline Matrix2x2<T>& Matrix2x2<T>::operator *=(T k) {
               data[0] *= k;
               data[1] *= k;
               return *this;
           }

           template <class T>
           inline Matrix2x2<T>& Matrix2x2<T>::operator *=(Matrix2x2 const& m) {
               Matrix2x2<T> tmp(*this);
               tmp[0][0] = getL1() | m.getC1(); tmp[0][1] = getL1() | m.getC2();
               tmp[1][0] = getL2() | m.getC1(); tmp[1][1] = getL2() | m.getC2();
               *this = std::move(tmp);
               return *this;
           }

           template <class T>
           inline Matrix2x2<T>& Matrix2x2<T>::operator /=(T k) {
               data[0] /= k;
               data[1] /= k;
               return *this;
           }

           template <class T>
           inline Matrix2x2<T>& Matrix2x2<T>::operator /=(Matrix2x2 const& m) {
               Matrix2x2<T> tmp(m); tmp.inverse();
               return *this *= tmp;
           }

           template <class T>
           inline Matrix2x2<T> Matrix2x2<T>::operator +(Matrix2x2 const& m) const {
               return Matrix2x2<T>(*this) += m;
           }

           template <class T>
           inline Matrix2x2<T> Matrix2x2<T>::operator -(Matrix2x2 const& m) const {
               return Matrix2x2<T>(*this) -= m;
           }

           template <class T>
           inline Matrix2x2<T> Matrix2x2<T>::operator *(T k)  const {
               return Matrix2x2<T>(*this) *= k;
           }

           template <class T>
           inline Matrix2x2<T> Matrix2x2<T>::operator *(Matrix2x2 const& m) const {
               return Matrix2x2<T>(*this) *= m;
           }

           template <class T>
           inline Vector2D<T> Matrix2x2<T>::operator *(Vector2D<T> const& u) const {
               return Vector2D<T>(u | getL1(), u | getL2());
           }

           template <class T>
           inline Matrix2x2<T> Matrix2x2<T>::operator /(T k) const {
               return Matrix2x2<T>(*this) /= k;
           }

           template <class T>
           inline Matrix2x2<T> Matrix2x2<T>::operator /(Matrix2x2 const& m) const {
               return Matrix2x2<T>(*this) /= m;
           }

           template <class T>
           inline bool Matrix2x2<T>::operator ==(Matrix2x2 const& m) const {
               return getL1() == m.getL1() && getL2() == m.getL2();
           }

           template <class T>
           inline bool Matrix2x2<T>::operator !=(Matrix2x2 const& m) const {
               return !(*this == m);
           }

           template <class T>
           inline std::ostream& operator <<(std::ostream& stream, Matrix2x2<T> const& o) {
               return stream << o.toString();
           }
       }
    }
