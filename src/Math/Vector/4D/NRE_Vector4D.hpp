
    /**
     * @file NRE_Vector4D.hpp
     * @brief Declaration of Math's API's Object : Vector4D
     * @author Louis ABEL
     * @date 27/03/2019
     * @copyright GNU GPL v3
     */

     #pragma once

     #include <string>
     #include <iostream>

     #include "../../NRE_Math.hpp"

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

            /**
             * @class Vector3D
             * @brief A cartesian 3D vector
             * @warning Use this vector with POD type only
             */
            template <class T>
            class Vector4D  {
                private :   //Fields
                    T x;    /**< x coordinate */
                    T y;    /**< y coordinate */
                    T z;    /**< z coordinate */
                    T w;    /**< w coordinate */

                public:    // Methods
                    //## Constructor ##//
                        /**
                         * Construct the null vector
                         */
                        Vector4D() = default;
                        /**
                         * Construct a vector with passed values
                         * @param nX new x value
                         * @param nY new y value
                         * @param nZ new z value
                         * @param nW new w value
                         */
                        Vector4D(T nX, T nY, T nZ, T nW);
                        /**
                         * Construct a vector with an unique value for all coordinates
                         * @param value new x, y, z and w values
                         */
                        Vector4D(T value);

                    //## Copy-Constructor ##//
                        /**
                         * Copy u into this
                         * @param u the object to copy
                         */
                        Vector4D(Vector4D const& u) = default;

                    //## Move-Constructor ##//
                        /**
                         * Move u into this
                         * @param u the object to move
                         */
                        Vector4D(Vector4D && u) = default;

                    //## Convertor ##//
                        /**
                         * Convert a K-type vector into a T-type vector
                         * @param u the K-type vector to convert
                         */
                        template <class K>
                        Vector4D(Vector4D<K> const& u);
                        /**
                         * Convert a base 4D vector into a 4D vector with a default w value
                         * @param u the 4D vector to convert
                         */
                        Vector4D(Vector3D<T> const& u);
                        /**
                         * Convert a base 4D vector into a 4D point with a passed w value
                         * @param u the 4D vector to convert
                         * @param nW the new w value
                         */
                        Vector4D(Vector3D<T> const& u, T nW);

                    //## Deconstructor ##//
                        /**
                         * Vector4D Deconstructor
                         */
                        ~Vector4D() = default;

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
                         * @return the x value
                         */
                        T getR() const;
                        /**
                         * @return the y value
                         */
                        T getG() const;
                        /**
                         * @return the z value
                         */
                        T getB() const;
                        /**
                         * @return the w value
                         */
                        T getA() const;

                    //## Setter ##//
                        /**
                         * X setter
                         * @param nX the new value for x
                         */
                        void setX(T nX);
                        /**
                         * Y setter
                         * @param nY the new value for y
                         */
                        void setY(T nY);
                        /**
                         * Z setter
                         * @param nZ the new value for z
                         */
                        void setZ(T nZ);
                        /**
                         * W setter
                         * @param nW the new value for w
                         */
                        void setW(T nW);
                        /**
                         * X setter
                         * @param r the new value for x
                         */
                        void setR(T r);
                        /**
                         * Y setter
                         * @param g the new value for y
                         */
                        void setG(T g);
                        /**
                         * Z setter
                         * @param b the new value for z
                         */
                        void setB(T b);
                        /**
                         * W setter
                         * @param a the new value for w
                         */
                        void setA(T a);
                        /**
                         * Set the values for x, y, z and w
                         * @param nX the new value for x
                         * @param nY the new value for y
                         * @param nZ the new value for z
                         * @param nW the new value for w
                         */
                        void setCoord(T nX, T nY, T nZ, T nW);
                        /**
                         * Set the values for x, y, z and w with a base 3D vector
                         * @param u the base 3D vector for x, y and z values
                         * @param nW the new value for w
                         */
                        void setCoord(Vector3D<T> const& u, T nW);
                        /**
                         * Set the values for x, y, z and w
                         * @param r the new value for x
                         * @param g the new value for y
                         * @param b the new value for z
                         * @param a the new value for w
                         */
                        void setRGBA(T r, T g, T b, T a);
                        /**
                         * Set the values for x, y, z and w with a base 3D vector
                         * @param u the base 3D vector for x, y and z values
                         * @param a the new value for w
                         */
                        void setRGBA(Vector3D<T> const& u, T a);

                    //## Methods ##//
                        /**
                         * @return the vector's norm
                         */
                        float norm() const;
                        /**
                         * @return the squared vector's norm
                         */
                        float normSquared() const;
                        /**
                         * Normalize the vector
                         */
                        void normalize();
                        /**
                         * @return a pointer to the vector's data
                         */
                        const T* value() const;

                    //## Access Operator ##//
                        /**
                         * Return a reference on a vector's object
                         * @warning No range check performed
                         * @param   index the object's index
                         * @return        the object's reference
                         */
                        T& operator [](std::size_t index);
                        /**
                         * Return a const reference on a vector's object
                         * @warning No range check performed
                         * @param   index the object's index
                         * @return        the object's reference
                         */
                        T const& operator [](std::size_t index) const;

                    //## Assignment Operator ##//
                        /**
                         * Copy u into this
                         * @param u the object to copy into this
                         * @return  the reference of himself
                         */
                        Vector4D& operator =(Vector4D const& u) = default;
                        /**
                         * Move u into this
                         * @param u the object to move into this
                         * @return  the reference of himself
                         */
                        Vector4D& operator =(Vector4D && u) = default;

                    //## Shortcut Operator ##//
                        /**
                         * Add a vector into this
                         * @param u the vector to add into this
                         * @return  the reference of himself
                         */
                        Vector4D& operator +=(Vector4D const& u);
                        /**
                         * Subtract a vector into this
                         * @param u the vector to subtract into this
                         * @return  the reference of himself
                         */
                        Vector4D& operator -=(Vector4D const& u);
                        /**
                         * Multiply this by a factor k
                         * @param k the multiplication factor
                         * @return  the reference of himself
                         */
                        Vector4D& operator *=(T k);
                        /**
                         * Multiply this by a vector u, component by component
                         * @param u the multiplication vector
                         * @return  the reference of himself
                         */
                        Vector4D& operator *=(Vector4D const& u);
                        /**
                         * Divide this by a factor k
                         * @param k the division factor
                         * @return  the reference of himself
                         */
                        Vector4D& operator /=(T k);
                        /**
                         * Divide this by a vector u, component by component
                         * @param u the division vector
                         * @return  the reference of himself
                         */
                        Vector4D& operator /=(Vector4D const& u);
                        /**
                         * Compute the scalar product between this and u
                         * @param u the vector
                         * @return  the scalar product
                         */
                        float operator |=(Vector4D const& u) const;

                    //## Arithmetic Operator ##//
                        /**
                         * Compute the vector resulting in the addition of u into this
                         * @param u the vector to add
                         * @return  the computed vector
                         */
                        Vector4D operator +(Vector4D const& u) const;
                        /**
                         * Compute the vector resulting in the subtraction of u into this
                         * @param u the vector to subtract
                         * @return  the computed vector
                         */
                        Vector4D operator -(Vector4D const& u) const;
                        /**
                         * Compute the opposite version of this
                         * @return the opposite vector
                         */
                        Vector4D operator -() const;
                        /**
                         * Compute the vector resulting in the multiplication of this by k
                         * @param k the multiplication factor
                         * @return  the computed vector
                         */
                        Vector4D operator *(T k) const;
                        /**
                         * Compute the vector resulting in the multiplication of this by u
                         * @param u the multiplication vector
                         * @return  the computed vector
                         */
                        Vector4D operator *(Vector4D const& u) const;
                        /**
                         * Compute the vector resulting in the division of this by k
                         * @param k the division factor
                         * @return  the computed vector
                         */
                        Vector4D operator /(T k) const;
                        /**
                         * Compute the vector resulting in the division of this by u
                         * @param u the division vector
                         * @return  the computed vector
                         */
                        Vector4D operator /(Vector4D const& u) const;
                        /**
                         * Compute the scalar product between this and u
                         * @param u the vector
                         * @return  the scalar product
                         */
                        float operator |(Vector4D const& u) const;

                    //## Comparison Operator ##//
                        /**
                         * Equality test between this and u
                         * @param u the vector to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        bool operator ==(Vector4D<K> const& u) const;
                        /**
                         * Difference test between this and u
                         * @param u the vector to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        bool operator !=(Vector4D<K> const& u) const;
                        /**
                         * Inferior test between this and u
                         * @param u the vector to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        bool operator <(Vector4D<K> const& u) const;
                        /**
                         * Superior test between this and u
                         * @param u the vector to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        bool operator >(Vector4D<K> const& u) const;
                        /**
                         * Inferior or Equal test between this and u
                         * @param u the vector to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        bool operator <=(Vector4D<K> const& u) const;
                        /**
                         * Superior or Equal test between this and u
                         * @param u the vector to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        bool operator >=(Vector4D<K> const& u) const;

                    //## Stream Operator ##//
                        /**
                         * Convert the vector into a string
                         * @return the converted vector
                         */
                        std::string toString() const;
            };

            template <class T>
            using Point4D = Vector4D<T>;

            /**
             * Output stream operator for the object
             * @param  stream the stream to add the object's string representation
             * @param  o      the object to add in the stream
             * @return the    modified stream
             */
            template <class T>
            std::ostream& operator <<(std::ostream& stream, Vector4D<T> const& o);
        }
    }

    #include "NRE_Vector4D.tpp"