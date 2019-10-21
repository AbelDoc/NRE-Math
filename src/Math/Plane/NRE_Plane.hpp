
    /**
     * @file NRE_Plane.hpp
     * @brief Declaration of Math's API's Object : Plane
     * @author Louis ABEL
     * @date 02/04/2019
     * @copyright CC-BY-NC-SA
     */

     #pragma once

    #include "../Vector/3D/NRE_Vector3D.hpp"
     #include "../Vector/4D/NRE_Vector4D.hpp"
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
             * @enum Face
             * Regroup constant for box's faces managing
             */
            enum Face {
                TOP,        /**< The top face */
                BOTTOM,     /**< The bottom face */
                LEFT,       /**< The left face */
                RIGHT,      /**< The right face */
                NEAR,       /**< The near face */
                FAR,        /**< The far face */

                FACE_NUM    /**< The number of face in a box */
            };

            /**
             * @class Plane
             * @brief A cartesian plane with a point and a vector
             */
            template <class T>
            class Plane : public Utility::Stringable<Plane<T>> {
                private :   //Fields
                    Vector3D<T> normal; /**< The plane's normal */
                    Point3D<T> point;   /**< The plane's point */

                public :   // Methods
                    //## Constructor ##//
                        /**
                         * Default constructor
                         */
                        Plane() = default;
                        /**
                         * Construct a plane with a particular point and a normal
                         * @param n the new plane's normal
                         * @param p the new plane's point
                         */
                        template <class K, class L>
                        Plane(Vector4D<K> const& n, Point4D<L> const& p);
                        /**
                         * Construct a plane with a particular point and a normal
                         * @param n the new plane's normal
                         * @param p the new plane's point
                         */
                        template <class K, class L>
                        Plane(Vector3D<K> const& n, Point3D<L> const& p);
                        /**
                         * Construct a plane with 3 points
                         * @param p1 the first point
                         * @param p2 the second point
                         * @param p3 the third point
                         */
                        template <class K, class L, class N>
                        Plane(Point4D<K> const& p1, Point4D<L> const& p2, Point4D<N> const& p3);
                        /**
                         * Construct a plane with 3 points
                         * @param p1 the first point
                         * @param p2 the second point
                         * @param p3 the third point
                         */
                        template <class K, class L, class N>
                        Plane(Point3D<K> const& p1, Point3D<L> const& p2, Point3D<N> const& p3);

                    //## Copy-Constructor ##//
                        /**
                         * Copy p into this
                         * @param p the object to copy
                         */
                        Plane(Plane const& p) = default;

                    //## Move-Constructor ##//
                        /**
                         * Move p into this, leaving p empty
                         * @param p the plane to move
                         */
                        Plane(Plane && p) = default;

                    //## Convertor ##//
                        /**
                         * Convert a K-Type plane into a T-type plane
                         * @param p the K-type point to convert
                         */
                        template <class K>
                        Plane(Plane<K> const& p);

                    //## Deconstructor ##//
                        /**
                         * Plane Deconstructor
                         */
                        ~Plane() = default;

                    //## Getter ##//
                        /**
                         * @return the plane's normal
                         */
                        Vector3D<T> const& getNormal() const;
                        /**
                         * @return the plane's point
                         */
                        Point3D<T> const& getPoint() const;

                    //## Setter ##//
                        /**
                         * Normal setter
                         * @param n the new value for normal
                         */
                        template <class K>
                        void setNormal(Vector4D<K> const& n);
                        /**
                         * Normal setter
                         * @param n the new value for normal
                         */
                        template <class K>
                        void setNormal(Vector3D<K> const& n);
                        /**
                         * Point setter
                         * @param p the new value for point
                         */
                        template <class K>
                        void setPoint(Point4D<K> const& p);
                        /**
                         * Point setter
                         * @param p the new value for point
                         */
                        template <class K>
                        void setPoint(Point3D<K> const& p);
                        /**
                         * Set the values for both normal and point
                         * @param n the new value for normal
                         * @param p the new value for point
                         */
                        template <class K, class L>
                        void setNormalAndPoint(Vector4D<K> const& n, Point4D<L> const& p);
                        /**
                         * Set the values for both normal and point
                         * @param n the new value for normal
                         * @param p the new value for point
                         */
                        template <class K, class L>
                        void setNormalAndPoint(Vector3D<K> const& n, Point3D<L> const& p);

                    //## Methods ##//
                        /**
                         * Compute the distance between a point and a plane
                         * @param  p the point to compute the distance with this
                         * @return the computed distance
                         */
                        template <class K>
                        std::common_type_t<T, K> distance(Point4D<K> const& p) const;
                        /**
                         * Compute the distance between a point and a plane
                         * @param  p the point to compute the distance with this
                         * @return the computed distance
                         */
                        template <class K>
                        std::common_type_t<T, K> distance(Point3D<K> const& p) const;

                    //## Assignment Operator ##//
                        /**
                         * Copy p into this
                         * @param p the object to copy into this
                         * @return  the reference of himself
                         */
                        Plane& operator =(Plane const& p) = default;
                        /**
                         * Move p into this
                         * @param p the object to move into this
                         * @return  the reference of himself
                         */
                        Plane& operator =(Plane && p) = default;
                        /**
                         * Copy p into this
                         * @param p the object to copy into this
                         * @return  the reference of himself
                         */
                        template <class K>
                        Plane& operator =(Plane<K> const& p) ;
                        /**
                         * Move p into this
                         * @param p the object to move into this
                         * @return  the reference of himself
                         */
                        template <class K>
                        Plane& operator =(Plane<K> && p);

                    //## Comparison Operator ##//
                        /**
                         * Equality test between this and p
                         * @param p the plane to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        bool operator ==(Plane<K> const& p) const;
                        /**
                         * Difference test between this and p
                         * @param p the plane to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        bool operator !=(Plane<K> const& p) const;

                    //## Stream Operator ##//
                        /**
                         * Convert the plane into a string
                         * @return the converted plane
                         */
                        Utility::String toString() const;

                private:   // Methods
                    /**
                     * Compute the plane's normal and point from 3 points in the plane
                     * @param p1 the first point
                     * @param p2 the second point
                     * @param p3 the third point
                     */
                    template <class K, class L, class N>
                    void computeNormalFrom3Point(Point3D<K> const& p1, Point3D<L> const& p2, Point3D<N> const& p3);
            };
        }
    }

    #include "NRE_Plane.tpp"
