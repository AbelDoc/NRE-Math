
    /**
     * @file NRE_Vector2D.tpp
     * @brief Implementation of Math's API's Object : Vector2D
     * @author Louis ABEL
     * @date 27/03/2019
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace Math {

            template <class T>
            constexpr Vector2D<T>::Vector2D(std::initializer_list<T> list) : Vector2D(*(list.begin()), *(list.begin() + 1)) {
                assert(list.size() == 2);
            }

            template <class T>
            constexpr T Vector2D<T>::getX() const {
                return x;
            }

            template <class T>
            constexpr T Vector2D<T>::getY() const {
                return y;
            }

            template <class T>
            constexpr T Vector2D<T>::getW() const {
                return x;
            }

            template <class T>
            constexpr T Vector2D<T>::getH() const {
                return y;
            }
    
            template <class T>
            inline long double Vector2D<T>::norm() const {
                return std::sqrt(static_cast <long double> (normSquared()));
            }
    
            template <class T>
            constexpr T Vector2D<T>::normSquared() const {
                return x * x + y * y;
            }
    
            template <class T>
            inline Vector2D<T>& Vector2D<T>::normalize() {
                return *this /= norm();
            }

            template <class T>
            constexpr const T* Vector2D<T>::value() const {
                return &x;
            }

            template <class T>
            constexpr T& Vector2D<T>::operator [](std::size_t index) {
                return *(&x + index);
            }

            template <class T>
            constexpr T const& Vector2D<T>::operator [](std::size_t index) const {
                return *(&x + index);
            }

            template <class T>
            inline Utility::String Vector2D<T>::toString() const {
                Utility::String res;
                res.reserve(10);
                res << '(' << x << ", " << y << ')';
                return res;
            }
            
            template <class T>
            inline Vector2D<T> normalize(Vector2D<T> const&u) {
                return Vector2D<T>(u).normalize();
            }

        }
    }
