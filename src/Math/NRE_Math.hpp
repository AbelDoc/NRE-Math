
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

            static constexpr long double EPSILON = 0.000001;    /**< Double precision epsilon for equality test */
            static constexpr long double PI = 3.1461592535897932384626433832795;

            /**
             * Test the equality of 2 objects
             * @param a the first object
             * @param b the second object
             * @return if both objets are equals
             */
            template <class T, class K, typename std::enable_if_t< std::is_floating_point<std::common_type_t<T, K>>::value, int> = 0>
            inline bool equal(T a, K b) {
                return std::abs(static_cast <std::common_type_t<T, K>> (a) - static_cast <std::common_type_t<T, K>> (b)) < EPSILON;
            }
    
            /**
             * Test the equality of 2 objects
             * @param a the first object
             * @param b the second object
             * @return if both objets are equals
             */
            template <class T, class K, typename std::enable_if_t<!std::is_floating_point<std::common_type_t<T, K>>::value, int> = 0>
            inline bool equal(T a, K b) {
                return static_cast <std::common_type_t<T, K>> (a) == static_cast <std::common_type_t<T, K>> (b);
            }
    
            /**
             * Test if 2 objects are almost equals (usefull for floating point objects)
             * @param a the first object
             * @param b the second object
             * @return if both objets are almost equals
             */
            template <class T, class K>
            inline bool almostEqual(T a, K b) {
                return equal(a, b);
            }
        }
    }
