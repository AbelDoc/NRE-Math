
    /**
     * @file NRE_Unit.hpp
     * @brief Implementation of Math's API's unit system
     * @author Louis ABEL
     * @date 08/09/2018
     * @copyright CC-BY-NC-SA
     */

     #pragma once

     #include <iostream>
     #include <ratio>

     #include <Utility/String/NRE_String.hpp>

     #include "NRE_Math.hpp"

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
             * @class Unit
             * @brief Used to define clear physical unit
             */
            template <class M, class L, class T, class A>
            class Unit {
                private:    //Fields
                    double value;    /**< Internal unit value */

                public:    // Methods
                    //## Constructor ##//
                        /**
                         * Default constructor
                         */
                        constexpr Unit() : value(0.0) {
                        }
                        /**
                         * Construct a unit from a value
                         * @param  val the base value
                         */
                        constexpr Unit(double val) : value(val) {
                        }
                        /**
                         * Construct a unit from a value
                         * @param  val the base value
                         */
                        constexpr Unit(long double val) : value(static_cast <double> (val)) {
                        }

                    //## Getter ##//
                        /**
                         * Value getter
                         * @return the internal value
                         */
                        constexpr double getValue() const {
                            return value;
                        }

                    //## Methods ##//
                        /**
                         * Compute the square root from the current unit
                         * @return the computed value
                         */
                        constexpr Unit<std::ratio_divide<M, std::ratio<2>>, std::ratio_divide<L, std::ratio<2>>, std::ratio_divide<T, std::ratio<2>>, std::ratio_divide<A, std::ratio<2>>>
                        sqrt() {
                            return Unit<std::ratio_divide<M, std::ratio<2>>, std::ratio_divide<L, std::ratio<2>>, std::ratio_divide<T, std::ratio<2>>, std::ratio_divide<A, std::ratio<2>>>(value);
                        }

                    //## Shortcut Operator ##//
                        /**
                         * Add a unit to this
                         * @param u the unit to add
                         * @return a reference to himself
                         */
                        constexpr Unit const& operator+=(Unit const& u) {
                            value += u.value;
                            return *this;
                        }
                        /**
                         * Subtract a unit to this
                         * @param u the unit to subtract
                         * @return a reference to himself
                         */
                        constexpr Unit const& operator-=(Unit const& u) {
                            value -= u.value;
                            return *this;
                        }
                        /**
                         * Compute the opposite unit
                         * @return the new unit with opposite value
                         */
                        constexpr Unit operator-() const {
                            return Unit(-value);
                        }

                    //## Arithmetic Operator ##//
                        /**
                         * Compute the unit resulting in the addition of a unit to this
                         * @param u the unit to add
                         * @return  the resulting unit
                         */
                        constexpr Unit operator+(Unit const& u) const {
                            return Unit(*this) += u;
                        }
                        /**
                         * Compute the unit resulting in the subtraction of a unit to this
                         * @param u the unit to add
                         * @return  the resulting unit
                         */
                        constexpr Unit operator-(Unit const& u) const {
                            return Unit(*this) -= u;
                        }

                    //## Comparison Operator ##//
                        /**
                         * Equality test between this and u
                         * @param u the unit to test with u
                         * @return the test's value
                         */
                        constexpr bool operator==(Unit const& u) const {
                            return Math::almostEqual(value, u.value);
                        }
                        /**
                         * Difference test between this and u
                         * @param u the unit to test with u
                         * @return the test's value
                         */
                        constexpr bool operator!=(Unit const& u) const {
                            return !(*this == u);
                        }
                        /**
                         * Superior or Equal test between this and u
                         * @param u the unit to test with u
                         * @return the test's value
                         */
                        constexpr bool operator<=(Unit const& u) const {
                            return value <= u.value;
                        }
                        /**
                         * Inferior or Equal test between this and u
                         * @param u the unit to test with u
                         * @return the test's value
                         */
                        constexpr bool operator>=(Unit const& u) const {
                            return value >= u.value;
                        }
                        /**
                         * Inferior test between this and u
                         * @param u the unit to test with u
                         * @return the test's value
                         */
                        constexpr bool operator<(Unit const& u) const {
                            return value < u.value;
                        }
                        /**
                         * Superior test between this and u
                         * @param u the unit to test with u
                         * @return the test's value
                         */
                        constexpr bool operator>(Unit const& u) const {
                            return value > u.value;
                        }
                        /**
                         * Convert the unit into a string
                         * @return the converted unit
                         */
                        Utility::String toString() const {
                            Utility::String res;
                            res << value;
                            return res;
                        }
            };

            /**
             * Output stream operator for the object
             * @param  stream the stream to add the object's string representation
             * @param  o      the object to add in the stream
             * @return the    modified stream
             */
            template <class M, class L, class T, class A>
            std::ostream& operator <<(std::ostream& stream, Unit<M, L, T, A> const& o) {
                return stream << o.toString();
            }

            /**
             * Compute the unit resulting in the division of u1 by u2
             * @param  u1 the first unit
             * @param  u2 the second unit
             * @return    the computed unit
             */
            template <class M,  class L,  class T,  class A,
                      class M2, class L2, class T2, class A2>
            constexpr Unit<std::ratio_subtract<M, M2>, std::ratio_subtract<L, L2>, std::ratio_subtract<T, T2>, std::ratio_subtract<A, A2>> operator/(Unit<M, L, T, A> const& u1, Unit<M2, L2, T2, A2> const& u2) {
                return Unit<std::ratio_subtract<M, M2>, std::ratio_subtract<L, L2>, std::ratio_subtract<T, T2>, std::ratio_subtract<A, A2>>(u1.getValue() / u2.getValue());
            }

            /**
             * Compute the unit resulting in the division of x by u
             * @param  x the value to divide with u
             * @param  u the unit
             * @return   the computed unit
             */
            template <class M, class L, class T, class A>
            constexpr Unit<std::ratio_subtract<std::ratio<0>, M>, std::ratio_subtract<std::ratio<0>, L>, std::ratio_subtract<std::ratio<0>, T>, std::ratio_subtract<std::ratio<0>, A>> operator/(long double x, Unit<M, L, T, A> const& u) {
                return Unit<std::ratio_subtract<std::ratio<0>, M>, std::ratio_subtract<std::ratio<0>, L>, std::ratio_subtract<std::ratio<0>, T>, std::ratio_subtract<std::ratio<0>, A>>(x / u.getValue());
            }

            /**
             * Compute the unit resulting in the division of u by x
             * @param  u the unit to be divided
             * @param  x the value
             * @return   the computed unit
             */
            template <class M, class L, class T, class A>
            constexpr Unit<M, L, T, A> operator/(Unit<M, L, T, A> const& u, long double x) {
                return Unit<M, L, T, A>(u.getValue() / x);
            }

            /**
             * Compute the unit resulting in the multiplication of u1 by u2
             * @param  u1 the first unit
             * @param  u2 the second unit
             * @return    the computed unit
             */
            template <class M,  class L,  class T,  class A,
                      class M2, class L2, class T2, class A2>
            constexpr Unit<std::ratio_add<M, M2>, std::ratio_add<L, L2>, std::ratio_add<T, T2>, std::ratio_add<A, A2>> operator*(Unit<M, L, T, A> const& u1, Unit<M2, L2, T2, A2> const& u2) {
                return Unit<std::ratio_add<M, M2>, std::ratio_add<L, L2>, std::ratio_add<T, T2>, std::ratio_add<A, A2>>(u1.getValue() * u2.getValue());
            }

            /**
             * Compute the unit resulting in the multiplication of x by u
             * @param  x the value to multiply with u
             * @param  u the unit
             * @return   the computed unit
             */
            template <class M, class L, class T, class A>
            constexpr Unit<M, L, T, A> operator*(long double x, Unit<M, L, T, A> const& u) {
                return Unit<M, L, T, A>(x * u.getValue());
            }

            /**
             * Compute the unit resulting in the multiplication of u by x
             * @param  u the unit
             * @param  x the value to multiply with u
             * @return   the computed unit
             */
            template <class M, class L, class T, class A>
            constexpr Unit<M, L, T, A> operator*(Unit<M, L, T, A> const& u, long double x) {
                return Unit<M, L, T, A>(u.getValue() * x);
            }

            /**< Used to create a new standard unit */
            #define TYPEDEF_UNIT(M, L, T, A, name) typedef Unit<std::ratio<M>, std::ratio<L>, std::ratio<T>, std::ratio<A>> name

            /**< Mass unit */
            TYPEDEF_UNIT(1,  0,  0, 0, UMass);
            /**< Length unit */
            TYPEDEF_UNIT(0,  1,  0, 0, ULength);
            /**< Area unit */
            TYPEDEF_UNIT(0,  2,  0, 0, UArea);
            /**< Volume unit */
            TYPEDEF_UNIT(0,  3,  0, 0, UVolume);
            /**< Time unit */
            TYPEDEF_UNIT(0,  0,  1, 0, UTime);
            /**< Speed unit */
            TYPEDEF_UNIT(0,  1, -1, 0, USpeed);
            /**< Acceleration unit */
            TYPEDEF_UNIT(0,  1, -2, 0, UAcceleration);
            /**< Frequency unit */
            TYPEDEF_UNIT(0,  0, -1, 0, UFrequency);
            /**< Force unit */
            TYPEDEF_UNIT(1,  1, -2, 0, UForce);
            /**< Pressure unit */
            TYPEDEF_UNIT(1, -1, -2, 0, UPressure);
            /**< Angle unit */
            TYPEDEF_UNIT(0,  0,  0, 1, Angle);

            constexpr UMass kilogramme(1.0);                                    /**< Standard SI unit */
            constexpr UMass gramme   = 0.001 * kilogramme;                      /**< A thousandth of kilogramme */
            constexpr UMass tonne    = 1000 * kilogramme;                       /**< One thousand of kilogramme */

            constexpr ULength metre(1.0);                                       /**< Standard SI unit */
            constexpr ULength decimetre  = metre / 10;                          /**< A tenth of metre */
            constexpr ULength centimetre = metre / 100;                         /**< A hundredth of metre */
            constexpr ULength millimetre = metre / 1000;                        /**< A thousandth of metre */
            constexpr ULength kilometre  = 1000 * metre;                        /**< One thousand of metre */

            constexpr UArea metre2      = metre * metre;                        /**< One by One metre square */
            constexpr UArea decimetre2  = decimetre * decimetre;                /**< One by One decimetre square */
            constexpr UArea centimetre2 = centimetre * centimetre;              /**< One by One centimetre square */
            constexpr UArea millimetre2 = millimetre * millimetre;              /**< One by One millimetre square */
            constexpr UArea kilometre2  = kilometre * kilometre;                /**< One by One kilometre square */

            constexpr UVolume metre3      = metre2 * metre;                     /**< One by One by One metre cube */
            constexpr UVolume decimetre3  = decimetre2 * decimetre;             /**< One by One by One decimetre cube */
            constexpr UVolume centimetre3 = centimetre2 * centimetre;           /**< One by One by One centimetre cube */
            constexpr UVolume millimetre3 = millimetre2 * millimetre;           /**< One by One by One millimetre cube */
            constexpr UVolume kilometre3  = kilometre2 * kilometre;             /**< One by One by One kilometre cube */
            constexpr UVolume litre       = decimetre3;                         /**< One by One by One decimetre cube */

            constexpr UTime second(1.0);                                        /**< Standard SI unit */
            constexpr UTime minute   = 60 * second;                             /**< Sixty seconds */
            constexpr UTime hour     = 60 * minute;                             /**< Sixty minutes */
            constexpr UTime day      = 24 * hour;                               /**< Twenty four hours */

            constexpr UFrequency Hz(1.0);                                       /**< Standard SI unit */

            constexpr UAcceleration G = 9.80665 * metre / (second * second);    /**< Standard Gravity value */
            constexpr UForce newton(1.0);                                       /**< Standard SI unit */
            constexpr UPressure pascal(1.0);                                    /**< Standard SI unit */

            /**
             * Litteral operator for millimetre
             * @param x the value to convert
             * @return the corresponding length
             */
            constexpr ULength operator"" _mm(long double x) { return static_cast <double> (x) * millimetre; }
            /**
             * Litteral operator for centimetre
             * @param x the value to convert
             * @return the corresponding length
             */
            constexpr ULength operator"" _cm(long double x) { return static_cast <double> (x) * centimetre; }
            /**
             * Litteral operator for metre
             * @param x the value to convert
             * @return the corresponding length
             */
            constexpr ULength operator""  _m(long double x) { return static_cast <double> (x) * metre; }
            /**
             * Litteral operator for kilometre
             * @param x the value to convert
             * @return the corresponding length
             */
            constexpr ULength operator"" _km(long double x) { return static_cast <double> (x) * kilometre; }
            /**
             * Litteral operator for millimetre
             * @param x the value to convert
             * @return the corresponding length
             */
            constexpr ULength operator"" _mm(unsigned long long int x) { return static_cast <double> (x) * millimetre; }
            /**
             * Litteral operator for centimetre
             * @param x the value to convert
             * @return the corresponding length
             */
            constexpr ULength operator"" _cm(unsigned long long int x) { return static_cast <double> (x) * centimetre; }
            /**
             * Litteral operator for metre
             * @param x the value to convert
             * @return the corresponding length
             */
            constexpr ULength operator""  _m(unsigned long long int x) { return static_cast <double> (x) * metre; }
            /**
             * Litteral operator for kilometre
             * @param x the value to convert
             * @return the corresponding length
             */
            constexpr ULength operator"" _km(unsigned long long int x) { return static_cast <double> (x) * kilometre; }
            /**
             * Litteral operator for kilometre per hour
             * @param x the value to convert
             * @return the corresponding speed
             */
            constexpr USpeed operator"" _kmph(long double x) { return static_cast <double> (x) * kilometre / hour; }
            /**
             * Litteral operator for kilometre per hour
             * @param x the value to convert
             * @return the corresponding speed
             */
            constexpr USpeed operator"" _kmph(unsigned long long int x) { return static_cast <double> (x) * kilometre / hour; }
            /**
             * Litteral operator for hertz
             * @param x the value to convert
             * @return the corresponding frequency
             */
            constexpr UFrequency operator"" _Hz(long double x) { return UFrequency(x); }
            /**
             * Litteral operator for hertz
             * @param x the value to convert
             * @return the corresponding frequency
             */
            constexpr UFrequency operator"" _Hz(unsigned long long int x) { return UFrequency(static_cast <double> (x)); }
            /**
             * Litteral operator for second
             * @param x the value to convert
             * @return the corresponding time
             */
            constexpr UTime operator""   _s(long double x) { return UTime(x); }
            /**
             * Litteral operator for minute
             * @param x the value to convert
             * @return the corresponding time
             */
            constexpr UTime operator"" _min(long double x) { return static_cast <double> (x) * minute; }
            /**
             * Litteral operator for hour
             * @param x the value to convert
             * @return the corresponding time
             */
            constexpr UTime operator""   _h(long double x) { return static_cast <double> (x) * hour; }
            /**
             * Litteral operator for day
             * @param x the value to convert
             * @return the corresponding time
             */
            constexpr UTime operator"" _day(long double x) { return static_cast <double> (x) * day; }
            /**
             * Litteral operator for second
             * @param x the value to convert
             * @return the corresponding time
             */
            constexpr UTime operator""   _s(unsigned long long int x) { return UTime(static_cast <double> (x)); }
            /**
             * Litteral operator for minute
             * @param x the value to convert
             * @return the corresponding time
             */
            constexpr UTime operator"" _min(unsigned long long int x) { return static_cast <double> (x) * minute; }
            /**
             * Litteral operator for hour
             * @param x the value to convert
             * @return the corresponding time
             */
            constexpr UTime operator""   _h(unsigned long long int x) { return static_cast <double> (x) * hour; }
            /**
             * Litteral operator for day
             * @param x the value to convert
             * @return the corresponding time
             */
            constexpr UTime operator"" _day(unsigned long long int x) { return static_cast <double> (x) * day; }
            /**
             * Litteral operator for kilogramme
             * @param x the value to convert
             * @return the corresponding mass
             */
            constexpr UMass operator"" _kg(long double x) { return UMass(x); }
            /**
             * Litteral operator for gramme
             * @param x the value to convert
             * @return the corresponding mass
             */
            constexpr UMass operator""  _g(long double x) { return static_cast <double> (x) * gramme; }
            /**
             * Litteral operator for tonne
             * @param x the value to convert
             * @return the corresponding mass
             */
            constexpr UMass operator""  _t(long double x) { return static_cast <double> (x) * tonne; }
            /**
             * Litteral operator for kilogramme
             * @param x the value to convert
             * @return the corresponding mass
             */
            constexpr UMass operator"" _kg(unsigned long long int x) { return UMass(static_cast <double> (x)); }
            /**
             * Litteral operator for gramme
             * @param x the value to convert
             * @return the corresponding mass
             */
            constexpr UMass operator""  _g(unsigned long long int x) { return static_cast <double> (x) * gramme; }
            /**
             * Litteral operator for tonne
             * @param x the value to convert
             * @return the corresponding mass
             */
            constexpr UMass operator""  _t(unsigned long long int x) { return static_cast <double> (x) * tonne; }
            /**
             * Litteral operator for metre per second square
             * @param x the value to convert
             * @return the corresponding acceleration
             */
            constexpr UAcceleration operator"" _mps2(long double x) { return UAcceleration(x); }
            /**
             * Litteral operator for metre per second square
             * @param x the value to convert
             * @return the corresponding acceleration
             */
            constexpr UAcceleration operator"" _mps2(unsigned long long int x) { return UAcceleration(static_cast <double> (x)); }
            /**
             * Litteral operator for gravity
             * @param x the value to convert
             * @return the corresponding acceleration
             */
            constexpr UAcceleration operator"" _G(long double x) { return static_cast <double> (x) * G; }
            /**
             * Litteral operator for gravity
             * @param x the value to convert
             * @return the corresponding acceleration
             */
            constexpr UAcceleration operator"" _G(unsigned long long int x) { return static_cast <double> (x) * G; }
            /**
             * Litteral operator for newton
             * @param x the value to convert
             * @return the corresponding force
             */
            constexpr UForce operator"" _N(long double x) { return UForce(x); }
            /**
             * Litteral operator for newton
             * @param x the value to convert
             * @return the corresponding force
             */
            constexpr UForce operator"" _N(unsigned long long int x) { return UForce(static_cast <double> (x)); }
            /**
             * Litteral operator for pascal
             * @param x the value to convert
             * @return the corresponding pressure
             */
            constexpr UPressure operator"" _Pa(long double x) { return UPressure(x); }
            /**
             * Litteral operator for pascal
             * @param x the value to convert
             * @return the corresponding pressure
             */
            constexpr UPressure operator"" _Pa(unsigned long long int x) { return UPressure(static_cast <double> (x)); }
            /**
             * Litteral operator for pi
             * @param x the value to convert
             * @return the corresponding value
             */
            constexpr long double operator"" _pi(long double x) { return static_cast <double> (x) * 3.1415926535897932384626433832795; }
            /**
             * Litteral operator for pi
             * @param x the value to convert
             * @return the corresponding value
             */
            constexpr long double operator"" _pi(unsigned long long int x) { return static_cast <double> (x) * 3.1415926535897932384626433832795; }

            constexpr Angle radian(1.0);                                        /**< Standard SI unit */
            constexpr Angle degree = (2_pi / 360.0f) * radian;                  /**< Scale degree with radian */

            /**
             * Litteral operator for radian
             * @param x the value to convert
             * @return the corresponding angle
             */
            constexpr Angle operator"" _rad(long double x) { return Angle(x); }
            /**
             * Litteral operator for radian
             * @param x the value to convert
             * @return the corresponding angle
             */
            constexpr Angle operator"" _rad(unsigned long long int x) { return Angle(static_cast <double> (x)); }
            /**
             * Litteral operator for degree
             * @param x the value to convert
             * @return the corresponding angle
             */
            constexpr Angle operator"" _deg(long double x) { return static_cast <double> (x) * degree; }
            /**
             * Litteral operator for degree
             * @param x the value to convert
             * @return the corresponding angle
             */
            constexpr Angle operator"" _deg(unsigned long long int x) { return static_cast <double> (x) * degree; }

            /**
             * Compute the sin of a unit in typed manners
             * @param  u the unit
             * @return   the resulting sin
             */
            inline double sin(Angle const& u) {
                return std::sin(u.getValue());
            }

            /**
             * Compute the cos of a unit in typed manners
             * @param  u the unit
             * @return   the resulting cos
             */
            inline double cos(Angle const& u) {
                return std::cos(u.getValue());
            }

            /**
             * Compute the tan of a unit in typed manners
             * @param  u the unit
             * @return   the resulting tan
             */
            inline double tan(Angle const& u) {
                return std::tan(u.getValue());
            }
        }
    }
