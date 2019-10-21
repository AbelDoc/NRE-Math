
    /**
     * @file NRE_BezierCurve4D.hpp
     * @brief Declaration of Math's API's Object : BezierCurve4D
     * @author Louis ABEL
     * @date 05/04/2019
     * @copyright CC-BY-NC-SA
     */

     #pragma once

     #include <Utility/Vector/NRE_Vector.hpp>
     #include <Utility/Interfaces/Stringable/NRE_Stringable.hpp>
     #include "../../../Vector/4D/NRE_Vector4D.hpp"


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
             * @class BezierCurve4D
             * @brief Represent a 3D homogeneous Bezier curves with a set of control points
             */
            class BezierCurve4D : public Utility::Stringable<BezierCurve4D> {
                private:    //Fields
                    Utility::Vector<Point4D<float>> controls;   /**< The curve's control points */

                public:    // Methods
                    //## Constructor ##//
                        /**
                         * Curve with no control point
                         */
                        BezierCurve4D() = default;
                        /**
                         * Construct the curve from a set of control points
                         * @param points the set of control points
                         */
                        BezierCurve4D(std::initializer_list<Point4D<float>> points) : controls(points) {
                        }
                        /**
                         * Construct the curve from a set of control points
                         * @param c the set of control points
                         */
                        BezierCurve4D(Utility::Vector<Point4D<float>> && c) : controls(c) {
                        }

                    //## Copy-Constructor ##//
                        /**
                         * Copy c into this
                         * @param c the object to copy
                         */
                        BezierCurve4D(BezierCurve4D const& c) = default;

                    //## Move-Constructor ##//
                        /**
                         * Move c into this
                         * @param c the object to move
                         */
                        BezierCurve4D(BezierCurve4D && c) = default;

                    //## Deconstructor ##//
                        /**
                         * BezierCurve4D Deconstructor
                         */
                        ~BezierCurve4D() = default;

                    //## Getter ##//
                        /**
                         * Control point getter
                         * @param  index the point's index
                         * @return       the corresponding point
                         */
                        inline Point4D<float> const& getPoint(std::size_t index) const {
                            return controls[index];
                        }
                        /**
                         * Size getter
                         * @return the number of control points
                         */
                        inline std::size_t getSize() const {
                            return controls.getSize();
                        }

                    //## Access Operator ##//
                        /**
                         * Return a reference on a curve's object
                         * @warning No range check performed
                         * @param   index the object's index
                         * @return        the object's reference
                         */
                        inline Point4D<float>& operator [](std::size_t index) {
                            return controls[index];
                        }
                        /**
                         * Return a const reference on a curve's object
                         * @warning No range check performed
                         * @param   index the object's index
                         * @return        the object's reference
                         */
                         inline Point4D<float> const& operator [](std::size_t index) const{
                             return controls[index];
                         }

                    //## Assignment Operator ##//
                        /**
                         * Copy c into this
                         * @param c the object to copy into this
                         * @return  the reference of himself
                         */
                        BezierCurve4D& operator =(BezierCurve4D const& c) = default;
                        /**
                         * Move c into this
                         * @param c the object to move into this
                         * @return  the reference of himself
                         */
                        BezierCurve4D& operator =(BezierCurve4D && c) = default;

                    //## Stream Operator ##//
                        /**
                         * Convert the curve into a string
                         * @return the converted curve
                         */
                        Utility::String toString() const;
            };
        }
    }
