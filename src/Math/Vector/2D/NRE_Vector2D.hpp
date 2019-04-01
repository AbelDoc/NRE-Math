
    /**
     * @file NRE_Vector2D.hpp
     * @brief Declaration of Math's API's Object : Vector2D
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
             * @class Vector2D
             * @brief A cartesian 2D vector
             * @warning Use this vector with POD type only
             */
            template <class T>
            class Vector2D {
                private :   // Fields
                    T x;    /**< x coordinate */
                    T y;    /**< y coordinate */

                public :    // Methods
                    //## Constructor ##//
                        /**
                         * Construct the null vector
                         */
                        Vector2D() = default;
                        /**
                         * Construct a vector with passed values
                         * @param nX new x value
                         * @param nY new y value
                         */
                        Vector2D(T nX, T nY);
                        /**
                         * Construct a vector with unique values
                         * @param value the new x and y values
                         */
                        Vector2D(T value);

                    //## Copy-Constructor ##//
                        /**
                         * Copy u into this
                         * @param u the object to copy
                         */
                        Vector2D(Vector2D const& u) = default;

                    //## Move-Constructor ##//
                        /**
                         * Move u into this
                         * @param u the object to move
                         */
                        Vector2D(Vector2D && u) = default;

                    //## Convertor ##//
                        /**
                         * Convert a K-type vector into a T-type vector
                         * @param u the K-type vector to convert
                         */
                        template <class K>
                        Vector2D(Vector2D<K> const& u);
                        /**
                         * Convert a K-type 3D vector into a T-type 2D vector
                         * @param u the K-type 3D vector to convert
                         */
                        template <class K>
                        Vector2D(Vector3D<K> const& u);

                    //## Deconstructor ##//
                        /**
                         * Vector2D Deconstructor
                         */
                        ~Vector2D() = default;

                    //## Getter ##//
                        /**
                         * @return the x value
                         */
                        T getX() const;
                        /**
                         * @return the x value
                         */
                        T getY() const;
                        /**
                         * @return the x value
                         */
                        T getW() const;
                        /**
                         * @return the y value
                         */
                        T getH() const;

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
                         * X setter
                         * @param w the new value for x
                         */
                        void setW(T w);
                        /**
                         * Y setter
                         * @param h the new value for y
                         */
                        void setH(T h);
                        /**
                         * Set the values for both x and y
                         * @param nX the new value for x
                         * @param nY the new value for y
                         */
                        void setCoord(T nX, T nY);
                        /**
                         * Set the values for both x and y
                         * @param w the new value for x
                         * @param h the new value for y
                         */
                        void setSize(T w, T h);

                    //## Methods ##//
                        /**
                         * @return the vector's norm
                         */
                        double norm() const;
                        /**
                         * @return the squared vector's norm
                         */
                        double normSquared() const;
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
                        Vector2D& operator =(Vector2D const& u) = default;
                        /**
                         * Move u into this
                         * @param u the object to move into this
                         * @return  the reference of himself
                         */
                        Vector2D& operator =(Vector2D && u) = default;

                    //## Shortcut Operator ##//
                        /**
                         * Add a vector into this
                         * @param u the vector to add into this
                         * @return  the reference of himself
                         */
                        Vector2D& operator +=(Vector2D const& u);
                        /**
                         * Subtract a vector into this
                         * @param u the vector to subtract into this
                         * @return  the reference of himself
                         */
                        Vector2D& operator -=(Vector2D const& u);
                        /**
                         * Multiply this by a factor k
                         * @param k the multiplication factor
                         * @return  the reference of himself
                         */
                        Vector2D& operator *=(T k);
                        /**
                         * Multiply this by a vector u, component by component
                         * @param u the multiplication vector
                         * @return  the reference of himself
                         */
                        Vector2D& operator *=(Vector2D const& u);
                        /**
                         * Divide this by a factor k
                         * @param k the division factor
                         * @return  the reference of himself
                         */
                        Vector2D& operator /=(T k);
                        /**
                         * Divide this by a vector u, component by component
                         * @param u the division vector
                         * @return  the reference of himself
                         */
                        Vector2D& operator /=(Vector2D const& u);
                        /**
                         * Compute the scalar product between this and u
                         * @param u the vector
                         * @return  the scalar product
                         */
                        double operator |=(Vector2D const& u) const;

                    //## Arithmetic Operator ##//
                        /**
                         * Compute the vector resulting in the addition of u into this
                         * @param u the vector to add
                         * @return  the computed vector
                         */
                        Vector2D operator +(Vector2D const& u) const;
                        /**
                         * Compute the vector resulting in the subtraction of u into this
                         * @param u the vector to subtract
                         * @return  the computed vector
                         */
                        Vector2D operator -(Vector2D const& u) const;
                        /**
                         * Compute the opposite version of this
                         * @return the opposite vector
                         */
                        Vector2D operator -() const;
                        /**
                         * Compute the vector resulting in the multiplication of this by k
                         * @param k the multiplication factor
                         * @return  the computed vector
                         */
                        Vector2D operator *(T k) const;
                        /**
                         * Compute the vector resulting in the multiplication of this by u
                         * @param u the multiplication vector
                         * @return  the computed vector
                         */
                        Vector2D operator *(Vector2D const& u) const;
                        /**
                         * Compute the vector resulting in the division of this by k
                         * @param k the division factor
                         * @return  the computed vector
                         */
                        Vector2D operator /(T k) const;
                        /**
                         * Compute the vector resulting in the division of this by u
                         * @param u the division vector
                         * @return  the computed vector
                         */
                        Vector2D operator /(Vector2D const& u) const;
                        /**
                         * Compute the scalar product between this and u
                         * @param u the vector
                         * @return  the scalar product
                         */
                        double operator |(Vector2D const& u) const;

                    //## Comparison Operator ##//
                        /**
                         * Equality test between this and u
                         * @param u the vector to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        bool operator ==(Vector2D<K> const& u) const;
                        /**
                         * Difference test between this and u
                         * @param u the vector to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        bool operator !=(Vector2D<K> const& u) const;
                        /**
                         * Inferior test between this and u
                         * @param u the vector to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        bool operator <(Vector2D<K> const& u) const;
                        /**
                         * Superior test between this and u
                         * @param u the vector to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        bool operator >(Vector2D<K> const& u) const;
                        /**
                         * Inferior or Equal test between this and u
                         * @param u the vector to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        bool operator <=(Vector2D<K> const& u) const;
                        /**
                         * Superior or Equal test between this and u
                         * @param u the vector to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        bool operator >=(Vector2D<K> const& u) const;

                    //## Stream Operator ##//
                        /**
                         * Convert the vector into a string
                         * @return the converted vector
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
            std::ostream& operator <<(std::ostream& stream, Vector2D<T> const& o);
        }
    }

    #include "NRE_Vector2D.tpp"
