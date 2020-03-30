
    /**
     * @file NRE_Vector4D.hpp
     * @brief Declaration of Math's API's Object : Vector4D
     * @author Louis ABEL
     * @date 27/03/2019
     * @copyright CC-BY-NC-SA
     */

     #pragma once

    #include <type_traits>
    #include <ostream>

    #include <Utility/String/NRE_String.hpp>
    #include <Utility/Interfaces/Stringable/NRE_Stringable.hpp>
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

            template<class> class Vector2D;
            template<class> class Vector3D;

            /**
             * @class Vector4D
             * @brief A cartesian 4D vector, 3D homogeneous
             */
            template <class T>
            class Vector4D : public Utility::Stringable<Vector4D<T>> {
                static_assert(ArithmeticCheckerV<T>); /**< Limit Vector4D to arithmetic types only aka float, int, ... */
                
                private :   //Fields
                    T x = 0;    /**< x coordinate */
                    T y = 0;    /**< y coordinate */
                    T z = 0;    /**< z coordinate */
                    T w = 0;    /**< w coordinate */

                public:    // Methods
                    //## Constructor ##//
                        /**
                         * Construct the null vector
                         */
                        constexpr Vector4D() = default;
                        /**
                         * Construct a vector with passed values
                         * @param nX new x value
                         * @param nY new y value
                         * @param nZ new z value
                         * @param nW new w value
                         */
                        template <class K, class L, class N, class M, typename = UseIfArithmetic<K, L, N, M>>
                        constexpr Vector4D(K nX, L nY, N nZ, M nW) : x(static_cast <T> (nX)), y(static_cast <T> (nY)), z(static_cast <T> (nZ)), w(static_cast <T> (nW)) {
                        }
                        /**
                         * Construct a vector with an unique value for all coordinates
                         * @param value new x, y, z and w values
                         */
                        template <class K, typename = UseIfArithmetic<K>>
                        constexpr Vector4D(K value) : Vector4D(value, value, value, value) {
                        }
                        /**
                         * Construct a vector from an initializer list
                         * @param list the construction list
                         */
                        constexpr Vector4D(std::initializer_list<T> list);

                    //## Copy-Constructor ##//
                        /**
                         * Copy u into this
                         * @param u the object to copy
                         */
                        constexpr Vector4D(Vector4D const& u) = default;

                    //## Move-Constructor ##//
                        /**
                         * Move u into this
                         * @param u the object to move
                         */
                        constexpr Vector4D(Vector4D && u) = default;

                    //## Convertor ##//
                        /**
                         * Convert a K-type vector into a T-type vector
                         * @param u the K-type vector to convert
                         */
                        template <class K>
                        constexpr Vector4D(Vector4D<K> const& u);
                        /**
                         * Convert a base 2D vector into a 4D vector with a default z and w value
                         * @param u the 2D vector to convert
                         */
                        template <class K>
                        constexpr Vector4D(Vector2D<K> const& u);
                        /**
                         * Convert a base 2D vector into a 4D vector with a passed z and w value
                         * @param u the 2D vector to convert
                         * @param nZ the new z value
                         * @param nW the new w value
                         */
                        template <class K, class L, class N, typename = UseIfArithmetic<L, N>>
                        constexpr Vector4D(Vector2D<K> const& u, L nZ, N nW) : Vector4D(u.getX(), u.getY(), nZ, nW) {
                        }
                        /**
                         * Convert a base 3D vector into a 4D vector with a default w value
                         * @param u the 4D vector to convert
                         */
                        template <class K>
                        constexpr Vector4D(Vector3D<K> const& u);
                        /**
                         * Convert a base 3D vector into a 4D point with a passed w value
                         * @param u the 4D vector to convert
                         * @param nW the new w value
                         */
                        template <class K, class L, typename = UseIfArithmetic<L>>
                        constexpr Vector4D(Vector3D<K> const& u, L nW) : Vector4D(u.getX(), u.getY(), u.getZ(), nW) {
                        }

                    //## Deconstructor ##//
                        /**
                         * Vector4D Deconstructor
                         */
                        ~Vector4D() = default;

                    //## Getter ##//
                        /**
                         * @return the x value
                         */
                        constexpr T getX() const;
                        /**
                         * @return the y value
                         */
                        constexpr T getY() const;
                        /**
                         * @return the z value
                         */
                        constexpr T getZ() const;
                        /**
                         * @return the w value
                         */
                        constexpr T getW() const;
                        /**
                         * @return the x value
                         */
                        constexpr T getR() const;
                        /**
                         * @return the y value
                         */
                        constexpr T getG() const;
                        /**
                         * @return the z value
                         */
                        constexpr T getB() const;
                        /**
                         * @return the w value
                         */
                        constexpr T getA() const;

                    //## Setter ##//
                        /**
                         * X setter
                         * @param nX the new value for x
                         */
                        template <class K, typename = UseIfArithmetic<K>>
                        constexpr void setX(K nX) {
                            x = static_cast <T> (nX);
                        }
                        /**
                         * Y setter
                         * @param nY the new value for y
                         */
                        template <class K, typename = UseIfArithmetic<K>>
                        constexpr void setY(K nY) {
                            y = static_cast <T> (nY);
                        }
                        /**
                         * Z setter
                         * @param nZ the new value for z
                         */
                        template <class K, typename = UseIfArithmetic<K>>
                        constexpr void setZ(K nZ) {
                            z = static_cast <T> (nZ);
                        }
                        /**
                         * W setter
                         * @param nW the new value for w
                         */
                        template <class K, typename = UseIfArithmetic<K>>
                        constexpr void setW(K nW) {
                            w = static_cast <T> (nW);
                        }
                        /**
                         * X setter
                         * @param r the new value for x
                         */
                        template <class K, typename = UseIfArithmetic<K>>
                        constexpr void setR(K r) {
                            setX(r);
                        }
                        /**
                         * Y setter
                         * @param g the new value for y
                         */
                        template <class K, typename = UseIfArithmetic<K>>
                        constexpr void setG(K g) {
                            setY(g);
                        }
                        /**
                         * Z setter
                         * @param b the new value for z
                         */
                        template <class K, typename = UseIfArithmetic<K>>
                        constexpr void setB(K b) {
                            setZ(b);
                        }
                        /**
                         * W setter
                         * @param a the new value for w
                         */
                        template <class K, typename = UseIfArithmetic<K>>
                        constexpr void setA(K a) {
                            setW(a);
                        }
                        /**
                         * Set the values for x, y, z and w
                         * @param nX the new value for x
                         * @param nY the new value for y
                         * @param nZ the new value for z
                         * @param nW the new value for w
                         */
                        template <class K, class L, class N, class M, typename = UseIfArithmetic<K, L, N, M>>
                        constexpr void setCoord(K nX, L nY, N nZ, M nW) {
                            setX(nX);
                            setY(nY);
                            setZ(nZ);
                            setW(nW);
                        }
                        /**
                         * Set the values for x, y, z and w with a base 2D vector
                         * @param u the base 2D vector for x and y values
                         * @param nZ the new value for z
                         * @param nW the new value for w
                         */
                        template <class K, class L, class N, typename = UseIfArithmetic<L, N>>
                        constexpr void setCoord(Vector2D<K> const& u, L nZ, N nW) {
                            setX(u.getX());
                            setY(u.getY());
                            setZ(nZ);
                            setW(nW);
                        }
                        /**
                         * Set the values for x, y, z and w with a base 3D vector
                         * @param u the base 3D vector for x, y and z values
                         * @param nW the new value for w
                         */
                        template <class K, class L, typename = UseIfArithmetic<L>>
                        constexpr void setCoord(Vector3D<K> const& u, L nW) {
                            setX(u.getX());
                            setY(u.getY());
                            setZ(u.getZ());
                            setW(nW);
                        }
                        /**
                         * Set the values for x, y, z and w
                         * @param r the new value for x
                         * @param g the new value for y
                         * @param b the new value for z
                         * @param a the new value for w
                         */
                        template <class K, class L, class N, class M, typename = UseIfArithmetic<K, L, N, M>>
                        constexpr void setRGBA(K r, L g, N b, M a) {
                            setX(r);
                            setY(g);
                            setZ(b);
                            setW(a);
                        }
                        /**
                         * Set the values for x, y, z and w with a base 3D vector
                         * @param u the base 3D vector for x, y and z values
                         * @param a the new value for w
                         */
                        template <class K, class L, typename = UseIfArithmetic<L>>
                        constexpr void setRGBA(Vector3D<K> const& u, L a) {
                            setX(u.getX());
                            setY(u.getY());
                            setZ(u.getZ());
                            setW(a);
                        }

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
                        long double distance(Vector4D<K> const& v) const;
                        /**
                         * @return the squared distance to another vector
                         */
                        template <class K>
                        constexpr std::common_type_t<T, K> distanceSquared(Vector4D<K> const& v) const;
                        /**
                         * Normalize the vector
                         * @return the reference of himself
                         */
                        Vector4D& normalize();
                        /**
                         * Limit the vector value to the given max, if to high then normalize it
                         * @param max the maximum value
                         */
                        template <class K, typename = UseIfArithmetic<K>>
                        void limit(K max) {
                            auto n = norm();
                            if (n > max) {
                                normalize();
                            }
                        }
                        /**
                         * Raise all components to the given power
                         * @param p the power to which to raise this
                         * @return  the reference of himself
                         */
                        template <class K, typename = UseIfArithmetic<K>>
                        Vector4D& pow(K p) {
                            setX(std::pow(static_cast <std::common_type_t<T, K>> (x), static_cast <std::common_type_t<T, K>> (p)));
                            setY(std::pow(static_cast <std::common_type_t<T, K>> (y), static_cast <std::common_type_t<T, K>> (p)));
                            setZ(std::pow(static_cast <std::common_type_t<T, K>> (z), static_cast <std::common_type_t<T, K>> (p)));
                            setW(std::pow(static_cast <std::common_type_t<T, K>> (w), static_cast <std::common_type_t<T, K>> (p)));
                            return *this;
                        }
                        /**
                         * Raise all components to the given power vector
                         * @param p the set of power to which to raise this
                         * @return  the reference of himself
                         */
                        template <class K>
                        Vector4D& pow(Vector4D<K> const& p);
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
                        constexpr Vector4D& operator =(Vector4D const& u) = default;
                        /**
                         * Move u into this
                         * @param u the object to move into this
                         * @return  the reference of himself
                         */
                        constexpr Vector4D& operator =(Vector4D && u) = default;
                        /**
                         * Copy u into this
                         * @param u the object to copy into this
                         * @return  the reference of himself
                         */
                        template <class K>
                        constexpr Vector4D& operator =(Vector4D<K> const& u);
                        /**
                         * Move u into this
                         * @param u the object to move into this
                         * @return  the reference of himself
                         */
                        template <class K>
                        constexpr Vector4D& operator =(Vector4D<K> && u);

                    //## Shortcut Operator ##//
                        /**
                         * Add a scalar to all components
                         * @param k the scalar to add
                         * @return  the reference of himself
                         */
                        template <class K, typename = UseIfArithmetic<K>>
                        constexpr Vector4D& operator +=(K k) {
                            setX(static_cast <std::common_type_t<T, K>> (x) + static_cast <std::common_type_t<T, K>> (k));
                            setY(static_cast <std::common_type_t<T, K>> (y) + static_cast <std::common_type_t<T, K>> (k));
                            setZ(static_cast <std::common_type_t<T, K>> (z) + static_cast <std::common_type_t<T, K>> (k));
                            setW(static_cast <std::common_type_t<T, K>> (w) + static_cast <std::common_type_t<T, K>> (k));
                            return *this;
                        }
                        /**
                         * Add a vector into this
                         * @param u the vector to add into this
                         * @return  the reference of himself
                         */
                        template <class K>
                        constexpr Vector4D& operator +=(Vector4D<K> const& u);
                        /**
                         * Subtract a scalar to all components
                         * @param k the scalar to add
                         * @return  the reference of himself
                         */
                        template <class K, typename = UseIfArithmetic<K>>
                        constexpr Vector4D& operator -=(K k) {
                            setX(static_cast <std::common_type_t<T, K>> (x) - static_cast <std::common_type_t<T, K>> (k));
                            setY(static_cast <std::common_type_t<T, K>> (y) - static_cast <std::common_type_t<T, K>> (k));
                            setZ(static_cast <std::common_type_t<T, K>> (z) - static_cast <std::common_type_t<T, K>> (k));
                            setW(static_cast <std::common_type_t<T, K>> (w) - static_cast <std::common_type_t<T, K>> (k));
                            return *this;
                        }
                        /**
                         * Subtract a vector into this
                         * @param u the vector to subtract into this
                         * @return  the reference of himself
                         */
                        template <class K>
                        constexpr Vector4D& operator -=(Vector4D<K> const& u);
                        /**
                         * Multiply this by a factor k
                         * @param k the multiplication factor
                         * @return  the reference of himself
                         */
                        template <class K, typename = UseIfArithmetic<K>>
                        constexpr Vector4D& operator *=(K k) {
                            setX(static_cast <std::common_type_t<T, K>> (x) * static_cast <std::common_type_t<T, K>> (k));
                            setY(static_cast <std::common_type_t<T, K>> (y) * static_cast <std::common_type_t<T, K>> (k));
                            setZ(static_cast <std::common_type_t<T, K>> (z) * static_cast <std::common_type_t<T, K>> (k));
                            setW(static_cast <std::common_type_t<T, K>> (w) * static_cast <std::common_type_t<T, K>> (k));
                            return *this;
                        }
                        /**
                         * Multiply this by a vector u, component by component
                         * @param u the multiplication vector
                         * @return  the reference of himself
                         */
                        template <class K>
                        constexpr Vector4D& operator *=(Vector4D<K> const& u);
                        /**
                         * Divide this by a factor k
                         * @param k the division factor
                         * @return  the reference of himself
                         */
                        template <class K, typename = UseIfArithmetic<K>>
                        constexpr Vector4D& operator /=(K k) {
                            setX(static_cast <std::common_type_t<T, K>> (x) / static_cast <std::common_type_t<T, K>> (k));
                            setY(static_cast <std::common_type_t<T, K>> (y) / static_cast <std::common_type_t<T, K>> (k));
                            setZ(static_cast <std::common_type_t<T, K>> (z) / static_cast <std::common_type_t<T, K>> (k));
                            setW(static_cast <std::common_type_t<T, K>> (w) / static_cast <std::common_type_t<T, K>> (k));
                            return *this;
                        }
                        /**
                         * Divide this by a vector u, component by component
                         * @param u the division vector
                         * @return  the reference of himself
                         */
                        template <class K>
                        constexpr Vector4D& operator /=(Vector4D<K> const& u);
                        /**
                         * Compute the scalar product between this and u
                         * @param u the vector
                         * @return  the scalar product
                         */
                        template <class K>
                        constexpr std::common_type_t<T, K> operator |=(Vector4D<K> const& u) const;
                        /**
                         * Replace this by the cross product between this and u
                         * @param u the vector
                         * @return  the reference of himself
                         */
                        template <class K>
                        constexpr Vector4D& operator ^=(Vector4D<K> const& u);

                    //## Arithmetic Operator ##//
                        /**
                         * Compute the vector resulting in the addition of k into this
                         * @param k the scalar to add
                         * @return  the computed vector
                         */
                        template <class K, typename = UseIfArithmetic<K>>
                        constexpr Vector4D<std::common_type_t<T, K>> operator +(K k) const {
                            return Vector4D<std::common_type_t<T, K>>(*this) += k;
                        }
                        /**
                         * Compute the vector resulting in the addition of u into this
                         * @param u the vector to add
                         * @return  the computed vector
                         */
                        template <class K>
                        constexpr Vector4D<std::common_type_t<T, K>> operator +(Vector4D<K> const& u) const;
                        /**
                         * Compute the vector resulting in the subtraction of k into this
                         * @param k the scalar to subtract
                         * @return  the computed vector
                         */
                        template <class K, typename = UseIfArithmetic<K>>
                        constexpr Vector4D<std::common_type_t<T, K>> operator -(K k) const {
                            return Vector4D<std::common_type_t<T, K>>(*this) -= k;
                        }
                        /**
                         * Compute the vector resulting in the subtraction of u into this
                         * @param u the vector to subtract
                         * @return  the computed vector
                         */
                        template <class K>
                        constexpr Vector4D<std::common_type_t<T, K>> operator -(Vector4D<K> const& u) const;
                        /**
                         * Compute the opposite version of this
                         * @return the opposite vector
                         */
                        constexpr Vector4D operator -() const;
                        /**
                         * Compute the vector resulting in the multiplication of this by k
                         * @param k the multiplication factor
                         * @return  the computed vector
                         */
                        template <class K, typename = UseIfArithmetic<K>>
                        constexpr Vector4D<std::common_type_t<T, K>> operator *(K k) const {
                            return Vector4D<std::common_type_t<T, K>>(*this) *= k;
                        }
                        /**
                         * Compute the vector resulting in the multiplication of this by u
                         * @param u the multiplication vector
                         * @return  the computed vector
                         */
                        template <class K>
                        constexpr Vector4D<std::common_type_t<T, K>> operator *(Vector4D<K> const& u) const;
                        /**
                         * Compute the vector resulting in the division of this by k
                         * @param k the division factor
                         * @return  the computed vector
                         */
                        template <class K, typename = UseIfArithmetic<K>>
                        constexpr Vector4D<std::common_type_t<T, K>> operator /(K k) const {
                            return Vector4D<std::common_type_t<T, K>>(*this) /= k;
                        }
                        /**
                         * Compute the vector resulting in the division of this by u
                         * @param u the division vector
                         * @return  the computed vector
                         */
                        template <class K>
                        constexpr Vector4D<std::common_type_t<T, K>> operator /(Vector4D<K> const& u) const;
                        /**
                         * Compute the scalar product between this and u
                         * @param u the vector
                         * @return  the scalar product
                         */
                        template <class K>
                        constexpr std::common_type_t<T, K> operator |(Vector4D<K> const& u) const;
                        /**
                         * Compute the vector resulting in the cross product of this and u
                         * @param u the vector
                         * @return  the computed vector
                         */
                        template <class K>
                        constexpr  Vector4D<std::common_type_t<T, K>> operator ^(Vector4D<K> const& u) const;

                    //## Comparison Operator ##//
                        /**
                         * Equality test between this and u
                         * @param u the vector to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        constexpr bool operator ==(Vector4D<K> const& u) const;
                        /**
                         * Difference test between this and u
                         * @param u the vector to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        constexpr bool operator !=(Vector4D<K> const& u) const;
                        /**
                         * Inferior test between this and u
                         * @param u the vector to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        constexpr bool operator <(Vector4D<K> const& u) const;
                        /**
                         * Superior test between this and u
                         * @param u the vector to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        constexpr bool operator >(Vector4D<K> const& u) const;
                        /**
                         * Inferior or Equal test between this and u
                         * @param u the vector to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        constexpr bool operator <=(Vector4D<K> const& u) const;
                        /**
                         * Superior or Equal test between this and u
                         * @param u the vector to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        constexpr bool operator >=(Vector4D<K> const& u) const;

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
            template <class T, class K, typename = UseIfArithmetic<K>>
            constexpr Vector4D<std::common_type_t<T, K>> operator *(K k, Vector4D<T> const& u) {
                return u * k;
            }
            /**
             * Return a normalized version of the given vector
             * @param u the vector to normalize
             * @return  the normalized vector
             */
            template <class T>
            Vector4D<T> normalize(Vector4D<T> const& u);
            /**
             * Return a vector with components raised to the given power
             * @param u the vector to raise
             * @param k the power to which to raise the vector
             * @return  the raised vector
             */
            template <class T, class K, typename = UseIfArithmetic<K>>
            Vector4D<std::common_type_t<T, K>> pow(Vector4D<T> const& u, K k) {
                return Vector4D<std::common_type_t<T, K>>(u).pow(k);
            }
            /**
             * Return a vector with components raised to the given power
             * @param u the vector to raise
             * @param p the power to which to raise the vector
             * @return  the raised vector
             */
            template <class T, class K>
            Vector4D<std::common_type_t<T, K>> pow(Vector4D<T> const& u, Vector4D<K> const& p);
            /**
             * Reflect the given incidence vector with the given normal
             * @param u the vector to reflect
             * @param n the normal
             * @return  the reflected vector
             */
            template <class T, class K>
            constexpr Vector4D<std::common_type_t<T, K>> reflect(Vector4D<T> const& u, Vector4D<K> const& n);
    
            /** Simple alias for point declaration */
            template <class T>
            using Point4D = Vector4D<T>;
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
        struct common_type<NRE::Math::Vector4D<T>, NRE::Math::Vector4D<K>> {
            /** Define underlying common_type */
            using type = NRE::Math::Vector4D<common_type_t < T, K>>;
        };
    }

    #include "NRE_Vector4D.tpp"
