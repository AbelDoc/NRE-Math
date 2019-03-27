
    /**
     * @file NRE_Matrix2x2.hpp
     * @brief Declaration of Math's API's Object : Matrix2x2
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

            template<class> class Vector2D;
            template<class> class Matrix3x3;

            /**
             * @class Matrix2x2
             * @brief 2x2 generic matrix
             * @warning Use this matrix with POD type only
             */
            template <class T>
            class Matrix2x2 {
                private:    //Fields
                    Vector2D<T> data[2];   /**< Matrix's lines, row major order */

                public:    // Methods
                    //## Constructor ##//
                        /**
                         * Construct the identity matrix
                         */
                        Matrix2x2();
                        /**
                         * Construct a matrix with passed values
                         * @param a first matrix component
                         * @param b second matrix component
                         * @param c third matrix component
                         * @param d fourth matrix component
                         */
                        Matrix2x2(T a, T b,
                                  T c, T d);
                        /**
                         * Construct a matrix with a unique value for all components
                         * @param value new value for all component
                         */
                        Matrix2x2(T value);
                        /**
                         * Construct a matrix with lines passed in parameters
                         * @param l1 the new value for the first line
                         * @param l2 the new value for the second line
                         */
                        Matrix2x2(Vector2D<T> const& l1, Vector2D<T> const& l2);

                    //## Copy-Constructor ##//
                        /**
                         * Copy m into this
                         * @param m the object to copy
                         */
                        Matrix2x2(Matrix2x2 const& m) = default;

                    //## Move-Constructor ##//
                        /**
                         * Move m into this
                         * @param m the object to move
                         */
                        Matrix2x2(Matrix2x2 && m) = default;

                    //## Convertor ##//
                        /**
                         * Convert a K-type matrix into a T-type matrix
                         * @param m the K-type matrix to convert
                         */
                        template <class K>
                        Matrix2x2(Matrix2x2<K> const& m);
                        /**
                         * Convert a K-type 3x3 matrix into a T-type 2x2 matrix
                         * @param m the K-type 3x3 matrix to convert
                         */
                        template <class K>
                        Matrix2x2(Matrix3x3<K> const& m);

                    //## Deconstructor ##//
                        /**
                         * Matrix2x2 Deconstructor
                         */
                        ~Matrix2x2() = default;

                    //## Getter ##//
                        /**
                         * @return the first line
                         */
                        Vector2D<T> const& getL1() const;
                        /**
                         * @return the second line
                         */
                        Vector2D<T> const& getL2() const;
                        /**
                         * @return the first column
                         */
                        Vector2D<T> getC1() const;
                        /**
                         * @return the second column
                         */
                        Vector2D<T> getC2() const;
                        /**
                         * @return the matrix's determinant
                         */
                        float getDeterminant() const;

                    //## Setter ##//
                        /**
                         * First line setter
                         * @param l1 the new first line vector
                         */
                        void setL1(Vector2D<T> const& l1);
                        /**
                         * Second line setter
                         * @param l2 the new second line vector
                         */
                        void setL2(Vector2D<T> const& l2);
                        /**
                         * First column setter
                         * @param c1 the new first column vector
                         */
                        void setC1(Vector2D<T> const& c1);
                        /**
                         * Second column setter
                         * @param c2 the new second column vector
                         */
                        void setC2(Vector2D<T> const& c2);
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
                         * Perform a translation transformation on this
                         * @param u the translation vector
                         */
                        void translate(T u);
                        /**
                         * Perform a scale transformation on this
                         * @param u the scaling vector
                         */
                        void scale(T u);
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
                        Vector2D<T>& operator [](std::size_t index);
                        /**
                         * Return a const reference on a matrix's line
                         * @warning No range check performed
                         * @param   index the line's index
                         * @return        the line's reference
                         */
                        Vector2D<T> const& operator [](std::size_t index) const;

                    //## Assignment Operator ##//
                        /**
                         * Copy m into this
                         * @param m the object to copy into this
                         * @return  the reference of himself
                         */
                        Matrix2x2& operator =(Matrix2x2 const& m) = default;
                        /**
                         * Move m into this
                         * @param m the object to move into this
                         * @return  the reference of himself
                         */
                        Matrix2x2& operator =(Matrix2x2 && m) = default;

                    //## Shortcut Operator ##//
                        /**
                         * Add m into this
                         * @param m the matrix to add into this
                         * @return  the reference on himself
                         */
                        Matrix2x2& operator +=(Matrix2x2 const& m);
                        /**
                         * Subtract m into this
                         * @param m the matrix to subtract into this
                         * @return  the reference on himself
                         */
                        Matrix2x2& operator -=(Matrix2x2 const& m);
                        /**
                         * Multiply this by k
                         * @param k the multiplication factor
                         * @return  the reference of himself
                         */
                        Matrix2x2& operator *=(T k);
                        /**
                         * Multiply this with m
                         * @param m the matrix to multiply with this
                         * @return  the reference of himself
                         */
                        Matrix2x2& operator *=(Matrix2x2 const& m);
                        /**
                         * Divide this by k
                         * @param k the division factor
                         * @return  the reference of himself
                         */
                        Matrix2x2& operator /=(T k);
                        /**
                         * Divide this with m
                         * @param m the matrix to divide with this
                         * @return  the reference of himself
                         */
                        Matrix2x2& operator /=(Matrix2x2 const& m);

                    //## Arithmetic Operator ##//
                        /**
                         * Compute the matrix resulting in the addition of this and m
                         * @param m the matrix to add with this
                         * @return  the newly computed matrix
                         */
                        Matrix2x2 operator +(Matrix2x2 const& m) const;
                        /**
                         * Compute the matrix resulting in the subtraction of this and m
                         * @param m the matrix to subtract with this
                         * @return  the newly computed matrix
                         */
                        Matrix2x2 operator -(Matrix2x2 const& m) const;
                        /**
                         * Compute the matrix resulting in the multiplication of this by k
                         * @param k the multiplication factor
                         * @return  the newly computed matrix
                         */
                        Matrix2x2 operator *(T k) const;
                        /**
                         * Compute the matrix resulting in the multiplication of this and m
                         * @param m the matrix to multiply with this
                         * @return  the newly computed matrix
                         */
                        Matrix2x2 operator *(Matrix2x2 const& m) const;
                        /**
                         * Compute the vector resulting in the transformation of u by this
                         * @param u the vector to transform
                         * @return  the newly computed vector
                         */
                        Vector2D<T> operator *(Vector2D<T> const& u) const;
                        /**
                         * Compute the matrix resulting in the division of this by k
                         * @param k the division factor
                         * @return  the newly computed matrix
                         */
                        Matrix2x2 operator /(T k) const;
                        /**
                         * Compute the matrix resulting in the division of this and m
                         * @param m the matrix to divide with this
                         * @return  the newly computed matrix
                         */
                        Matrix2x2 operator /(Matrix2x2 const& m) const;

                    //## Comparison Operator ##//
                        /**
                         * Equality test between this and m
                         * @param m the matrix to test with this
                         * @return  the test's result
                         */
                        bool operator ==(Matrix2x2 const& m) const;
                        /**
                         * Difference test between this and m
                         * @param m the matrix to test with this
                         * @return  the test's result
                         */
                        bool operator !=(Matrix2x2 const& m) const;

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
            std::ostream& operator <<(std::ostream& stream, Matrix2x2<T> const& o);
        }
    }

    #include "NRE_Matrix2x2.tpp"
