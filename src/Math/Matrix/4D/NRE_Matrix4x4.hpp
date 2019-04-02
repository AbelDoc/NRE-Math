
    /**
     * @file NRE_Matrix3x3.hpp
     * @brief Declaration of Math's API's Object : Matrix3x3
     * @author Louis ABEL
     * @date 27/03/2019
     * @copyright CC-BY-NC-SA
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

            template<class> class Vector4D;
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
                         * Construct the identity matrix
                         */
                        Matrix4x4();
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
                        Matrix4x4(T a, T b, T c, T d,
                                  T e, T f, T g, T h,
                                  T i, T j, T k, T l,
                                  T m, T n, T o, T p);
                        /**
                         * Construct a matrix with a unique value for all component
                         * @param value new value for all component
                         */
                        Matrix4x4(T value);
                        /**
                         * Construct a matrix with their lines passed in parameters with vector
                         * @param l1 the new value for the first line
                         * @param l2 the new value for the second line
                         * @param l3 the new value for the third line
                         * @param l4 the new value for the fourth line
                         */
                        Matrix4x4(Vector4D<T> const& l1, Vector4D<T> const& l2, Vector4D<T> const& l3, Vector4D<T> const& l4);

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
                        float getDeterminant() const;

                    //## Setter ##//
                        /**
                         * First line setter
                         * @param l1 the new first line vector
                         */
                        void setL1(Vector4D<T> const& l1);
                        /**
                         * Second line setter
                         * @param l2 the new second line vector
                         */
                        void setL2(Vector4D<T> const& l2);
                        /**
                         * Third line setter
                         * @param l3 the new third line vector
                         */
                        void setL3(Vector4D<T> const& l3);
                        /**
                         * Fourth line setter
                         * @param l4 the new fourth line vector
                         */
                        void setL4(Vector4D<T> const& l4);
                        /**
                         * First column setter
                         * @param c1 the new first column vector
                         */
                        void setC1(Vector4D<T> const& c1);
                        /**
                         * Second column setter
                         * @param c2 the new second column vector
                         */
                        void setC2(Vector4D<T> const& c2);
                        /**
                         * Third column setter
                         * @param c3 the new third column vector
                         */
                        void setC3(Vector4D<T> const& c3);
                        /**
                         * Fourth column setter
                         * @param c4 the new fourth column vector
                         */
                        void setC4(Vector4D<T> const& c4);
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
                        void translate(Vector3D<T> const& u);
                        /**
                         * Add a scale
                         * @param u the scaling vector
                         */
                        void scale(Vector3D<T> const& u);
                        /**
                         * Add a stretch on the X axis
                         * @param u the stretch factor
                         */
                        void stretchX(T u);
                        /**
                         * Add a stretch on the Y axis
                         * @param u the stretch factor
                         */
                        void stretchY(T u);
                        /**
                         * Add a stretch on the Z axis
                         * @param u the stretch factor
                         */
                        void stretchZ(T u);
                        /**
                         * Add a rotation
                         * @param angle the rotation's angle
                         * @param axis  the rotation's axis
                         */
                        void rotate(Angle angle, Vector3D<T> const& axis);
                        /**
                         * Perform a perspective projection on this
                         * @param fov   the projection's fov
                         * @param ratio the projection's ratio
                         * @param z     the projection's plane distance
                         */
                        void perspective(Angle fov, T ratio, Vector2D<T> const& z);
                        /**
                         * Perform an orthogonal projection on this
                         * @param h  the horizontal clipping plane
                         * @param v  the vertical clipping plane
                         * @param z  the projection's plane distance
                         */
                        void ortho(Vector2D<T> const& h, Vector2D<T> const& v, Vector2D<T> const& z);
                        /**
                         * Perform a 2D orthogonal projection on this
                         * @param h  the horizontal clipping plane
                         * @param v  the vertical clipping plane
                         */
                        void ortho2D(Vector2D<T> const& h, Vector2D<T> const& v);
                        /**
                         * Perform a viewing transformation on this
                         * @param eye    the camera's eye
                         * @param center the point fixed by the camera
                         * @param up     the camera's up vector
                         */
                        void lookAt(Vector3D<T> const& eye, Vector3D<T> const& center, Vector3D<T> const& up);
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

                    //## Shortcut Operator ##//
                        /**
                         * Add m into this
                         * @param m the matrix to add into this
                         * @return  the reference on himself
                         */
                        Matrix4x4& operator +=(Matrix4x4 const& m);
                        /**
                         * Subtract m into this
                         * @param m the matrix to subtract into this
                         * @return  the reference on himself
                         */
                        Matrix4x4& operator -=(Matrix4x4 const& m);
                        /**
                         * Multiply this by k
                         * @param k the multiplication factor
                         * @return  the reference of himself
                         */
                        Matrix4x4& operator *=(T k);
                        /**
                         * Multiply this with m
                         * @param m the matrix to multiply with this
                         * @return  the reference of himself
                         */
                        Matrix4x4& operator *=(Matrix4x4 const& m);
                        /**
                         * Divide this by k
                         * @param k the division factor
                         * @return  the reference of himself
                         */
                        Matrix4x4& operator /=(T k);
                        /**
                         * Divide this with m
                         * @param m the matrix to divide with this
                         * @return  the reference of himself
                         */
                        Matrix4x4& operator /=(Matrix4x4 const& m);

                    //## Arithmetic Operator ##//
                        /**
                         * Compute the matrix resulting in the addition of this and m
                         * @param m the matrix to add with this
                         * @return  the newly computed matrix
                         */
                        Matrix4x4 operator +(Matrix4x4 const& m) const;
                        /**
                         * Compute the matrix resulting in the subtraction of this and m
                         * @param m the matrix to subtract with this
                         * @return  the newly computed matrix
                         */
                        Matrix4x4 operator -(Matrix4x4 const& m) const;
                        /**
                         * Compute the matrix resulting in the multiplication of this by k
                         * @param k the multiplication factor
                         * @return  the newly computed matrix
                         */
                        Matrix4x4 operator *(T k) const;
                        /**
                         * Compute the matrix resulting in the multiplication of this and m
                         * @param m the matrix to multiply with this
                         * @return  the newly computed matrix
                         */
                        Matrix4x4 operator *(Matrix4x4 const& m) const;
                        /**
                         * Compute the vector resulting in the transformation of u by this
                         * @param u the vector to transform
                         * @return  the newly computed vector
                         */
                        Vector4D<T> operator *(Vector4D<T> const& u) const;
                        /**
                         * Compute the matrix resulting in the division of this by k
                         * @param k the division factor
                         * @return  the newly computed matrix
                         */
                        Matrix4x4 operator /(T k) const;
                        /**
                         * Compute the matrix resulting in the division of this and m
                         * @param m the matrix to divide with this
                         * @return  the newly computed matrix
                         */
                        Matrix4x4 operator /(Matrix4x4 const& m) const;

                    //## Comparison Operator ##//
                        /**
                         * Equality test between this and m
                         * @param m the matrix to test with this
                         * @return  the test's result
                         */
                        bool operator ==(Matrix4x4 const& m) const;
                        /**
                         * Difference test between this and m
                         * @param m the matrix to test with this
                         * @return  the test's result
                         */
                        bool operator !=(Matrix4x4 const& m) const;

                    //## Stream Operator ##//
                        /**
                         * Convert the 4x4 matrix into a string
                         * @return the converted 4x4 matrix
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
            std::ostream& operator <<(std::ostream& stream, Matrix4x4<T> const& o);
        }
    }

    #include "NRE_Matrix4x4.tpp"
