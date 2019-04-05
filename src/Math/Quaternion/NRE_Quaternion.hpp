
    /**
     * @file NRE_Quaternion.hpp
     * @brief Declaration of Math's API's Object : Quaternion
     * @author Louis ABEL
     * @date 31/03/2019
     * @copyright CC-BY-NC-SA
     */

     #pragma once

     #include <string>
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
                        Quaternion();
                        /**
                         * Construct a quaternion with direct assignment
                         * @param x  the x coordinate
                         * @param y  the y coordinate
                         * @param z  the z coordinate
                         * @param w  the rotation's angle
                         */
                        Quaternion(T x, T y, T z, T w);
                        /**
                         * Construct a quaternion from angle-axis construction
                         * @param x  the x coordinate
                         * @param y  the y coordinate
                         * @param z  the z coordinate
                         * @param w  the rotation's angle
                         */
                        Quaternion(T x, T y, T z, Angle w);
                        /**
                         * Construct a quaternion with direct assignment
                         * @param ax  the rotation's axis
                         * @param an  the rotation's angle
                         */
                        Quaternion(Vector3D<T> const& ax, T an);
                        /**
                         * Construct a quaternion from angle-axis construction
                         * @param ax  the rotation's axis
                         * @param an  the rotation's angle
                         */
                        Quaternion(Vector3D<T> const& ax, Angle an);

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
                        void setX(T x);
                        /**
                         * Y setter
                         * @param y the new value for y
                         */
                        void setY(T y);
                        /**
                         * Z setter
                         * @param z the new value for z
                         */
                        void setZ(T z);
                        /**
                         * W setter
                         * @param w the new value for w
                         */
                        void setW(T w);
                        /**
                         * Angle axis setter
                         * @param axis the new rotation's axis
                         * @param w    the new rotation's angle
                         */
                        void setAngleAxis(Vector3D<T> const& axis, Angle w);
                        /**
                         * Set the quaternion to the identity quaternion
                         */
                        void setIdentity();

                    //## Members ##//
                        /**
                         * @return the quaternion's norm
                         */
                        float norm() const;
                        /**
                         * @return the squared quaternion's norm
                         */
                        float normSquared() const;
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

                    //## Shortcut Operator ##//
                        /**
                         * Multiply 2 quaternions together
                         * @param q the second quaternion
                         * @return  the reference of himself
                         */
                        Quaternion& operator*=(Quaternion const& q);

                    //## Arithmetic Operator ##//
                        /**
                         * Compute the quaternion resulting in the multiplication of this and q
                         * @param q the second quaternion
                         * @return  the computed quaternion
                         */
                        Quaternion operator*(Quaternion const& q) const;

                    //## Stream Operator ##//
                        /**
                         * Convert the quaternion into a string
                         * @return the converted quaternion
                         */
                        std::string toString() const;
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
