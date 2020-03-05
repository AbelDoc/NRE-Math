
    /**
     * @file NRE_Matrix3x3.hpp
     * @brief Declaration of Math's API's Object : Matrix3x3
     * @author Louis ABEL
     * @date 27/03/2019
     * @copyright CC-BY-NC-SA
     */

    #pragma once

    #include <Utility/String/NRE_String.hpp>
    #include <Utility/Interfaces/Stringable/NRE_Stringable.hpp>
    #include <iostream>

    #include "../../NRE_Math.hpp"
    #include "../../NRE_Unit.hpp"

    #include "../../Curve/Bezier/3D/NRE_BezierCurve3D.hpp"

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
            template<class> class Segment3D;
            template<class> class Matrix4x4;

            /**
             * @class Matrix3x3
             * @brief 3x3 generic matrix
             */
            template <class T>
            class Matrix3x3 : public Utility::Stringable<Matrix3x3<T>> {
                private:    //Fields
                    Vector3D<T> data[3];   /**< Matrix's lines, row major order */

                public:    // Methods
                    //## Constructor ##//
                        /**
                         * Default constructor
                         */
                        constexpr Matrix3x3() = default;
                        /**
                         * Construct a matrix with passed values
                         * @param a first matrix component
                         * @param b second matrix component
                         * @param c third matrix component
                         * @param d fourth matrix component
                         * @param e fifth matrix component
                         * @param f sixth matrix component
                         * @param g seventh matrix component
                         * @param h eighth matrix component
                         * @param i ninth matrix component
                         */
                        template <class A, class B, class C,
                                  class D, class E, class F,
                                  class G, class H, class I>
                        constexpr Matrix3x3(A a, B b, C c, D d, E e, F f, G g, H h, I i);
                        /**
                         * Construct a matrix with a unique value for all component
                         * @param value new value for all component
                         */
                        template <class K>
                        constexpr Matrix3x3(K value);
                        /**
                         * Construct a matrix with their lines passed in parameters with vector
                         * @param l1 the new value for the first line
                         * @param l2 the new value for the second line
                         * @param l3 the new value for the third line
                         */
                        template <class K, class L, class N>
                        constexpr Matrix3x3(Vector3D<K> const& l1, Vector3D<L> const& l2, Vector3D<N> const& l3);

                    //## Copy-Constructor ##//
                        /**
                         * Copy m into this
                         * @param m the object to copy
                         */
                        constexpr Matrix3x3(Matrix3x3 const& m) = default;

                    //## Move-Constructor ##//
                        /**
                         * Move m into this
                         * @param m the object to move
                         */
                        constexpr Matrix3x3(Matrix3x3 && m) = default;

                    //## Convertor ##//
                        /**
                         * Convert a K-type matrix into a T-type matrix
                         * @param m the K-type matrix to convert
                         */
                        template <class K>
                        constexpr Matrix3x3(Matrix3x3<K> const& m);
                        /**
                         * Convert a K-type 4x4 matrix into a T-type 3x3 matrix
                         * @param m the K-type 4x4 matrix to convert
                         */
                        template <class K>
                        constexpr Matrix3x3(Matrix4x4<K> const& m);

                    //## Deconstructor ##//
                        /**
                         * Matrix3x3 Deconstructor
                         */
                        ~Matrix3x3() = default;

                    //## Getter ##//
                        /**
                         * @return the first line
                         */
                        constexpr Vector3D<T> const& getL1() const;
                        /**
                         * @return the second line
                         */
                        constexpr Vector3D<T> const& getL2() const;
                        /**
                         * @return the third line
                         */
                        constexpr Vector3D<T> const& getL3() const;
                        /**
                         * @return the first column
                         */
                        constexpr Vector3D<T> getC1() const;
                        /**
                         * @return the second column
                         */
                        constexpr Vector3D<T> getC2() const;
                        /**
                         * @return the third column
                         */
                        constexpr Vector3D<T> getC3() const;
                        /**
                         * @return the matrix's determinant
                         */
                        constexpr long double getDeterminant() const;

                    //## Setter ##//
                        /**
                         * First line setter
                         * @param l1 the new first line vector
                         */
                        template <class K>
                        constexpr void setL1(Vector3D<K> const& l1);
                        /**
                         * Second line setter
                         * @param l2 the new second line vector
                         */
                        template <class K>
                        constexpr void setL2(Vector3D<K> const& l2);
                        /**
                         * Third line setter
                         * @param l3 the new third line vector
                         */
                        template <class K>
                        constexpr void setL3(Vector3D<K> const& l3);
                        /**
                         * First column setter
                         * @param c1 the new first column vector
                         */
                        template <class K>
                        constexpr void setC1(Vector3D<K> const& c1);
                        /**
                         * Second column setter
                         * @param c2 the new second column vector
                         */
                        template <class K>
                        constexpr void setC2(Vector3D<K> const& c2);
                        /**
                         * Third column setter
                         * @param c3 the new third column vector
                         */
                        template <class K>
                        constexpr void setC3(Vector3D<K> const& c3);
                        /**
                         * Set the matrix to the identity matrix
                         */
                        constexpr void setIdentity();

                    //## Methods ##//
                        /**
                         * Transpose the matrix
                         */
                        constexpr void transpose();
                        /**
                         * Inverse the matrix, if not possible the matrix become the identity one
                         */
                        constexpr void inverse();
                        /**
                         * Add a translation
                         * @param u the translation vector
                         */
                        template <class K>
                        constexpr void translate(Vector2D<K> const& u);
                        /**
                         * Add a scale
                         * @param u the scaling vector
                         */
                        template <class K>
                        constexpr void scale(Vector2D<K> const& u);
                        /**
                         * Add a stretch on the X axis
                         * @param u the stretch factor
                         */
                        template <class K>
                        constexpr void stretchX(K u);
                        /**
                         * Add a stretch on the Y axis
                         * @param u the stretch factor
                         */
                        template <class K>
                        constexpr void stretchY(K u);
                        /**
                         * Add a squeeze on the X axis
                         * @param u the squeeze factor
                         */
                        template <class K>
                        constexpr void squeezeX(K u);
                        /**
                         * Add a squeeze on the Y axis
                         * @param u the squeeze factor
                         */
                        template <class K>
                        constexpr void squeezeY(K u);
                        /**
                         * Add a shear on the X axis
                         * @param u the shear factor
                         */
                        template <class K>
                        constexpr void shearX(K u);
                        /**
                         * Add a shear on the Y axis
                         * @param u the shear factor
                         */
                        template <class K>
                        constexpr void shearY(K u);
                        /**
                         * Add a rotation
                         * @param angle the rotation's angle
                         */
                        constexpr void rotate(Angle angle);
                        /**
                         * @return a pointer to the vector's data
                         */
                        constexpr const T* value() const;

                    //## Access Operator ##//
                        /**
                         * Return a reference on a matrix's line
                         * @warning No range check performed
                         * @param   index the line's index
                         * @return        the line's reference
                         */
                        constexpr Vector3D<T>& operator [](std::size_t index);
                        /**
                         * Return a const reference on a matrix's line
                         * @warning No range check performed
                         * @param   index the line's index
                         * @return        the line's reference
                         */
                        constexpr Vector3D<T> const& operator [](std::size_t index) const;

                    //## Assignment Operator ##//
                        /**
                         * Copy m into this
                         * @param m the object to copy into this
                         * @return  the reference of himself
                         */
                        constexpr Matrix3x3& operator =(Matrix3x3 const& m) = default;
                        /**
                         * Move m into this
                         * @param m the object to move into this
                         * @return  the reference of himself
                         */
                        constexpr Matrix3x3& operator =(Matrix3x3 && m) = default;
                        /**
                         * Copy m into this
                         * @param m the object to copy into this
                         * @return  the reference of himself
                         */
                        template <class K>
                        constexpr Matrix3x3& operator =(Matrix3x3<K> const& m);
                        /**
                         * Move m into this
                         * @param m the object to move into this
                         * @return  the reference of himself
                         */
                        template <class K>
                        constexpr Matrix3x3& operator =(Matrix3x3<K> && m);

                    //## Shortcut Operator ##//
                        /**
                         * Add m into this
                         * @param m the matrix to add into this
                         * @return  the reference on himself
                         */
                        template <class K>
                        constexpr Matrix3x3& operator +=(Matrix3x3<K> const& m);
                        /**
                         * Subtract m into this
                         * @param m the matrix to subtract into this
                         * @return  the reference on himself
                         */
                        template <class K>
                        constexpr Matrix3x3& operator -=(Matrix3x3<K> const& m);
                        /**
                         * Multiply this by k
                         * @param k the multiplication factor
                         * @return  the reference of himself
                         */
                        template <class K>
                        constexpr Matrix3x3& operator *=(K k);
                        /**
                         * Multiply this with m
                         * @param m the matrix to multiply with this
                         * @return  the reference of himself
                         */
                        template <class K>
                        constexpr Matrix3x3& operator *=(Matrix3x3<K> const& m);
                        /**
                         * Divide this by k
                         * @param k the division factor
                         * @return  the reference of himself
                         */
                        template <class K>
                        constexpr Matrix3x3& operator /=(K k);
                        /**
                         * Divide this with m
                         * @param m the matrix to divide with this
                         * @return  the reference of himself
                         */
                        template <class K>
                        constexpr Matrix3x3& operator /=(Matrix3x3<K> const& m);

                    //## Arithmetic Operator ##//
                        /**
                         * Compute the matrix resulting in the addition of this and m
                         * @param m the matrix to add with this
                         * @return  the newly computed matrix
                         */
                        template <class K>
                        constexpr Matrix3x3<std::common_type_t<T, K>> operator +(Matrix3x3<K> const& m) const;
                        /**
                         * Compute the matrix resulting in the subtraction of this and m
                         * @param m the matrix to subtract with this
                         * @return  the newly computed matrix
                         */
                        template <class K>
                        constexpr Matrix3x3<std::common_type_t<T, K>> operator -(Matrix3x3<K> const& m) const;
                        /**
                         * Compute the matrix resulting in the multiplication of this by k
                         * @param k the multiplication factor
                         * @return  the newly computed matrix
                         */
                        template <class K>
                        constexpr Matrix3x3<std::common_type_t<T, K>> operator *(K k) const;
                        /**
                         * Compute the matrix resulting in the multiplication of this and m
                         * @param m the matrix to multiply with this
                         * @return  the newly computed matrix
                         */
                        template <class K>
                        constexpr Matrix3x3<std::common_type_t<T, K>> operator *(Matrix3x3<K> const& m) const;
                        /**
                         * Compute the vector resulting in the transformation of u by this
                         * @param u the vector to transform
                         * @return  the newly computed vector
                         */
                        template <class K>
                        constexpr Vector3D<K> operator *(Vector3D<K> const& u) const;
                        /**
                         * Compute the segment resulting in the transformation of s by this
                         * @param s the segment to transform
                         * @return  the newly computed vector
                         */
                        template <class K>
                        constexpr Segment3D<K> operator *(Segment3D<K> const& s) const;
                        /**
                         * Compute the bezier curve resulting in the transformation of c by this
                         * @param c the bezier curve to transform
                         * @return  the newly computed vector
                         */
                        constexpr BezierCurve3D operator *(BezierCurve3D const& c) const;
                        /**
                         * Compute the matrix resulting in the division of this by k
                         * @param k the division factor
                         * @return  the newly computed matrix
                         */
                        template <class K>
                        constexpr Matrix3x3<std::common_type_t<T, K>> operator /(K k) const;
                        /**
                         * Compute the matrix resulting in the division of this and m
                         * @param m the matrix to divide with this
                         * @return  the newly computed matrix
                         */
                        template <class K>
                        constexpr Matrix3x3<std::common_type_t<T, K>> operator /(Matrix3x3<K> const& m) const;

                    //## Comparison Operator ##//
                        /**
                         * Equality test between this and m
                         * @param m the matrix to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        constexpr bool operator ==(Matrix3x3<K> const& m) const;
                        /**
                         * Difference test between this and m
                         * @param m the matrix to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        constexpr bool operator !=(Matrix3x3<K> const& m) const;

                    //## Stream Operator ##//
                        /**
                         * Convert the matrix into a string
                         * @return the converted matrix
                         */
                        Utility::String toString() const;
                        
                public :
                    static constexpr Matrix3x3 IDENTITY = Matrix3x3(1, 0, 0, 0, 1, 0, 0, 0, 1);     /**< Identity matrix */
            };
        }
    }

    #include "NRE_Matrix3x3.tpp"
