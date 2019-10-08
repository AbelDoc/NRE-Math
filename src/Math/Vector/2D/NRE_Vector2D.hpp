
    /**
     * @file NRE_Vector2D.hpp
     * @brief Declaration of Math's API's Object : Vector2D
     * @author Louis ABEL
     * @date 27/03/2019
     * @copyright CC-BY-NC-SA
     */

    #pragma once

    #include <Utility/String/NRE_String.hpp>
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
            template<class> class Vector4D;

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
                        template <class K, class L>
                        Vector2D(K nX, L nY);
                        /**
                         * Construct a vector with unique values
                         * @param value the new x and y values
                         */
                        template <class K>
                        Vector2D(K value);

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
                        /**
                         * Convert a K-type 4D vector into a T-type 2D vector
                         * @param u the K-type 4D vector to convert
                         */
                        template <class K>
                        Vector2D(Vector4D<K> const& u);

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
                        template <class K>
                        void setX(K nX);
                        /**
                         * Y setter
                         * @param nY the new value for y
                         */
                        template <class K>
                        void setY(K nY);
                        /**
                         * X setter
                         * @param w the new value for x
                         */
                        template <class K>
                        void setW(K w);
                        /**
                         * Y setter
                         * @param h the new value for y
                         */
                        template <class K>
                        void setH(K h);
                        /**
                         * Set the values for both x and y
                         * @param nX the new value for x
                         * @param nY the new value for y
                         */
                        template <class K, class L>
                        void setCoord(K nX, L nY);
                        /**
                         * Set the values for both x and y
                         * @param w the new value for x
                         * @param h the new value for y
                         */
                        template <class K, class L>
                        void setSize(K w, L h);

                    //## Methods ##//
                        /**
                         * @return the vector's norm
                         */
                        long double norm() const;
                        /**
                         * @return the squared vector's norm
                         */
                        long double normSquared() const;
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
                        /**
                         * Copy u into this
                         * @param u the object to copy into this
                         * @return  the reference of himself
                         */
                        template <class K>
                        Vector2D& operator =(Vector2D<K> const& u);
                        /**
                         * Move u into this
                         * @param u the object to move into this
                         * @return  the reference of himself
                         */
                        template <class K>
                        Vector2D& operator =(Vector2D<K> && u);

                    //## Shortcut Operator ##//
                        /**
                         * Add a vector into this
                         * @param u the vector to add into this
                         * @return  the reference of himself
                         */
                        template <class K>
                        Vector2D& operator +=(Vector2D<K> const& u);
                        /**
                         * Subtract a vector into this
                         * @param u the vector to subtract into this
                         * @return  the reference of himself
                         */
                        template <class K>
                        Vector2D& operator -=(Vector2D<K> const& u);
                        /**
                         * Multiply this by a factor k
                         * @param k the multiplication factor
                         * @return  the reference of himself
                         */
                        template <class K>
                        Vector2D& operator *=(K k);
                        /**
                         * Multiply this by a vector u, component by component
                         * @param u the multiplication vector
                         * @return  the reference of himself
                         */
                        template <class K>
                        Vector2D& operator *=(Vector2D<K> const& u);
                        /**
                         * Divide this by a factor k
                         * @param k the division factor
                         * @return  the reference of himself
                         */
                        template <class K>
                        Vector2D& operator /=(K k);
                        /**
                         * Divide this by a vector u, component by component
                         * @param u the division vector
                         * @return  the reference of himself
                         */
                        template <class K>
                        Vector2D& operator /=(Vector2D<K> const& u);
                        /**
                         * Compute the scalar product between this and u
                         * @param u the vector
                         * @return  the scalar product
                         */
                        template <class K>
                        std::common_type_t<T, K> operator |=(Vector2D<K> const& u) const;

                    //## Arithmetic Operator ##//
                        /**
                         * Compute the vector resulting in the addition of u into this
                         * @param u the vector to add
                         * @return  the computed vector
                         */
                        template <class K>
                        Vector2D<std::common_type_t<T, K>> operator +(Vector2D<K> const& u) const;
                        /**
                         * Compute the vector resulting in the subtraction of u into this
                         * @param u the vector to subtract
                         * @return  the computed vector
                         */
                        template <class K>
                        Vector2D<std::common_type_t<T, K>> operator -(Vector2D<K> const& u) const;
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
                        template <class K>
                        Vector2D<std::common_type_t<T, K>> operator *(K k) const;
                        /**
                         * Compute the vector resulting in the multiplication of this by u
                         * @param u the multiplication vector
                         * @return  the computed vector
                         */
                        template <class K>
                        Vector2D<std::common_type_t<T, K>> operator *(Vector2D<K> const& u) const;
                        /**
                         * Compute the vector resulting in the division of this by k
                         * @param k the division factor
                         * @return  the computed vector
                         */
                        template <class K>
                        Vector2D<std::common_type_t<T, K>> operator /(K k) const;
                        /**
                         * Compute the vector resulting in the division of this by u
                         * @param u the division vector
                         * @return  the computed vector
                         */
                        template <class K>
                        Vector2D<std::common_type_t<T, K>> operator /(Vector2D<K> const& u) const;
                        /**
                         * Compute the scalar product between this and u
                         * @param u the vector
                         * @return  the scalar product
                         */
                        template <class K>
                        std::common_type_t<T, K> operator |(Vector2D<K> const& u) const;

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
                        Utility::String toString() const;
            };

            template <class T>
            using Point2D = Vector2D<T>;

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
