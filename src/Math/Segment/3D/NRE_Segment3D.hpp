
    /**
     * @file NRE_Segment3D.hpp
     * @brief Declaration of Math's API's Object : Segment3D
     * @author Louis ABEL
     * @date 04/04/2019
     * @copyright CC-BY-NC-SA
     */

     #pragma once

     #include "../../Vector/3D/NRE_Vector3D.hpp"
     #include <Utility/Interfaces/Stringable/NRE_Stringable.hpp>

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
            class Segment3D : public Utility::Stringable<Segment3D<T>> {
                private:    //Fields
                    Point3D<T> start;   /**< The segment's start */
                    Point3D<T> end;     /**< The segment's end */

                public:    // Methods
                    //## Constructor ##//
                        /**
                         * Default constructor
                         */
                        Segment3D() = default;
                        /**
                         * Construct a segment from his two points
                         * @param s the segment's start
                         * @param e the segment's end
                         */
                        template <class K, class L>
                        Segment3D(Point3D<K> const& s, Point3D<L> const& e);
                        /**
                         * Construct a segment from his two points
                         * @param s the segment's start
                         * @param e the segment's end
                         */
                        template <class K, class L>
                        Segment3D(Point2D<K> const& s, Point2D<L> const& e);
                        /**
                         * Construct a segment from his two points
                         * @param sX the segment's start x
                         * @param sY the segment's start y
                         * @param eX the segment's end x
                         * @param eY the segment's end y
                         */
                        template <class K, class L, class N, class M>
                        Segment3D(K sX, L sY, N eX, M eY);

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
                         * @return the start point
                         */
                        Point3D<T> const& getStart() const;
                        /**
                         * @return the end point
                         */
                        Point3D<T> const& getEnd() const;
                        /**
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
        }
    }

    /**
    * @namespace std
    * @brief The stl standard namespace
    */
    namespace std {
        template <class T, class K>
        struct common_type<NRE::Math::Segment3D<T>, NRE::Math::Segment3D<K>> {
            using type = NRE::Math::Segment3D<common_type_t < T, K>>;
        };
    }

    #include "NRE_Segment3D.tpp"
