
    /**
     * @file Math/NRE_Math.hpp
     * @brief Implementation of Math's API's function
     * @author Louis ABEL
     * @date 03/04/2019
     * @copyright CC-BY-NC-SA
     */

    #pragma once

    #include <cmath>
    #include <type_traits>

    /**
     * @namespace NRE
     * @brief The NearlyRealEngine's global namespace
     */
    namespace NRE {
        /**
         * @namespace Math
         * @brief Math's API
         */
        namespace Math {

            static const long double EPSILON = 0.000001;    /**< Double precision epsilon for equality test */

            template <class T, class K>
            inline typename std::enable_if_t< std::is_floating_point<std::common_type_t<T, K>>::value, bool> equal(T a, K b) {
                return std::abs(static_cast <std::common_type_t<T, K>> (a) - static_cast <std::common_type_t<T, K>> (b)) < EPSILON;
            }

            template <class T, class K>
            inline typename std::enable_if_t<!std::is_floating_point<std::common_type_t<T, K>>::value, bool> equal(T a, K b) {
                return static_cast <std::common_type_t<T, K>> (a) == static_cast <std::common_type_t<T, K>> (b);
            }

            template <class T, class K>
            inline bool almostEqual(T a, K b) {
                return equal(a, b);
            }
        }
    }
