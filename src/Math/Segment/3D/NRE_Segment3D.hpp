
    /**
     * @file NRE_Segment3D.hpp
     * @brief Declaration of Math's API's Object : Segment3D
     * @author Louis ABEL
     * @date 04/04/2019
     * @copyright CC-BY-NC-SA
     */

     #pragma once

     #include "../../Vector/3D/NRE_Vector3D.hpp"

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
             * @class Segment3D
             * @brief A 3D homogeneous segment
             */
            template <class T>
            class Segment3D {
                private:    //Fields
                    Point3D<T> start;   /**< The segment's start */
                    Point3D<T> end;     /**< The segment's end */

                public:    // Methods
                    //## Constructor ##//
                        /**
                         * Construct a segment with both start and end equal to origin
                         */
                        Segment3D();
                        /**
                         * Construct a segment from his two points
                         * @param s the segment's start
                         * @param e the segment's end
                         */
                        Segment3D(Point3D<T> const& s, Point3D<T> const& e);
                        /**
                         * Construct a segment from his two points
                         * @param s the segment's start
                         * @param e the segment's end
                         */
                        Segment3D(Point2D<T> const& s, Point2D<T> const& e);
                        /**
                         * Construct a segment from his two points
                         * @param sX the segment's start x
                         * @param sY the segment's start y
                         * @param eX the segment's end x
                         * @param eY the segment's end y
                         */
                        Segment3D(T sX, T sY, T eX, T eY);

                    //## Copy-Constructor ##//
                        /**
                         * Copy s into this
                         * @param s the 3D segment to copy the content
                         */
                        Segment3D(Segment3D const& s) = default;

                    //## Move-Constructor ##//
                        /**
                         * Move s into this, leaving s empty
                         * @param s the 3D segment to move
                         */
                        Segment3D(Segment3D && s) = default;

                    //## Deconstructor ##//
                        /**
                         * Segment3D Deconstructor
                         */
                        ~Segment3D() = default;

                    //## Getter ##//
                        /**
                         * Start getter
                         * @return the start point
                         */
                        Point3D<T> const& getStart() const;
                        /**
                         * End getter
                         * @return the end point
                         */
                        Point3D<T> const& getEnd() const;
                        /**
                         * Segment vector getter
                         * @return the segment's vector
                         */
                        Vector3D<T> getVector() const;

                    //## Assignment Operator ##//
                        /**
                         * Copy assignment of s into this
                         * @param s the 3D segment to copy into this
                         * @return      the reference of himself
                         */
                        Segment3D& operator =(Segment3D const& s) = default;
                        /**
                         * Move assignment of s into this, leaving s empty
                         * @param s the 3D segment to move into this
                         * @return      the reference of himself
                         */
                        Segment3D& operator =(Segment3D && s) = default;

                    //## Comparison Operator ##//
                        /**
                         * Equality test between this and s
                         * @param s the segment to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        bool operator ==(Segment3D<K> const& s) const;
                        /**
                         * Difference test between this and s
                         * @param s the segment to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        bool operator !=(Segment3D<K> const& s) const;

                    //## Stream Operator ##//
                        /**
                         * Convert the segment into a string
                         * @return the converted segment
                         */
                        Utility::String toString() const;
            };

            /**
             * Output stream operator for the object
             * @param  stream the stream to add the object's string representation
             * @param  o      the object to add in the stream
             * @return the    modified stream
             */
            template <class T>
            std::ostream& operator <<(std::ostream& stream, Segment3D<T> const& o);
        }
    }

    #include "NRE_Segment3D.tpp"
