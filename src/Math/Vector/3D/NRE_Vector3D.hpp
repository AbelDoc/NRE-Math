
    /**
     * @file NRE_Vector3D.hpp
     * @brief Declaration of Math's API's Object : Vector3D
     * @author Louis ABEL
     * @date 27/03/2019
     * @copyright CC-BY-NC-SA
     */

     #pragma once

     #include <Core/String/NRE_String.hpp>
     #include <Core/Interfaces/Stringable/NRE_Stringable.hpp>
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
            template<class> class Vector4D;

            /**
             * @class Vector3D
             * @brief A cartesian 3D vector, 2D homogeneous
             */
            template <class T>
            class Vector3D : public Core::Stringable<Vector3D<T>> {
                static_assert(ArithmeticCheckerV<T>); /**< Limit Vector3D to arithmetic types only aka float, int, ... */
                
                private :   //Fields
                    T x = 0;    /**< x coordinate */
                    T y = 0;    /**< y coordinate */
                    T z = 0;    /**< z coordinate */

                public :    // Methods
                    //## Constructor ##//
                        /**
                         * Construct the null vector
                         */
                        constexpr Vector3D() = default;
                        /**
                         * Construct a vector with passed values
                         * @param nX new x value
                         * @param nY new y value
                         * @param nZ new z value
                         */
                        template <class K, class L, class N, typename = UseIfArithmetic<K, L, N>>
                        constexpr Vector3D(K nX, L nY, N nZ) : x(static_cast <T> (nX)), y(static_cast <T> (nY)), z(static_cast <T> (nZ)) {
                        }
                        /**
                         * Construct a vector with an unique value for all coordinates
                         * @param value new x, y and z values
                         */
                        template <class K, typename = UseIfArithmetic<K>>
                        constexpr Vector3D(K value) : Vector3D(value, value, value) {
                        }
                        /**
                         * Construct a vector from an initializer list
                         * @param list the construction list
                         */
                        constexpr Vector3D(std::initializer_list<T> list);

                    //## Copy-Constructor ##//
                        /**
                         * Copy u into this
                         * @param u the object to copy
                         */
                        constexpr Vector3D(Vector3D const& u) = default;

                    //## Move-Constructor ##//
                        /**
                         * Move u into this
                         * @param u the object to move
                         */
                        constexpr Vector3D(Vector3D && u) = default;

                    //## Convertor ##//
                        /**
                         * Convert a K-type vector into a T-type vector
                         * @param u the K-type vector to convert
                         */
                        template <class K>
                        constexpr Vector3D(Vector3D<K> const& u);
                        /**
                         * Convert a 2D vector into a 3D vector with a default z value
                         * @param u the 2D vector to convert
                         */
                        template <class K>
                        constexpr Vector3D(Vector2D<K> const& u);
                        /**
                         * Convert a K-type 4D vector into a T-type 3D vector
                         * @param u the K-type 4D vector to convert
                         */
                        template <class K>
                        constexpr Vector3D(Vector4D<K> const& u);
                        /**
                         * Convert a 2D vector into a 3D point with a passed z value
                         * @param u  the 2D vector to convert
                         * @param nZ the new z value
                         */
                        template <class K, class L, typename = UseIfArithmetic<L>>
                        constexpr Vector3D(Vector2D<K> const& u, L nZ) : Vector3D(u.getX(), u.getY(), nZ) {
                        }

                    //## Deconstructor ##//
                        /**
                         * Vector3D Deconstructor
                         */
                        ~Vector3D() = default;

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
                         * Set the values for x, y and z
                         * @param nX the new value for x
                         * @param nY the new value for y
                         * @param nZ the new value for z
                         */
                        template <class K, class L, class N, typename = UseIfArithmetic<K, L, N>>
                        constexpr void setCoord(K nX, L nY, N nZ) {
                            setX(nX);
                            setY(nY);
                            setZ(nZ);
                        }
                        /**
                         * Set the values for x, y and z with a base 2D vector
                         * @param u the base 2D vector for x and y values
                         * @param nZ the new value for z
                         */
                        template <class K, class L, typename = UseIfArithmetic<L>>
                        constexpr void setCoord(Vector2D<K> const& u, L nZ) {
                            setX(u.getX());
                            setY(u.getY());
                            setZ(nZ);
                        }
                        /**
                         * Set the values for x, y and z
                         * @param r the new value for x
                         * @param g the new value for y
                         * @param b the new value for z
                         */
                        template <class K, class L, class N, typename = UseIfArithmetic<K, L, N>>
                        constexpr void setRGB(K r, L g, N b) {
                            setR(r);
                            setG(g);
                            setB(b);
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
                        long double distance(Vector3D<K> const& v) const;
                        /**
                         * @return the squared distance to another vector
                         */
                        template <class K>
                        constexpr std::common_type_t<T, K> distanceSquared(Vector3D<K> const& v) const;
                        /**
                         * Normalize the vector
                         * @return the reference of himself
                         */
                        Vector3D& normalize();
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
                        Vector3D& pow(K p) {
                            setX(std::pow(static_cast <std::common_type_t<T, K>> (x), static_cast <std::common_type_t<T, K>> (p)));
                            setY(std::pow(static_cast <std::common_type_t<T, K>> (y), static_cast <std::common_type_t<T, K>> (p)));
                            setZ(std::pow(static_cast <std::common_type_t<T, K>> (z), static_cast <std::common_type_t<T, K>> (p)));
                            return *this;
                        }
                        /**
                         * Raise all components to the given power vector
                         * @param p the set of power to which to raise this
                         * @return  the reference of himself
                         */
                        template <class K>
                        Vector3D& pow(Vector3D<K> const& p);
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
                        constexpr Vector3D& operator =(Vector3D const& u) = default;
                        /**
                         * Move u into this
                         * @param u the object to move into this
                         * @return  the reference of himself
                         */
                        constexpr Vector3D& operator =(Vector3D && u) = default;
                        /**
                         * Copy u into this
                         * @param u the object to copy into this
                         * @return  the reference of himself
                         */
                        template <class K>
                        constexpr Vector3D& operator =(Vector3D<K> const& u);
                        /**
                         * Move u into this
                         * @param u the object to move into this
                         * @return  the reference of himself
                         */
                        template <class K>
                        constexpr Vector3D& operator =(Vector3D<K> && u);

                    //## Shortcut Operator ##//
                        /**
                         * Add a scalar to all components
                         * @param k the scalar to add
                         * @return  the reference of himself
                         */
                        template <class K, typename = UseIfArithmetic<K>>
                        constexpr Vector3D& operator +=(K k) {
                            setX(static_cast <std::common_type_t<T, K>> (x) + static_cast <std::common_type_t<T, K>> (k));
                            setY(static_cast <std::common_type_t<T, K>> (y) + static_cast <std::common_type_t<T, K>> (k));
                            setZ(static_cast <std::common_type_t<T, K>> (z) + static_cast <std::common_type_t<T, K>> (k));
                            return *this;
                        }
                        /**
                         * Add a vector into this
                         * @param u the vector to add into this
                         * @return  the reference of himself
                         */
                        template <class K>
                        constexpr Vector3D& operator +=(Vector3D<K> const& u);
                        /**
                         * Subtract a scalar to all components
                         * @param k the scalar to add
                         * @return  the reference of himself
                         */
                        template <class K, typename = UseIfArithmetic<K>>
                        constexpr Vector3D& operator -=(K k) {
                            setX(static_cast <std::common_type_t<T, K>> (x) - static_cast <std::common_type_t<T, K>> (k));
                            setY(static_cast <std::common_type_t<T, K>> (y) - static_cast <std::common_type_t<T, K>> (k));
                            setZ(static_cast <std::common_type_t<T, K>> (z) - static_cast <std::common_type_t<T, K>> (k));
                            return *this;
                        }
                        /**
                         * Subtract a vector into this
                         * @param u the vector to subtract into this
                         * @return  the reference of himself
                         */
                        template <class K>
                        constexpr Vector3D& operator -=(Vector3D<K> const& u);
                        /**
                         * Multiply this by a factor k
                         * @param k the multiplication factor
                         * @return  the reference of himself
                         */
                        template <class K, typename = UseIfArithmetic<K>>
                        constexpr Vector3D& operator *=(K k) {
                            setX(static_cast <std::common_type_t<T, K>> (x) * static_cast <std::common_type_t<T, K>> (k));
                            setY(static_cast <std::common_type_t<T, K>> (y) * static_cast <std::common_type_t<T, K>> (k));
                            setZ(static_cast <std::common_type_t<T, K>> (z) * static_cast <std::common_type_t<T, K>> (k));
                            return *this;
                        }
                        /**
                         * Multiply this by a vector u, component by component
                         * @param u the multiplication vector
                         * @return  the reference of himself
                         */
                        template <class K>
                        constexpr Vector3D& operator *=(Vector3D<K> const& u);
                        /**
                         * Divide this by a factor k
                         * @param k the division factor
                         * @return  the reference of himself
                         */
                        template <class K, typename = UseIfArithmetic<K>>
                        constexpr Vector3D& operator /=(K k) {
                            setX(static_cast <std::common_type_t<T, K>> (x) / static_cast <std::common_type_t<T, K>> (k));
                            setY(static_cast <std::common_type_t<T, K>> (y) / static_cast <std::common_type_t<T, K>> (k));
                            setZ(static_cast <std::common_type_t<T, K>> (z) / static_cast <std::common_type_t<T, K>> (k));
                            return *this;
                        }
                        /**
                         * Divide this by a vector u, component by component
                         * @param u the division vector
                         * @return  the reference of himself
                         */
                        template <class K>
                        constexpr Vector3D& operator /=(Vector3D<K> const& u);
                        /**
                         * Compute the scalar product between this and u
                         * @param u the vector
                         * @return  the scalar product
                         */
                        template <class K>
                        constexpr std::common_type_t<T, K> operator |=(Vector3D<K> const& u) const;
                        /**
                         * Replace this by the cross product between this and u
                         * @param u the vector
                         * @return  the reference of himself
                         */
                        template <class K>
                        constexpr Vector3D& operator ^=(Vector3D<K> const& u);

                    //## Arithmetic Operator ##//
                        /**
                         * Compute the vector resulting in the addition of k into this
                         * @param k the scalar to add
                         * @return  the computed vector
                         */
                        template <class K, typename = UseIfArithmetic<K>>
                        constexpr Vector3D<std::common_type_t<T, K>> operator +(K k) const {
                            return Vector3D<std::common_type_t<T, K>>(*this) += k;
                        }
                        /**
                         * Compute the vector resulting in the addition of u into this
                         * @param u the vector to add
                         * @return  the computed vector
                         */
                        template <class K>
                        constexpr Vector3D<std::common_type_t<T, K>> operator +(Vector3D<K> const& u) const;
                        /**
                         * Compute the vector resulting in the subtraction of k into this
                         * @param k the scalar to subtract
                         * @return  the computed vector
                         */
                        template <class K, typename = UseIfArithmetic<K>>
                        constexpr Vector3D<std::common_type_t<T, K>> operator -(K k) const {
                            return Vector3D<std::common_type_t<T, K>>(*this) -= k;
                        }
                        /**
                         * Compute the vector resulting in the subtraction of u into this
                         * @param u the vector to subtract
                         * @return  the computed vector
                         */
                        template <class K>
                        constexpr Vector3D<std::common_type_t<T, K>> operator -(Vector3D<K> const& u) const;
                        /**
                         * Compute the opposite version of this
                         * @return the opposite vector
                         */
                        constexpr Vector3D operator -() const;
                        /**
                         * Compute the vector resulting in the multiplication of this by k
                         * @param k the multiplication factor
                         * @return  the computed vector
                         */
                        template <class K, typename = UseIfArithmetic<K>>
                        constexpr Vector3D<std::common_type_t<T, K>> operator *(K k) const {
                            return Vector3D<std::common_type_t<T, K>>(*this) *= k;
                        }
                        /**
                         * Compute the vector resulting in the multiplication of this by u
                         * @param u the multiplication vector
                         * @return  the computed vector
                         */
                        template <class K>
                        constexpr Vector3D<std::common_type_t<T, K>> operator *(Vector3D<K> const& u) const;
                        /**
                         * Compute the vector resulting in the division of this by k
                         * @param k the division factor
                         * @return  the computed vector
                         */
                        template <class K, typename = UseIfArithmetic<K>>
                        constexpr Vector3D<std::common_type_t<T, K>> operator /(K k) const {
                            return Vector3D<std::common_type_t<T, K>>(*this) /= k;
                        }
                        /**
                         * Compute the vector resulting in the division of this by u
                         * @param u the division vector
                         * @return  the computed vector
                         */
                        template <class K>
                        constexpr Vector3D<std::common_type_t<T, K>> operator /(Vector3D<K> const& u) const;
                        /**
                         * Compute the scalar product between this and u
                         * @param u the vector
                         * @return  the scalar product
                         */
                        template <class K>
                        constexpr std::common_type_t<T, K> operator |(Vector3D<K> const& u) const;
                        /**
                         * Compute the vector resulting in the cross product of this and u
                         * @param u the vector
                         * @return  the computed vector
                         */
                        template <class K>
                        constexpr Vector3D<std::common_type_t<T, K>> operator ^(Vector3D<K> const& u) const;

                    //## Comparison Operator ##//
                        /**
                         * Equality test between this and u
                         * @param u the vector to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        constexpr bool operator ==(Vector3D<K> const& u) const;
                        /**
                         * Difference test between this and u
                         * @param u the vector to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        constexpr bool operator !=(Vector3D<K> const& u) const;
                        /**
                         * Inferior test between this and u
                         * @param u the vector to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        constexpr bool operator <(Vector3D<K> const& u) const;
                        /**
                         * Superior test between this and u
                         * @param u the vector to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        constexpr bool operator >(Vector3D<K> const& u) const;
                        /**
                         * Inferior or Equal test between this and u
                         * @param u the vector to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        constexpr bool operator <=(Vector3D<K> const& u) const;
                        /**
                         * Superior or Equal test between this and u
                         * @param u the vector to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        constexpr bool operator >=(Vector3D<K> const& u) const;

                    //## Stream Operator ##//
                        /**
                         * Convert the vector into a string
                         * @return the converted vector
                         */
                        Core::String toString() const;
            };
    
            /**
             * Compute the vector resulting in the multiplication of u by k
             * @param u the vector
             * @param k the multiplication factor
             * @return  the computed vector
             */
            template <class T, class K, typename = UseIfArithmetic<K>>
            constexpr Vector3D<std::common_type_t<T, K>> operator *(K k, Vector3D<T> const& u) {
                return u * k;
            }
            /**
             * Return a normalized version of the given vector
             * @param u the vector to normalize
             * @return  the normalized vector
             */
            template <class T>
            Vector3D<T> normalize(Vector3D<T> const& u);
            /**
             * Return a vector with components raised to the given power
             * @param u the vector to raise
             * @param k the power to which to raise the vector
             * @return  the raised vector
             */
            template <class T, class K, typename = UseIfArithmetic<K>>
            Vector3D<std::common_type_t<T, K>> pow(Vector3D<T> const& u, K k) {
                return Vector3D<std::common_type_t<T, K>>(u).pow(k);
            }
            /**
             * Return a vector with components raised to the given power
             * @param u the vector to raise
             * @param p the power to which to raise the vector
             * @return  the raised vector
             */
            template <class T, class K>
            Vector3D<std::common_type_t<T, K>> pow(Vector3D<T> const& u, Vector3D<K> const& p);
            /**
             * Reflect the given incidence vector with the given normal
             * @param u the vector to reflect
             * @param n the normal
             * @return  the reflected vector
             */
            template <class T, class K>
            constexpr Vector3D<std::common_type_t<T, K>> reflect(Vector3D<T> const& u, Vector3D<K> const& n);
    
            /** Simple alias for point declaration */
            template <class T>
            using Point3D = Vector3D<T>;
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
        struct common_type<NRE::Math::Vector3D<T>, NRE::Math::Vector3D<K>> {
            /** Define underlying common_type */
            using type = NRE::Math::Vector3D<common_type_t<T, K>>;
        };
        /**
         * @class hash
         * @brief Manage hashing for specialized version
         */
        template <>
        class hash<NRE::Math::Vector3D<float>> {
            public:
                /**
                 * Compute a hash for a 3D float vector
                 * @param p the vector to hash
                 * @return the computed hash
                 */
                size_t operator()(NRE::Math::Vector3D<float> const& p) const {
                    static constexpr size_t keep     = 21;
                    static constexpr size_t hashSize = sizeof(size_t) * 8;

                    float x = p.getX();
                    float y = p.getY();
                    float z = p.getZ();

                    size_t iX, iY, iZ;
                    memcpy(&iX, &x, sizeof(x));
                    iX <<= hashSize - keep;
                    iX &= 0xFFFFF80000000000;
                    memcpy(&iY, &y, sizeof(y));
                    iY <<= hashSize - (keep * 2);
                    iY &= 0x000007FFFFC00000;
                    memcpy(&iZ, &z, sizeof(z));
                    iZ <<= hashSize - (keep * 3);
                    iZ &= 0x00000000003FFFFE;
                    return iX + iY + iZ;
                }
        };
    }

    #include "NRE_Vector3D.tpp"
