
    /**
     * @file NRE_Matrix3x3.hpp
     * @brief Declaration of Math's API's Object : Matrix3x3
     * @author Louis ABEL
     * @date 27/03/2019
     * @copyright GNU GPL v3
     */

    #pragma once

    #include <string>
    #include <iostream>

    #include "../../NRE_Math.hpp"
    #include "../../NRE_Unit.hpp"

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
            template<class> class Matrix4x4;

            /**
             * @class Matrix3x3
             * @brief 3x3 generic matrix
             */
            template <class T>
            class Matrix3x3 {
                private:    //Fields
                    Vector3D<T> data[3];   /**< Matrix's lines, row major order */

                public:    // Methods
                    //## Constructor ##//
                        /**
                         * Construct the identity matrix
                         */
                        Matrix3x3();
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
                        Matrix3x3(T a, T b, T c,
                                  T d, T e, T f,
                                  T g, T h, T i);
                        /**
                         * Construct a matrix with a unique value for all component
                         * @param value new value for all component
                         */
                        Matrix3x3(T value);
                        /**
                         * Construct a matrix with their lines passed in parameters with vector
                         * @param l1 the new value for the first line
                         * @param l2 the new value for the second line
                         * @param l3 the new value for the third line
                         */
                        Matrix3x3(Vector3D<T> const& l1, Vector3D<T> const& l2, Vector3D<T> const& l3);

                    //## Copy-Constructor ##//
                        /**
                         * Copy m into this
                         * @param m the object to copy
                         */
                        Matrix3x3(Matrix3x3 const& m) = default;

                    //## Move-Constructor ##//
                        /**
                         * Move m into this
                         * @param m the object to move
                         */
                        Matrix3x3(Matrix3x3 && m) = default;

                    //## Convertor ##//
                        /**
                         * Convert a K-type matrix into a T-type matrix
                         * @param m the K-type matrix to convert
                         */
                        template <class K>
                        Matrix3x3(Matrix3x3<K> const& m);
                        /**
                         * Convert a K-type 4x4 matrix into a T-type 3x3 matrix
                         * @param m the K-type 4x4 matrix to convert
                         */
                        template <class K>
                        Matrix3x3(Matrix4x4<K> const& m);
                        /**
                         * Convert a quaternion into a 3x3 matrix
                         * @param q the quaternion to convert
                         */
                        //Matrix3x3(Quaternion const& q);

                    //## Deconstructor ##//
                        /**
                         * Matrix3x3 Deconstructor
                         */
                        ~Matrix3x3() = default;

                    //## Getter ##//
                        /**
                         * @return the first line
                         */
                        Vector3D<T> const& getL1() const;
                        /**
                         * @return the second line
                         */
                        Vector3D<T> const& getL2() const;
                        /**
                         * @return the third line
                         */
                        Vector3D<T> const& getL3() const;
                        /**
                         * @return the first column
                         */
                        Vector3D<T> getC1() const;
                        /**
                         * @return the second column
                         */
                        Vector3D<T> getC2() const;
                        /**
                         * @return the third column
                         */
                        Vector3D<T> getC3() const;
                        /**
                         * @return the matrix's determinant
                         */
                        float getDeterminant() const;

                    //## Setter ##//
                        /**
                         * First line setter
                         * @param l1 the new first line vector
                         */
                        void setL1(Vector3D<T> const& l1);
                        /**
                         * Second line setter
                         * @param l2 the new second line vector
                         */
                        void setL2(Vector3D<T> const& l2);
                        /**
                         * Third line setter
                         * @param l3 the new third line vector
                         */
                        void setL3(Vector3D<T> const& l3);
                        /**
                         * First column setter
                         * @param c1 the new first column vector
                         */
                        void setC1(Vector3D<T> const& c1);
                        /**
                         * Second column setter
                         * @param c2 the new second column vector
                         */
                        void setC2(Vector3D<T> const& c2);
                        /**
                         * Third column setter
                         * @param c3 the new third column vector
                         */
                        void setC3(Vector3D<T> const& c3);
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
                        void translate(Vector2D<T> const& u);
                        /**
                         * Add a scale
                         * @param u the scaling vector
                         */
                        void scale(Vector2D<T> const& u);
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
                         * Add a squeeze on the X axis
                         * @param u the squeeze vector
                         */
                        void squeezeX(Vector2D<T> const& u);
                        /**
                         * Add a squeeze on the Y axis
                         * @param u the squeeze vector
                         */
                        void squeezeY(Vector2D<T> const& u);
                        /**
                         * Add a shear on the X axis
                         * @param u the shear factor
                         */
                        void shearX(T u);
                        /**
                         * Add a shear on the Y axis
                         * @param u the shear factor
                         */
                        void shearY(T u);
                        /**
                         * Add a shear on both axis
                         * @param u the shear vector
                         */
                        void shear(Vector2D<T> const& u);
                        /**
                         * Add a rotation
                         * @param angle the rotation's angle
                         */
                        void rotate(Angle const& angle);
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
                        Vector3D<T>& operator [](std::size_t index);
                        /**
                         * Return a const reference on a matrix's line
                         * @warning No range check performed
                         * @param   index the line's index
                         * @return        the line's reference
                         */
                        Vector3D<T> const& operator [](std::size_t index) const;

                    //## Assignment Operator ##//
                        /**
                         * Copy m into this
                         * @param m the object to copy into this
                         * @return  the reference of himself
                         */
                        Matrix3x3& operator =(Matrix3x3 const& m) = default;
                        /**
                         * Move m into this
                         * @param m the object to move into this
                         * @return  the reference of himself
                         */
                        Matrix3x3& operator =(Matrix3x3 && m) = default;

                    //## Shortcut Operator ##//
                        /**
                         * Add m into this
                         * @param m the matrix to add into this
                         * @return  the reference on himself
                         */
                        Matrix3x3& operator +=(Matrix3x3 const& m);
                        /**
                         * Subtract m into this
                         * @param m the matrix to subtract into this
                         * @return  the reference on himself
                         */
                        Matrix3x3& operator -=(Matrix3x3 const& m);
                        /**
                         * Multiply this by k
                         * @param k the multiplication factor
                         * @return  the reference of himself
                         */
                        Matrix3x3& operator *=(T k);
                        /**
                         * Multiply this with m
                         * @param m the matrix to multiply with this
                         * @return  the reference of himself
                         */
                        Matrix3x3& operator *=(Matrix3x3 const& m);
                        /**
                         * Divide this by k
                         * @param k the division factor
                         * @return  the reference of himself
                         */
                        Matrix3x3& operator /=(T k);
                        /**
                         * Divide this with m
                         * @param m the matrix to divide with this
                         * @return  the reference of himself
                         */
                        Matrix3x3& operator /=(Matrix3x3 const& m);

                    //## Arithmetic Operator ##//
                        /**
                         * Compute the matrix resulting in the addition of this and m
                         * @param m the matrix to add with this
                         * @return  the newly computed matrix
                         */
                        Matrix3x3 operator +(Matrix3x3 const& m) const;
                        /**
                         * Compute the matrix resulting in the subtraction of this and m
                         * @param m the matrix to subtract with this
                         * @return  the newly computed matrix
                         */
                        Matrix3x3 operator -(Matrix3x3 const& m) const;
                        /**
                         * Compute the matrix resulting in the multiplication of this by k
                         * @param k the multiplication factor
                         * @return  the newly computed matrix
                         */
                        Matrix3x3 operator *(T k) const;
                        /**
                         * Compute the matrix resulting in the multiplication of this and m
                         * @param m the matrix to multiply with this
                         * @return  the newly computed matrix
                         */
                        Matrix3x3 operator *(Matrix3x3 const& m) const;
                        /**
                         * Compute the vector resulting in the transformation of u by this
                         * @param u the vector to transform
                         * @return  the newly computed vector
                         */
                        Vector3D<T> operator *(Vector3D<T> const& u) const;
                        /**
                         * Compute the matrix resulting in the division of this by k
                         * @param k the division factor
                         * @return  the newly computed matrix
                         */
                        Matrix3x3 operator /(T k) const;
                        /**
                         * Compute the matrix resulting in the division of this and m
                         * @param m the matrix to divide with this
                         * @return  the newly computed matrix
                         */
                        Matrix3x3 operator /(Matrix3x3 const& m) const;

                    //## Comparison Operator ##//
                        /**
                         * Equality test between this and m
                         * @param m the matrix to test with this
                         * @return  the test's result
                         */
                        bool operator ==(Matrix3x3 const& m) const;
                        /**
                         * Difference test between this and m
                         * @param m the matrix to test with this
                         * @return  the test's result
                         */
                        bool operator !=(Matrix3x3 const& m) const;

                    //## Stream Operator ##//
                        /**
                         * Convert the matrix into a string
                         * @return the converted matrix
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
            std::ostream& operator <<(std::ostream& stream, Matrix3x3<T> const& o);
        }
    }

    #include "NRE_Matrix3x3.tpp"
