
    /**
     * @file NRE_Vector3D.tpp
     * @brief Implementation of Engine's Math's Object : Vector3D
     * @author Louis ABEL
     * @date 09/09/2018
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace Math {

            template <class T>
            constexpr Vector3D<T>::Vector3D(std::initializer_list<T> list) : Vector3D(*(list.begin()), *(list.begin() + 1), *(list.begin() + 2)) {
                assert(list.size() == 3);
            }

            template <class T>
            constexpr T Vector3D<T>::getX() const {
                return x;
            }

            template <class T>
            constexpr T Vector3D<T>::getY() const {
                return y;
            }

            template <class T>
            constexpr T Vector3D<T>::getZ() const {
                return z;
            }

            template <class T>
            constexpr T Vector3D<T>::getR() const {
                return x;
            }

            template <class T>
            constexpr T Vector3D<T>::getG() const {
                return y;
            }

            template <class T>
            constexpr T Vector3D<T>::getB() const {
                return z;
            }

            template <class T>
            inline long double Vector3D<T>::norm() const {
                return std::sqrt(static_cast <long double> (normSquared()));
            }

            template <class T>
            constexpr T Vector3D<T>::normSquared() const {
                return x * x + y * y + z * z;
            }

            template <class T>
            inline Vector3D<T>& Vector3D<T>::normalize() {
                return *this /= norm();
            }

            template <class T>
            constexpr const T* Vector3D<T>::value() const {
                return &x;
            }

            template <class T>
            constexpr T& Vector3D<T>::operator [](std::size_t index) {
                return *(&x + index);
            }

            template <class T>
            constexpr T const& Vector3D<T>::operator [](std::size_t index) const {
                return *(&x + index);
            }

            template <class T>
            inline Utility::String Vector3D<T>::toString() const {
                Utility::String res;
                res.reserve(15);
                res << '(';
                res << x;
                res << ", ";
                res << y;
                res << ", ";
                res << z;
                res << ')';
                return res;
            }
    
            template <class T>
            inline Vector3D<T> normalize(Vector3D<T> const&u) {
                return Vector3D<T>(u).normalize();
            }
        
        }
    }
