
    /**
     * @file NRE_Matrix3x3.hpp
     * @brief Declaration of Math's API's Object : Matrix3x3
     * @author Louis ABEL
     * @date 27/03/2019
     * @copyright CC-BY-NC-SA
     */

    #pragma once

    #include <Utility/String/NRE_String.hpp>
    #include <type_traits>

    #include "../../NRE_Math.hpp"
    #include "../../NRE_Unit.hpp"

    #include "../../Curve/Bezier/4D/NRE_BezierCurve4D.hpp"

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
            template<class> class Vector4D;
            template<class> class Segment4D;
            template<class> class Plane;
            template<class> class Matrix3x3;
            template<class> class Quaternion;

            /**
             * @class Matrix4x4
             * @brief 4x4 generic matrix
             */
            template <class T>
            class Matrix4x4 {
                private:    //Fields
                    Vector4D<T> data[4];   /**< Matrix's lines, row major order */

                public:    // Methods
                    //## Constructor ##//
                        /**
                         * Default constructor
                         */
                        Matrix4x4() = default;
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
                         * @param j tenth matrix component
                         * @param k eleventh matrix component
                         * @param l twelfth matrix component
                         * @param m thirteenth matrix component
                         * @param n fourteenth matrix component
                         * @param o fifteenth matrix component
                         * @param p sixteenth matrix component
                         */
                        template <class A, class B, class C, class D,
                                  class E, class F, class G, class H,
                                  class I, class J, class K, class L,
                                  class M, class N, class O, class P>
                        Matrix4x4(A a, B b, C c, D d,
                                  E e, F f, G g, H h,
                                  I i, J j, K k, L l,
                                  M m, N n, O o, P p);
                        /**
                         * Construct a matrix with a unique value for all component
                         * @param value new value for all component
                         */
                        template <class K>
                        Matrix4x4(K value);
                        /**
                         * Construct a matrix with their lines passed in parameters with vector
                         * @param l1 the new value for the first line
                         * @param l2 the new value for the second line
                         * @param l3 the new value for the third line
                         * @param l4 the new value for the fourth line
                         */
                        template <class K, class L, class N, class M>
                        Matrix4x4(Vector4D<K> const& l1, Vector4D<L> const& l2, Vector4D<N> const& l3, Vector4D<M> const& l4);

                    //## Copy-Constructor ##//
                        /**
                         * Copy m into this
                         * @param m the object to copy
                         */
                        Matrix4x4(Matrix4x4 const& m) = default;

                    //## Move-Constructor ##//
                        /**
                         * Move m into this
                         * @param m the object to move
                         */
                        Matrix4x4(Matrix4x4 && m) = default;

                    //## Convertor ##//
                        /**
                         * Convert a K-type 3x3 matrix into a T-type 4x4 matrix
                         * @param m the K-type 3x3 matrix to convert
                         */
                        template <class K>
                        Matrix4x4(Matrix3x3<K> const& m);
                        /**
                         * Convert a K-type matrix into a T-type matrix
                         * @param m the K-type matrix to convert
                         */
                        template <class K>
                        Matrix4x4(Matrix4x4<K> const& m);
                        /**
                         * Convert a K-type quaternion into a T-type matrix
                         * @param q the K-type quaternion to convert
                         */
                        template <class K>
                        Matrix4x4(Quaternion<K> const& q);

                    //## Deconstructor ##//
                        /**
                         * Matrix4x4 Deconstructor
                         */
                        ~Matrix4x4() = default;

                    //## Getter ##//
                        /**
                         * @return the first line
                         */
                        Vector4D<T> const& getL1() const;
                        /**
                         * @return the second line
                         */
                        Vector4D<T> const& getL2() const;
                        /**
                         * @return the third line
                         */
                        Vector4D<T> const& getL3() const;
                        /**
                         * @return the fourth line
                         */
                        Vector4D<T> const& getL4() const;
                        /**
                         * @return the first column
                         */
                        Vector4D<T> getC1() const;
                        /**
                         * @return the second column
                         */
                        Vector4D<T> getC2() const;
                        /**
                         * @return the third column
                         */
                        Vector4D<T> getC3() const;
                        /**
                         * @return the fourth column
                         */
                        Vector4D<T> getC4() const;
                        /**
                         * @return the matrix's determinant
                         */
                        long double getDeterminant() const;

                    //## Setter ##//
                        /**
                         * First line setter
                         * @param l1 the new first line vector
                         */
                        template <class K>
                        void setL1(Vector4D<K> const& l1);
                        /**
                         * Second line setter
                         * @param l2 the new second line vector
                         */
                        template <class K>
                        void setL2(Vector4D<K> const& l2);
                        /**
                         * Third line setter
                         * @param l3 the new third line vector
                         */
                        template <class K>
                        void setL3(Vector4D<K> const& l3);
                        /**
                         * Fourth line setter
                         * @param l4 the new fourth line vector
                         */
                        template <class K>
                        void setL4(Vector4D<K> const& l4);
                        /**
                         * First column setter
                         * @param c1 the new first column vector
                         */
                        template <class K>
                        void setC1(Vector4D<K> const& c1);
                        /**
                         * Second column setter
                         * @param c2 the new second column vector
                         */
                        template <class K>
                        void setC2(Vector4D<K> const& c2);
                        /**
                         * Third column setter
                         * @param c3 the new third column vector
                         */
                        template <class K>
                        void setC3(Vector4D<K> const& c3);
                        /**
                         * Fourth column setter
                         * @param c4 the new fourth column vector
                         */
                        template <class K>
                        void setC4(Vector4D<K> const& c4);
                        /**
                         * Set the matrix to the identity matrix
                         */
                        void setIdentity();

                    //## Methods ##//
                        /**
                         * Transpose the matrix
                         */
                        void transpose();
                        /**
                         * Inverse the matrix, if not possible the matrix become the identity one
                         */
                        void inverse();
                        /**
                         * Add a translation
                         * @param u the translation vector
                         */
                        template <class K>
                        void translate(Vector3D<K> const& u);
                        /**
                         * Add a scale
                         * @param u the scaling vector
                         */
                        template <class K>
                        void scale(Vector3D<K> const& u);
                        /**
                         * Add a stretch on the X axis
                         * @param u the stretch factor
                         */
                        template <class K>
                        void stretchX(K u);
                        /**
                         * Add a stretch on the Y axis
                         * @param u the stretch factor
                         */
                        template <class K>
                        void stretchY(K);
                        /**
                         * Add a stretch on the Z axis
                         * @param u the stretch factor
                         */
                        template <class K>
                        void stretchZ(K u);
                        /**
                         * Add a rotation
                         * @param angle the rotation's angle
                         * @param axis  the rotation's axis
                         */
                        template <class K>
                        void rotate(Angle angle, Vector3D<K> const& axis);
                        /**
                         * Perform a perspective projection on this
                         * @param fov   the projection's fov
                         * @param ratio the projection's ratio
                         * @param z     the projection's plane distance
                         */
                        template <class K, class L>
                        void perspective(Angle fov, K ratio, Vector2D<L> const& z);
                        /**
                         * Perform an orthogonal projection on this
                         * @param h  the horizontal clipping plane
                         * @param v  the vertical clipping plane
                         * @param z  the projection's plane distance
                         */
                        template <class K, class L, class N>
                        void ortho(Vector2D<K> const& h, Vector2D<L> const& v, Vector2D<N> const& z);
                        /**
                         * Perform a 2D orthogonal projection on this
                         * @param h  the horizontal clipping plane
                         * @param v  the vertical clipping plane
                         */
                        template <class K, class L>
                        void ortho2D(Vector2D<K> const& h, Vector2D<L> const& v);
                        /**
                         * Perform a viewing transformation on this
                         * @param eye    the camera's eye
                         * @param center the point fixed by the camera
                         * @param up     the camera's up vector
                         */
                        template <class K, class L, class N>
                        void lookAt(Vector3D<K> const& eye, Vector3D<L> const& center, Vector3D<N> const& up);
                        /**
                         * @return a pointer to the vector's data
                         */
                        const T* value() const;

                    //## Access Operator ##//
                        /**
                         * Return a reference on a matrix's line
                         * @warning No range check performed
                         * @param   index the line's index
                         * @return        the line's reference
                         */
                        Vector4D<T>& operator [](std::size_t index);
                        /**
                         * Return a const reference on a matrix's line
                         * @warning No range check performed
                         * @param   index the line's index
                         * @return        the line's reference
                         */
                        Vector4D<T> const& operator [](std::size_t index) const;

                    //## Assignment Operator ##//
                        /**
                         * Copy m into this
                         * @param m the object to copy into this
                         * @return  the reference of himself
                         */
                        Matrix4x4& operator =(Matrix4x4 const& m) = default;
                        /**
                         * Move m into this
                         * @param m the object to move into this
                         * @return  the reference of himself
                         */
                        Matrix4x4& operator =(Matrix4x4 && m) = default;
                        /**
                         * Copy m into this
                         * @param m the object to copy into this
                         * @return  the reference of himself
                         */
                        template <class K>
                        Matrix4x4& operator =(Matrix4x4<K> const& m);
                        /**
                         * Move m into this
                         * @param m the object to move into this
                         * @return  the reference of himself
                         */
                        template <class K>
                        Matrix4x4& operator =(Matrix4x4<K> && m);

                    //## Shortcut Operator ##//
                        /**
                         * Add m into this
                         * @param m the matrix to add into this
                         * @return  the reference on himself
                         */
                        template <class K>
                        Matrix4x4& operator +=(Matrix4x4<K> const& m);
                        /**
                         * Subtract m into this
                         * @param m the matrix to subtract into this
                         * @return  the reference on himself
                         */
                        template <class K>
                        Matrix4x4& operator -=(Matrix4x4<K> const& m);
                        /**
                         * Multiply this by k
                         * @param k the multiplication factor
                         * @return  the reference of himself
                         */
                        template <class K>
                        Matrix4x4& operator *=(K k);
                        /**
                         * Multiply this with m
                         * @param m the matrix to multiply with this
                         * @return  the reference of himself
                         */
                        template <class K>
                        Matrix4x4& operator *=(Matrix4x4<K> const& m);
                        /**
                         * Divide this by k
                         * @param k the division factor
                         * @return  the reference of himself
                         */
                        template <class K>
                        Matrix4x4& operator /=(K k);
                        /**
                         * Divide this with m
                         * @param m the matrix to divide with this
                         * @return  the reference of himself
                         */
                        template <class K>
                        Matrix4x4& operator /=(Matrix4x4<K> const& m);

                    //## Arithmetic Operator ##//
                        /**
                         * Compute the matrix resulting in the addition of this and m
                         * @param m the matrix to add with this
                         * @return  the newly computed matrix
                         */
                        template <class K>
                        Matrix4x4<std::common_type_t<T, K>> operator +(Matrix4x4<K> const& m) const;
                        /**
                         * Compute the matrix resulting in the subtraction of this and m
                         * @param m the matrix to subtract with this
                         * @return  the newly computed matrix
                         */
                        template <class K>
                        Matrix4x4<std::common_type_t<T, K>> operator -(Matrix4x4<K> const& m) const;
                        /**
                         * Compute the matrix resulting in the multiplication of this by k
                         * @param k the multiplication factor
                         * @return  the newly computed matrix
                         */
                        template <class K>
                        Matrix4x4<std::common_type_t<T, K>> operator *(K k) const;
                        /**
                         * Compute the matrix resulting in the multiplication of this and m
                         * @param m the matrix to multiply with this
                         * @return  the newly computed matrix
                         */
                        template <class K>
                        Matrix4x4<std::common_type_t<T, K>> operator *(Matrix4x4<K> const& m) const;
                        /**
                         * Compute the vector resulting in the transformation of u by this
                         * @param u the vector to transform
                         * @return  the newly computed vector
                         */
                        template <class K>
                        Vector4D<K> operator *(Vector4D<K> const& u) const;
                        /**
                         * Compute the plane resulting in the transformation of p by this
                         * @param p the plane to transform
                         * @return  the newly computed vector
                         */
                        template <class K>
                        Plane<K> operator *(Plane<K> const& p) const;
                        /**
                         * Compute the segment resulting in the transformation of s by this
                         * @param s the segment to transform
                         * @return  the newly computed vector
                         */
                        template <class K>
                        Segment4D<K> operator *(Segment4D<K> const& s) const;
                        /**
                         * Compute the bezier curve resulting in the transformation of c by this
                         * @param c the bezier curve to transform
                         * @return  the newly computed vector
                         */
                        BezierCurve4D operator *(BezierCurve4D const& c) const;
                        /**
                         * Compute the matrix resulting in the division of this by k
                         * @param k the division factor
                         * @return  the newly computed matrix
                         */
                        template <class K>
                        Matrix4x4<std::common_type_t<T, K>> operator /(K k) const;
                        /**
                         * Compute the matrix resulting in the division of this and m
                         * @param m the matrix to divide with this
                         * @return  the newly computed matrix
                         */
                        template <class K>
                        Matrix4x4<std::common_type_t<T, K>> operator /(Matrix4x4<K> const& m) const;

                    //## Comparison Operator ##//
                        /**
                         * Equality test between this and m
                         * @param m the matrix to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        bool operator ==(Matrix4x4<K> const& m) const;
                        /**
                         * Difference test between this and m
                         * @param m the matrix to test with this
                         * @return  the test's result
                         */
                        template <class K>
                        bool operator !=(Matrix4x4<K> const& m) const;

                    //## Stream Operator ##//
                        /**
                         * Convert the 4x4 matrix into a string
                         * @return the converted 4x4 matrix
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
            std::ostream& operator <<(std::ostream& stream, Matrix4x4<T> const& o);
        }
    }

    #include "NRE_Matrix4x4.tpp"
