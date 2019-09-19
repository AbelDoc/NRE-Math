
    /**
     * @file NRE_Vector3D.hpp
     * @brief Declaration of Math's API's Object : Vector3D
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

            template<class> class Vector2D;
            template<class> class Vector4D;

            /**
             * @class Vector3D
             * @brief A cartesian 3D vector, 2D homogeneous
             * @warning Use this vector with POD type only
             */
            template <class T>
            class Vector3D {
                private :   //Fields
                    T x;    /**< x coordinate */
                    T y;    /**< y coordinate */
                    T z;    /**< z coordinate */

                public :    // Methods
                    //## Constructor ##//
                        /**
                         * Construct the null vector
                         */
                        Vector3D() = default;
                        /**
                         * Construct a vector with passed values
                         * @param nX new x value
                         * @param nY new y value
                         * @param nZ new z value
                         */
                        Vector3D(T nX, T nY, T nZ);
                        /**
                         * Construct a vector with an unique value for all coordinates
                         * @param value new x, y and z values
                         */
                        Vector3D(T value);

                    //## Copy-Constructor ##//
                        /**
                         * Copy u into this
                         * @param u the object to copy
                         */
                        Vector3D(Vector3D const& u) = default;

                    //## Move-Constructor ##//
                        /**
                         * Move u into this
                         * @param u the object to move
                         */
                        Vector3D(Vector3D && u) = default;

                    //## Convertor ##//
                        /**
                         * Convert a K-type vector into a T-type vector
                         * @param u the K-type vector to convert
                         */
                        template <class K>
                        Vector3D(Vector3D<K> const& u);
                        /**
                         * Convert a K-type 4D vector into a T-type 3D vector
                         * @param u the K-type 4D vector to convert
                         */
                        template <class K>
                        Vector3D(Vector4D<K> const& u);
                        /**
                         * Convert a 2D vector into a 3D vector with a default z value
                         * @param u the 2D vector to convert
                         */
                        Vector3D(Vector2D<T> const& u);
                        /**
                         * Convert a 2D vector into a 3D point with a passed z value
                         * @param u  the 2D vector to convert
                         * @param nZ the new z value
                         */
                        Vector3D(Vector2D<T> const& u, T nZ);

                    //## Deconstructor ##//
                        /**
                         * Vector3D Deconstructor
                         */
                        ~Vector3D() = default;

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
                         * Set the values for x, y and z
                         * @param nX the new value for x
                         * @param nY the new value for y
                         * @param nZ the new value for z
                         */
                        void setCoord(T nX, T nY, T nZ);
                        /**
                         * Set the values for x, y and z with a base 2D vector
                         * @param u the base 2D vector for x and y values
                         * @param nZ the new value for z
                         */
                        void setCoord(Vector2D<T> const& u, T nZ);
                        /**
                         * Set the values for x, y and z
                         * @param r the new value for x
                         * @param g the new value for y
                         * @param b the new value for z
                         */
                        void setRGB(T r, T g, T b);

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
                        Vector3D& operator =(Vector3D const& u) = default;
                        /**
                         * Move u into this
                         * @param u the object to move into this
                         * @return  the reference of himself
                         */
                        Vector3D& operator =(Vector3D && u) = default;

                    //## Shortcut Operator ##//
                        /**
                         * Add a vector into this
                         * @param u the vector to add into this
                         * @return  the reference of himself
                         */
                        Vector3D& operator +=(Vector3D const& u);
                        /**
                         * Subtract a vector into this
                         * @param u the vector to subtract into this
                         * @return  the reference of himself
                         */
                        Vector3D& operator -=(Vector3D const& u);
                        /**
                         * Multiply this by a factor k
                         * @param k the multiplication factor
                         * @return  the reference of himself
                         */
                        Vector3D& operator *=(T k);
                        /**
                         * Multiply this by a vector u, component by component
                         * @param u the multiplication vector
                         * @return  the reference of himself
                         */
                        Vector3D& operator *=(Vector3D const& u);
                        /**
                         * Divide this by a factor k
                         * @param k the division factor
                         * @return  the reference of himself
                         */
                        Vector3D& operator /=(T k);
                        /**
                         * Divide this by a vector u, component by component
                         * @param u the division vector
                         * @return  the reference of himself
                         */
                        Vector3D& operator /=(Vector3D const& u);
                        /**
                         * Compute the scalar product between this and u
                         * @param u the vector
                         * @return  the scalar product
                         */
                        float operator |=(Vector3D const& u) const;
                        /**
                         * Replace this by the cross product between this and u
                         * @param u the vector
                         * @return  the reference of himself
                         */
                        Vector3D& operator ^=(Vector3D const& u);

                    //## Arithmetic Operator ##//
                        /**
                         * Compute the vector resulting in the addition of u into this
                         * @param u the vector to add
                         * @return  the computed vector
                         */
                        Vector3D operator +(Vector3D const& u) const;
                        /**
                         * Compute the vector resulting in the subtraction of u into this
                         * @param u the vector to subtract
                         * @return  the computed vector
                         */
                        Vector3D operator -(Vector3D const& u) const;
                        /**
                         * Compute the opposite version of this
                         * @return the opposite vector
                         */
                        Vector3D operator -() const;
                        /**
                         * Compute the vector resulting in the multiplication of this by k
                         * @param k the multiplication factor
                         * @return  the computed vector
                         */
                        Vector3D operator *(T k) const;
                        /**
                         * Compute the vector resulting in the multiplication of this by u
                         * @param u the multiplication vector
                         * @return  the computed vector
                         */
                        Vector3D operator *(Vector3D const& u) const;
                        /**
                         * Compute the vector resulting in the division of this by k
                         * @param k the division factor
                         * @return  the computed vector
                         */
                        Vector3D operator /(T k) const;
                        /**
                         * Compute the vector resulting in the division of this by u
                         * @param u the division vector
                         * @return  the computed vector
                         */
                        Vector3D operator /(Vector3D const& u) const;
                        /**
                         * Compute the scalar product between this and u
                         * @param u the vector
                         * @return  the scalar product
                         */
                        float operator |(Vector3D const& u) const;
                        /**
                         * Compute the vector resulting in the cross product of this and u
                         * @param u the vector
                         * @return  the computed vector
                         */
                        Vector3D operator ^(Vector3D const& u) const;

                    //## Comparison Operator ##//
                        /**
                         * Equality test between this and u
                         * @param u the vector to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        bool operator ==(Vector3D<K> const& u) const;
                        /**
                         * Difference test between this and u
                         * @param u the vector to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        bool operator !=(Vector3D<K> const& u) const;
                        /**
                         * Inferior test between this and u
                         * @param u the vector to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        bool operator <(Vector3D<K> const& u) const;
                        /**
                         * Superior test between this and u
                         * @param u the vector to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        bool operator >(Vector3D<K> const& u) const;
                        /**
                         * Inferior or Equal test between this and u
                         * @param u the vector to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        bool operator <=(Vector3D<K> const& u) const;
                        /**
                         * Superior or Equal test between this and u
                         * @param u the vector to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        bool operator >=(Vector3D<K> const& u) const;

                    //## Stream Operator ##//
                        /**
                         * Convert the vector into a string
                         * @return the converted vector
                         */
                        Utility::String toString() const;
            };

            template <class T>
            using Point3D = Vector3D<T>;

            /**
             * Output stream operator for the object
             * @param  stream the stream to add the object's string representation
             * @param  o      the object to add in the stream
             * @return the    modified stream
             */
            template <class T>
            std::ostream& operator <<(std::ostream& stream, Vector3D<T> const& o);
        }
    }

    /**
    * @namespace std
    * @brief The stl standard namespace
    */
    namespace std {
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
