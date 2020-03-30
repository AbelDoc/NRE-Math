
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
    
            /**
             * @class ArithmeticChecker
             * @brief Template structure allowing compile-time check on template parameters if they are arithmetic or not
             */
            template <class ...>
            struct ArithmeticChecker : std::true_type {
            };
            /**
             * @class ArithmeticChecker
             * @brief Template structure allowing compile-time check on template parameters if they are arithmetics or not
             */
            template <class T1, class ... Tn>
            struct ArithmeticChecker<T1, Tn...> : std::conjunction<std::conjunction<ArithmeticChecker<Tn...>>, std::is_arithmetic<T1>> {
            };
            /**
             * @class ArithmeticChecker
             * @brief Template structure allowing compile-time check on template parameters if they are arithmetic or not
             */
            template <class T1>
            struct ArithmeticChecker<T1> : std::is_arithmetic<T1> {
            };
            
            template <class ... Tn>
            constexpr bool ArithmeticCheckerV = ArithmeticChecker<Tn...>::value; /**< Shortcut to use ArithmeticChecker internal value */
            
            /**< Allow to enable a function if all given template parameters are arithmetics type */
            template <class ... Tn>
            using UseIfArithmetic = std::enable_if_t<ArithmeticCheckerV<Tn...>>;

            static constexpr long double EPSILON = 0.000001;    /**< Double precision epsilon for equality test */
            static constexpr long double PI = 3.141592653589793238462643383279502884L;

            /**
             * Test the equality of 2 objects
             * @param a the first object
             * @param b the second object
             * @return if both objets are equals
             */
            template <class T, class K, typename std::enable_if_t< std::is_floating_point<std::common_type_t<T, K>>::value, int> = 0>
            constexpr bool equal(T a, K b) {
                return std::abs(static_cast <std::common_type_t<T, K>> (a) - static_cast <std::common_type_t<T, K>> (b)) < EPSILON;
            }
    
            /**
             * Test the equality of 2 objects
             * @param a the first object
             * @param b the second object
             * @return if both objets are equals
             */
            template <class T, class K, typename std::enable_if_t<!std::is_floating_point<std::common_type_t<T, K>>::value, int> = 0>
            constexpr bool equal(T a, K b) {
                return static_cast <std::common_type_t<T, K>> (a) == static_cast <std::common_type_t<T, K>> (b);
            }
            /**
             * Test if 2 objects are almost equals (usefull for floating point objects)
             * @param a the first object
             * @param b the second object
             * @return if both objets are almost equals
             */
            template <class T, class K>
            constexpr bool almostEqual(T a, K b) {
                return equal(a, b);
            }
            /**
             * Perform a linear interpolation
             * @param  a the first value to interpolate
             * @param  b the second value to interpolate
             * @param  f the scale factor
             * @return   the interpolated value
             */
            template <class T, typename = UseIfArithmetic<T>>
            constexpr T lerp(T const& a, T const& b, float const& f) {
                return a * (1.0f - f) + b * f;
            }
        }
    }
