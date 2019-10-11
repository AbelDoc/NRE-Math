
    /**
     * @file NRE_Quaternion.hpp
     * @brief Declaration of Math's API's Object : Quaternion
     * @author Louis ABEL
     * @date 31/03/2019
     * @copyright CC-BY-NC-SA
     */

     #pragma once

     #include <Utility/String/NRE_String.hpp>
     #include <iostream>

     #include "../NRE_Math.hpp"
     #include "../NRE_Unit.hpp"

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

            template<class> class Vector3D;
            template<class> class Vector4D;

            /**
             * @class Quaternion
             * @brief A quaternion represented by a 3D rotation axis and an angle
             */
            template <class T>
            class Quaternion {
                private :   //Fields
                    Vector4D<T> quat;   /** The internal quaternion */

                public :   // Methods
                    //## Constructor ##//
                        /**
                         * Construct the identity quaternion
                         */
                        Quaternion() = default;
                        /**
                         * Construct a quaternion with direct assignment
                         * @param x  the x coordinate
                         * @param y  the y coordinate
                         * @param z  the z coordinate
                         * @param w  the w coordinate
                         */
                        template <class K, class L, class N, class M>
                        Quaternion(K x, L y, N z, M w);
                        /**
                         * Construct a quaternion from angle-axis construction
                         * @param x  the x coordinate
                         * @param y  the y coordinate
                         * @param z  the z coordinate
                         * @param w  the rotation's angle
                         */
                        template <class K, class L, class N>
                        Quaternion(K x, L y, N z, Angle w);
                        /**
                         * Construct a quaternion with direct assignment
                         * @param ax  the rotation's axis
                         * @param an  the rotation's angle
                         */
                        template <class K, class L>
                        Quaternion(Vector3D<K> const& ax, L an);
                        /**
                         * Construct a quaternion from angle-axis construction
                         * @param ax  the rotation's axis
                         * @param an  the rotation's angle
                         */
                        template <class K>
                        Quaternion(Vector3D<K> const& ax, Angle an);

                    //## Copy-Constructor ##//
                        /**
                         * Copy q into this
                         * @param q the object to copy
                         */
                        Quaternion(Quaternion const& q) = default;

                    //## Move-Constructor ##//
                        /**
                         * Move q into this
                         * @param q the object to move
                         */
                        Quaternion(Quaternion && q) = default;

                    //## Convertor ##//
                        /**
                         * Convert a K-type quaternion into a T-type quaternion
                         * @param q the K-type quaternion to convert
                         */
                        template <class K>
                        Quaternion(Quaternion<K> const& q);

                    //## Deconstructor ##//
                        /**
                         * Quaternion Deconstructor
                         */
                        ~Quaternion() = default;

                    //## Getter ##//
                        /**
                         * @return the x value
                         */
                        T getX() const;
                        /**
                         * @return the y value
                         */
                        T getY() const;
                        /**
                         * @return the z value
                         */
                        T getZ() const;
                        /**
                         * @return the w value
                         */
                        T getW() const;
                        /**
                         * @return the rotation's axis
                         */
                        Vector3D<T> getAxis() const;
                        /**
                         * @return the internal quaternion
                         */
                        Vector4D<T> const& getQuaternion() const;

                    //## Setter ##//
                        /**
                         * X setter
                         * @param x the new value for x
                         */
                        template <class K>
                        void setX(K x);
                        /**
                         * Y setter
                         * @param y the new value for y
                         */
                        template <class K>
                        void setY(K y);
                        /**
                         * Z setter
                         * @param z the new value for z
                         */
                        template <class K>
                        void setZ(K z);
                        /**
                         * W setter
                         * @param w the new value for w
                         */
                        template <class K>
                        void setW(K w);
                        /**
                         * Angle axis setter
                         * @param axis the new rotation's axis
                         * @param w    the new rotation's angle
                         */
                        template <class K>
                        void setAngleAxis(Vector3D<K> const& axis, Angle w);
                        /**
                         * Set the quaternion to the identity quaternion
                         */
                        void setIdentity();

                    //## Members ##//
                        /**
                         * @return the quaternion's norm
                         */
                        long double norm() const;
                        /**
                         * @return the squared quaternion's norm
                         */
                        T normSquared() const;
                        /**
                         * Normalize the quaternion
                         */
                        void normalize();
                        /**
                         * @return a pointer to the quaternion's data
                         */
                        const T* value() const;

                    //## Assignment Operator ##//
                        /**
                         * Copy q into this
                         * @param q the object to copy into this
                         * @return  the reference of himself
                         */
                        Quaternion& operator =(Quaternion const& q) = default;
                        /**
                         * Move q into this
                         * @param q the object to move into this
                         * @return  the reference of himself
                         */
                        Quaternion& operator =(Quaternion && q) = default;
                        /**
                         * Copy q into this
                         * @param q the object to copy into this
                         * @return  the reference of himself
                         */
                        template <class K>
                        Quaternion& operator =(Quaternion<K> const& q);
                        /**
                         * Move q into this
                         * @param q the object to move into this
                         * @return  the reference of himself
                         */
                        template <class K>
                        Quaternion& operator =(Quaternion<K> && q);

                    //## Shortcut Operator ##//
                        /**
                         * Multiply 2 quaternions together
                         * @param q the second quaternion
                         * @return  the reference of himself
                         */
                        template <class K>
                        Quaternion& operator*=(Quaternion<K> const& q);

                    //## Arithmetic Operator ##//
                        /**
                         * Compute the quaternion resulting in the multiplication of this and q
                         * @param q the second quaternion
                         * @return  the computed quaternion
                         */
                        template <class K>
                        Quaternion<std::common_type_t<T, K>> operator*(Quaternion<K> const& q) const;

                    //## Stream Operator ##//
                        /**
                         * Convert the quaternion into a string
                         * @return the converted quaternion
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
            std::ostream& operator <<(std::ostream& stream, Quaternion<T> const& o);
        }
    }

    #include "NRE_Quaternion.tpp"
