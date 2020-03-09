
    /**
     * @file NRE_Vector4D.tpp
     * @brief Implementation of Engine's Math's Object : Vector4D
     * @author Louis ABEL
     * @date 09/09/2018
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace Math {
    
            template <class T>
            constexpr Vector4D<T>::Vector4D(std::initializer_list<T> list) : Vector4D(*(list.begin()), *(list.begin() + 1), *(list.begin() + 2), *(list.begin() + 3)) {
                assert(list.size() == 4);
            }

            template <class T>
            constexpr T Vector4D<T>::getX() const {
                return x;
            }

            template <class T>
            constexpr T Vector4D<T>::getY() const {
                return y;
            }

            template <class T>
            constexpr T Vector4D<T>::getZ() const {
                return z;
            }

            template <class T>
            constexpr T Vector4D<T>::getW() const {
                return w;
            }

            template <class T>
            constexpr T Vector4D<T>::getR() const {
                return x;
            }

            template <class T>
            constexpr T Vector4D<T>::getG() const {
                return y;
            }

            template <class T>
            constexpr T Vector4D<T>::getB() const {
                return z;
            }

            template <class T>
            constexpr T Vector4D<T>::getA() const {
                return w;
            }

            template <class T>
            inline long double Vector4D<T>::norm() const {
                return std::sqrt(static_cast <long double> (normSquared()));
            }

            template <class T>
            constexpr T Vector4D<T>::normSquared() const {
                return x * x + y * y + z * z + w * w;
            }
    
            template <class T>
            inline Vector4D<T>& Vector4D<T>::normalize() {
                return *this /= norm();
            }

            template <class T>
            constexpr const T* Vector4D<T>::value() const {
                return &x;
            }

            template <class T>
            constexpr T& Vector4D<T>::operator [](std::size_t index) {
                return *(&x + index);
            }

            template <class T>
            constexpr T const& Vector4D<T>::operator [](std::size_t index) const {
                return *(&x + index);
            }

            template <class T>
            inline Utility::String Vector4D<T>::toString() const {
                Utility::String res;
                res.reserve(15);
                res << '(';
                res << x;
                res << ", ";
                res << y;
                res << ", ";
                res << z;
                res << ", ";
                res << w;
                res << ')';
                return res;
            }
    
            template <class T>
            inline Vector4D<T> normalize(Vector4D<T> const&u) {
                return Vector4D<T>(u).normalize();
            }
        }
    }
