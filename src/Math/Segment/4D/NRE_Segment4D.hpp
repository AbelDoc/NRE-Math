
    /**
     * @file NRE_Segment4D.hpp
     * @brief Declaration of Math's API's Object : Segment4D
     * @author Louis ABEL
     * @date 04/04/2019
     * @copyright CC-BY-NC-SA
     */

     #pragma once

     #include "../../Vector/4D/NRE_Vector4D.hpp"
     #include <Core/Interfaces/Stringable/NRE_Stringable.hpp>

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
             * @class Segment4D
             * @brief A 4D homogeneous segment
             */
            template <class T>
            class Segment4D : public Core::Stringable<Segment4D<T>> {
                private:    //Fields
                    Point4D<T> start;   /**< The segment's start */
                    Point4D<T> end;     /**< The segment's end */

                public:    // Methods
                    //## Constructor ##//
                        /**
                         * Default constructor
                         */
                        constexpr Segment4D() = default;
                        /**
                         * Construct a segment from his two points
                         * @param s the segment's start
                         * @param e the segment's end
                         */
                        template <class K, class L>
                        constexpr Segment4D(Point4D<K> const& s, Point4D<L> const& e);
                        /**
                         * Construct a segment from his two points
                         * @param s the segment's start
                         * @param e the segment's end
                         */
                        template <class K, class L>
                        constexpr Segment4D(Point3D<K> const& s, Point3D<L> const& e);
                        /**
                         * Construct a segment from his two points
                         * @param sX the segment's start x
                         * @param sY the segment's start y
                         * @param sZ the segment's start z
                         * @param eX the segment's end x
                         * @param eY the segment's end y
                         * @param eZ the segment's end z
                         */
                        template <class K, class L, class N, class M, class O, class P>
                        constexpr Segment4D(K sX, L sY, N sZ, M eX, O eY, P eZ);

                    //## Copy-Constructor ##//
                        /**
                         * Copy s into this
                         * @param s the 4D segment to copy
                         */
                        constexpr Segment4D(Segment4D const& s) = default;

                    //## Move-Constructor ##//
                        /**
                         * Move s into this
                         * @param s the 4D segment to move
                         */
                        constexpr Segment4D(Segment4D && s) = default;

                    //## Deconstructor ##//
                        /**
                         * Segment4D Deconstructor
                         */
                        ~Segment4D() = default;

                    //## Getter ##//
                        /**
                         * @return the start point
                         */
                        constexpr Point4D<T> const& getStart() const;
                        /**
                         * @return the end point
                         */
                        constexpr Point4D<T> const& getEnd() const;
                        /**
                         * @return the segment's vector
                         */
                        constexpr Vector4D<T> getVector() const;

                    //## Assignment Operator ##//
                        /**
                         * Copy assignment of s into this
                         * @param s the 4D segment to copy into this
                         * @return      the reference of himself
                         */
                        constexpr Segment4D& operator =(Segment4D const& s) = default;
                        /**
                         * Move assignment of s into this
                         * @param s the 4D segment to move into this
                         * @return      the reference of himself
                         */
                        constexpr Segment4D& operator =(Segment4D && s) = default;

                    //## Comparison Operator ##//
                        /**
                         * Equality test between this and s
                         * @param s the segment to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        constexpr bool operator ==(Segment4D<K> const& s) const;
                        /**
                         * Difference test between this and s
                         * @param s the segment to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        constexpr bool operator !=(Segment4D<K> const& s) const;

                    //## Stream Operator ##//
                        /**
                         * Convert the segment into a string
                         * @return the converted segment
                         */
                        Core::String toString() const;
            };
        }
    }

    /**
    * @namespace std
    * @brief The stl standard namespace
    */
    namespace std {
        /**
         * @class common_type
         * @brief Manage common_type test
         */
        template <class T, class K>
        struct common_type<NRE::Math::Segment4D<T>, NRE::Math::Segment4D<K>> {
            /** Define underlying common_type */
            using type = NRE::Math::Segment4D<common_type_t < T, K>>;
        };
    }

    #include "NRE_Segment4D.tpp"
