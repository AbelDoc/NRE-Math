
    /**
     * @file NRE_BezierCurve3D.hpp
     * @brief Declaration of Math's API's Object : BezierCurve3D
     * @author Louis ABEL
     * @date 05/04/2019
     * @copyright CC-BY-NC-SA
     */

     #pragma once

     #include <vector>

     #include "../../../Vector/3D/NRE_Vector3D.hpp"


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
             * @class BezierCurve3D
             * @brief Represent a 2D homogeneous Bezier curves with a set of control points
             */
            class BezierCurve3D {
                private:    //Fields
                    std::vector<Point3D<float>> controls;   /**< The curve's control points */

                public:    // Methods
                    //## Constructor ##//
                        /**
                         * Curve with no control point
                         */
                        BezierCurve3D() = default;
                        /**
                         * Construct the curve from a set of control points
                         * @param points the set of control points
                         */
                        BezierCurve3D(std::initializer_list<Point3D<float>> && points);
                        /**
                         * Construct the curve from a set of control points
                         * @param c the set of control points
                         */
                        BezierCurve3D(std::vector<Point3D<float>> && c);

                    //## Copy-Constructor ##//
                        /**
                         * Copy c into this
                         * @param c the object to copy
                         */
                        BezierCurve3D(BezierCurve3D const& c) = default;

                    //## Move-Constructor ##//
                        /**
                         * Move c into this
                         * @param c the object to move
                         */
                        BezierCurve3D(BezierCurve3D && c) = default;

                    //## Deconstructor ##//
                        /**
                         * BezierCurve3D Deconstructor
                         */
                        ~BezierCurve3D() = default;

                    //## Getter ##//
                        /**
                         * Control point getter
                         * @param  index the point's index
                         * @return       the corresponding point
                         */
                        inline Point3D<float> const& getPoint(std::size_t index) const {
                            return controls[index];
                        }
                        /**
                         * Size getter
                         * @return the number of control points
                         */
                        inline std::size_t getSize() const {
                            return controls.size();
                        }

                    //## Access Operator ##//
                        /**
                         * Return a reference on a curve's object
                         * @warning No range check performed
                         * @param   index the object's index
                         * @return        the object's reference
                         */
                        inline Point3D<float>& operator [](std::size_t index) {
                            return controls[index];
                        }
                        /**
                         * Return a const reference on a curve's object
                         * @warning No range check performed
                         * @param   index the object's index
                         * @return        the object's reference
                         */
                         inline Point3D<float> const& operator [](std::size_t index) const{
                             return controls[index];
                         }

                    //## Assignment Operator ##//
                        /**
                         * Copy c into this
                         * @param c the object to copy into this
                         * @return  the reference of himself
                         */
                        BezierCurve3D& operator =(BezierCurve3D const& c) = default;
                        /**
                         * Move c into this
                         * @param c the object to move into this
                         * @return  the reference of himself
                         */
                        BezierCurve3D& operator =(BezierCurve3D && c) = default;

                    //## Stream Operator ##//
                        /**
                         * Convert the curve into a string
                         * @return the converted curve
                         */
                        std::string toString() const;
            };

            /**
             * Output stream operator for the object
             * @param  stream the stream to add the object's string representation
             * @param  o      the object to add in the stream
             * @return the    modified stream
             */
            std::ostream& operator <<(std::ostream& stream, BezierCurve3D const& o);
        }
    }
