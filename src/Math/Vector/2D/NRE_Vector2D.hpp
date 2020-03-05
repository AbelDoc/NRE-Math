
    /**
     * @file NRE_Vector2D.hpp
     * @brief Declaration of Math's API's Object : Vector2D
     * @author Louis ABEL
     * @date 27/03/2019
     * @copyright CC-BY-NC-SA
     */

    #pragma once

    #include <Utility/String/NRE_String.hpp>
    #include <Utility/Interfaces/Stringable/NRE_Stringable.hpp>
    #include "../../NRE_Math.hpp"

    #include <cassert>

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
             */
            template <class T>
            class Vector2D : public Utility::Stringable<Vector2D<T>> {
                private :   // Fields
                    T x = 0;    /**< x coordinate */
                    T y = 0;    /**< y coordinate */

                public :    // Methods
                    //## Constructor ##//
                        /**
                         * Construct the null vector
                         */
                        constexpr Vector2D() = default;
                        /**
                         * Construct a vector with passed values
                         * @param nX new x value
                         * @param nY new y value
                         */
                        template <class K, class L>
                        constexpr Vector2D(K nX, L nY);
                        /**
                         * Construct a vector with unique values
                         * @param value the new x and y values
                         */
                        template <class K>
                        constexpr Vector2D(K value);
                        /**
                         * Construct a vector from an initializer list
                         * @param list the construction list
                         */
                        constexpr Vector2D(std::initializer_list<T> list);

                    //## Copy-Constructor ##//
                        /**
                         * Copy u into this
                         * @param u the object to copy
                         */
                        constexpr Vector2D(Vector2D const& u) = default;

                    //## Move-Constructor ##//
                        /**
                         * Move u into this
                         * @param u the object to move
                         */
                        constexpr Vector2D(Vector2D && u) = default;

                    //## Convertor ##//
                        /**
                         * Convert a K-type vector into a T-type vector
                         * @param u the K-type vector to convert
                         */
                        template <class K>
                        constexpr Vector2D(Vector2D<K> const& u);
                        /**
                         * Convert a K-type 3D vector into a T-type 2D vector
                         * @param u the K-type 3D vector to convert
                         */
                        template <class K>
                        constexpr Vector2D(Vector3D<K> const& u);
                        /**
                         * Convert a K-type 4D vector into a T-type 2D vector
                         * @param u the K-type 4D vector to convert
                         */
                        template <class K>
                        constexpr Vector2D(Vector4D<K> const& u);

                    //## Deconstructor ##//
                        /**
                         * Vector2D Deconstructor
                         */
                        ~Vector2D() = default;

                    //## Getter ##//
                        /**
                         * @return the x value
                         */
                        constexpr T getX() const;
                        /**
                         * @return the x value
                         */
                        constexpr T getY() const;
                        /**
                         * @return the x value
                         */
                        constexpr T getW() const;
                        /**
                         * @return the y value
                         */
                        constexpr T getH() const;

                    //## Setter ##//
                        /**
                         * X setter
                         * @param nX the new value for x
                         */
                        template <class K>
                        constexpr void setX(K nX);
                        /**
                         * Y setter
                         * @param nY the new value for y
                         */
                        template <class K>
                        constexpr void setY(K nY);
                        /**
                         * X setter
                         * @param w the new value for x
                         */
                        template <class K>
                        constexpr void setW(K w);
                        /**
                         * Y setter
                         * @param h the new value for y
                         */
                        template <class K>
                        constexpr void setH(K h);
                        /**
                         * Set the values for both x and y
                         * @param nX the new value for x
                         * @param nY the new value for y
                         */
                        template <class K, class L>
                        constexpr void setCoord(K nX, L nY);
                        /**
                         * Set the values for both x and y
                         * @param w the new value for x
                         * @param h the new value for y
                         */
                        template <class K, class L>
                        constexpr void setSize(K w, L h);

                    //## Methods ##//
                        /**
                         * @return the vector's norm
                         */
                        long double norm() const;
                        /**
                         * @return the squared vector's norm
                         */
                        constexpr T normSquared() const;
                        /**
                         * @return the distance to another vector
                         */
                        template <class K>
                        long double distance(Vector2D<K> const& v) const;
                        /**
                         * @return the squared distance to another vector
                         */
                        template <class K>
                        constexpr std::common_type_t<T, K> distanceSquared(Vector2D<K> const& v) const;
                        /**
                         * Normalize the vector
                         * @return the reference of himself
                         */
                        Vector2D& normalize();
                        /**
                         * Limit the vector value to the given max, if to high then normalize it
                         * @param max the maximum value
                         */
                        template <class K>
                        void limit(K max);
                        /**
                         * Raise all components to the given power
                         * @param p the power to which to raise this
                         * @return  the reference of himself
                         */
                        template <class K>
                        Vector2D& pow(K p);
                        /**
                         * Raise all components to the given power vector
                         * @param p the set of power to which to raise this
                         * @return  the reference of himself
                         */
                        template <class K>
                        Vector2D& pow(Vector2D<K> const& p);
                        /**
                         * @return a pointer to the vector's data
                         */
                        constexpr const T* value() const;

                    //## Access Operator ##//
                        /**
                         * Return a reference on a vector's object
                         * @warning No range check performed
                         * @param   index the object's index
                         * @return        the object's reference
                         */
                        constexpr T& operator [](std::size_t index);
                        /**
                         * Return a const reference on a vector's object
                         * @warning No range check performed
                         * @param   index the object's index
                         * @return        the object's reference
                         */
                        constexpr T const& operator [](std::size_t index) const;

                    //## Assignment Operator ##//
                        /**
                         * Copy u into this
                         * @param u the object to copy into this
                         * @return  the reference of himself
                         */
                        constexpr Vector2D& operator =(Vector2D const& u) = default;
                        /**
                         * Move u into this
                         * @param u the object to move into this
                         * @return  the reference of himself
                         */
                        constexpr Vector2D& operator =(Vector2D && u) = default;
                        /**
                         * Copy u into this
                         * @param u the object to copy into this
                         * @return  the reference of himself
                         */
                        template <class K>
                        constexpr Vector2D& operator =(Vector2D<K> const& u);
                        /**
                         * Move u into this
                         * @param u the object to move into this
                         * @return  the reference of himself
                         */
                        template <class K>
                        constexpr Vector2D& operator =(Vector2D<K> && u);

                    //## Shortcut Operator ##//
                        /**
                         * Add a scalar to all components
                         * @param k the scalar to add
                         * @return  the reference of himself
                         */
                        template <class K>
                        constexpr Vector2D& operator +=(K k);
                        /**
                         * Add a vector into this
                         * @param u the vector to add into this
                         * @return  the reference of himself
                         */
                        template <class K>
                        constexpr Vector2D& operator +=(Vector2D<K> const& u);
                        /**
                         * Subtract a scalar to all components
                         * @param k the scalar to add
                         * @return  the reference of himself
                         */
                        template <class K>
                        constexpr Vector2D& operator -=(K k);
                        /**
                         * Subtract a vector into this
                         * @param u the vector to subtract into this
                         * @return  the reference of himself
                         */
                        template <class K>
                        constexpr Vector2D& operator -=(Vector2D<K> const& u);
                        /**
                         * Multiply this by a factor k
                         * @param k the multiplication factor
                         * @return  the reference of himself
                         */
                        template <class K>
                        constexpr Vector2D& operator *=(K k);
                        /**
                         * Multiply this by a vector u, component by component
                         * @param u the multiplication vector
                         * @return  the reference of himself
                         */
                        template <class K>
                        constexpr Vector2D& operator *=(Vector2D<K> const& u);
                        /**
                         * Divide this by a factor k
                         * @param k the division factor
                         * @return  the reference of himself
                         */
                        template <class K>
                        constexpr Vector2D& operator /=(K k);
                        /**
                         * Divide this by a vector u, component by component
                         * @param u the division vector
                         * @return  the reference of himself
                         */
                        template <class K>
                        constexpr Vector2D& operator /=(Vector2D<K> const& u);
                        /**
                         * Compute the scalar product between this and u
                         * @param u the vector
                         * @return  the scalar product
                         */
                        template <class K>
                        constexpr std::common_type_t<T, K> operator |=(Vector2D<K> const& u) const;

                    //## Arithmetic Operator ##//
                        /**
                         * Compute the vector resulting in the addition of k into this
                         * @param k the scalar to add
                         * @return  the computed vector
                         */
                        template <class K>
                        constexpr Vector2D<std::common_type_t<T, K>> operator +(K k) const;
                        /**
                         * Compute the vector resulting in the addition of u into this
                         * @param u the vector to add
                         * @return  the computed vector
                         */
                        template <class K>
                        constexpr Vector2D<std::common_type_t<T, K>> operator +(Vector2D<K> const& u) const;
                        /**
                         * Compute the vector resulting in the subtraction of k into this
                         * @param k the scalar to add
                         * @return  the computed vector
                         */
                        template <class K>
                        constexpr Vector2D<std::common_type_t<T, K>> operator -(K k) const;
                        /**
                         * Compute the vector resulting in the subtraction of u into this
                         * @param u the vector to subtract
                         * @return  the computed vector
                         */
                        template <class K>
                        constexpr Vector2D<std::common_type_t<T, K>> operator -(Vector2D<K> const& u) const;
                        /**
                         * Compute the opposite version of this
                         * @return the opposite vector
                         */
                        constexpr Vector2D operator -() const;
                        /**
                         * Compute the vector resulting in the multiplication of this by k
                         * @param k the multiplication factor
                         * @return  the computed vector
                         */
                        template <class K>
                        constexpr Vector2D<std::common_type_t<T, K>> operator *(K k) const;
                        /**
                         * Compute the vector resulting in the multiplication of this by u
                         * @param u the multiplication vector
                         * @return  the computed vector
                         */
                        template <class K>
                        constexpr Vector2D<std::common_type_t<T, K>> operator *(Vector2D<K> const& u) const;
                        /**
                         * Compute the vector resulting in the division of this by k
                         * @param k the division factor
                         * @return  the computed vector
                         */
                        template <class K>
                        constexpr Vector2D<std::common_type_t<T, K>> operator /(K k) const;
                        /**
                         * Compute the vector resulting in the division of this by u
                         * @param u the division vector
                         * @return  the computed vector
                         */
                        template <class K>
                        constexpr Vector2D<std::common_type_t<T, K>> operator /(Vector2D<K> const& u) const;
                        /**
                         * Compute the scalar product between this and u
                         * @param u the vector
                         * @return  the scalar product
                         */
                        template <class K>
                        constexpr std::common_type_t<T, K> operator |(Vector2D<K> const& u) const;

                    //## Comparison Operator ##//
                        /**
                         * Equality test between this and u
                         * @param u the vector to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        constexpr bool operator ==(Vector2D<K> const& u) const;
                        /**
                         * Difference test between this and u
                         * @param u the vector to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        constexpr bool operator !=(Vector2D<K> const& u) const;
                        /**
                         * Inferior test between this and u
                         * @param u the vector to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        constexpr bool operator <(Vector2D<K> const& u) const;
                        /**
                         * Superior test between this and u
                         * @param u the vector to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        constexpr bool operator >(Vector2D<K> const& u) const;
                        /**
                         * Inferior or Equal test between this and u
                         * @param u the vector to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        constexpr bool operator <=(Vector2D<K> const& u) const;
                        /**
                         * Superior or Equal test between this and u
                         * @param u the vector to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        constexpr bool operator >=(Vector2D<K> const& u) const;

                    //## Stream Operator ##//
                        /**
                         * Convert the vector into a string
                         * @return the converted vector
                         */
                        Utility::String toString() const;
            };
    
            /**
             * Compute the vector resulting in the multiplication of u by k
             * @param u the vector
             * @param k the multiplication factor
             * @return  the computed vector
             */
            template <class T, class K, typename = std::enable_if_t<std::is_arithmetic<K>::value>>
            constexpr Vector2D<std::common_type_t<T, K>> operator *(K k, Vector2D<T> const& u) {
                return u * k;
            }
            /**
             * Return a normalized version of the given vector
             * @param u the vector to normalize
             * @return  the normalized vector
             */
            template <class T>
            Vector2D<T> normalize(Vector2D<T> const& u);
            /**
             * Return a vector with components raised to the given power
             * @param u the vector to raise
             * @param k the power to which to raise the vector
             * @return  the raised vector
             */
            template <class T, class K>
            Vector2D<std::common_type_t<T, K>> pow(Vector2D<T> const& u, K k);
            /**
             * Return a vector with components raised to the given power
             * @param u the vector to raise
             * @param p the power to which to raise the vector
             * @return  the raised vector
             */
            template <class T, class K>
            Vector2D<std::common_type_t<T, K>> pow(Vector2D<T> const& u, Vector2D<K> const& p);
            /**
             * Reflect the given incidence vector with the given normal
             * @param u the vector to reflect
             * @param n the normal
             * @return  the reflected vector
             */
            template <class T, class K>
            constexpr Vector2D<std::common_type_t<T, K>> reflect(Vector2D<T> const& u, Vector2D<K> const& n);

            template <class T>
            using Point2D = Vector2D<T>;
        }
    }

    /**
    * @namespace std
    * @brief The stl standard namespace
    */
    namespace std {
        template <class T, class K>
        struct common_type<NRE::Math::Vector2D<T>, NRE::Math::Vector2D<K>> {
            using type = NRE::Math::Vector2D<common_type_t<T, K>>;
        };
    }

    #include "NRE_Vector2D.tpp"
