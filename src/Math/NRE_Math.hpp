
    /**
     * @file Math/NRE_Math.hpp
     * @brief Implementation of Math's API's function
     * @author Louis ABEL
     * @date 08/09/2018
     * @copyright CC-BY-NC-SA
     */

    #pragma once

    #include <cmath>

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

            static const float  F_EPSILON = 0.00001f;   /**< Single precision epsilon for equality test */
            static const double D_EPSILON = 0.00001;    /**< Double precision epsilon for equality test */

            /**
             * Perform an almost equal test on 2 floating value
             * @param  a the first value
             * @param  b the second value
             * @return   the test result
             */
            inline bool almostEqual(float a, float b) {
                return std::abs(a - b) < F_EPSILON;
            }

            /**
             * Perform an almost equal test on 2 double value
             * @param  a the first value
             * @param  b the second value
             * @return   the test result
             */
            inline bool almostEqual(double a, double b) {
                return std::abs(a - b) < D_EPSILON;
            }
        }
    }
