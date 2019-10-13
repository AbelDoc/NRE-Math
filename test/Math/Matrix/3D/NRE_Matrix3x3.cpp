    
    /**
     * @file NRE_Matrix3x3.cpp
     * @brief Test of Math's API's Object : Matrix3x3
     * @author Louis ABEL
     * @date 13/10/2019
     * @copyright CC-BY-NC-SA
     */
    
    #include "../../../src/Header/NRE_Math.hpp"
    #include <Header/NRE_Tester.hpp>
    
    using namespace NRE::Math;
    using namespace NRE::Tester;
    
    TEST(Matrix3x3, CtrSeparate) {
        Matrix3x3<int> m(1.0f, 0.1, 0u, 0, 1, 0, 0, 0, 1);
        assertEquals(this, m.getL1(), Vector3D<int>(1, 0, 0));
        assertEquals(this, m.getL2(), Vector3D<int>(0, 1, 0));
        assertEquals(this, m.getL3(), Vector3D<int>(0, 0, 1));
    }
    
    TEST(Matrix3x3, CtrValue) {
        Matrix3x3<int> m(1);
        assertEquals(this, m.getL1(), Vector3D<int>(1, 1, 1));
        assertEquals(this, m.getL2(), Vector3D<int>(1, 1, 1));
        assertEquals(this, m.getL3(), Vector3D<int>(1, 1, 1));
    }
    
    TEST(Matrix3x3, CtrRows) {
        Matrix3x3<int> m(Vector3D<int>(1, 0, 0), Vector3D<int>(0, 1, 0), Vector3D<int>(0, 0, 1));
        assertEquals(this, m.getL1(), Vector3D<int>(1, 0, 0));
        assertEquals(this, m.getL2(), Vector3D<int>(0, 1, 0));
        assertEquals(this, m.getL3(), Vector3D<int>(0, 0, 1));
    }
    
    TEST(Matrix3x3, CtrCopy) {
        Matrix3x3<int> m(1, 0, 0, 0, 1, 0, 0, 0, 1);
        assertEquals(this, m.getL1(), Vector3D<int>(1, 0, 0));
        assertEquals(this, m.getL2(), Vector3D<int>(0, 1, 0));
        assertEquals(this, m.getL3(), Vector3D<int>(0, 0, 1));
        Matrix3x3<int> matrix(m);
        assertEquals(this, matrix.getL1(), Vector3D<int>(1, 0, 0));
        assertEquals(this, matrix.getL2(), Vector3D<int>(0, 1, 0));
        assertEquals(this, matrix.getL3(), Vector3D<int>(0, 0, 1));
    }

    TEST(Matrix3x3, CtrMove) {
        Matrix3x3<int> m(1, 0, 0, 0, 1, 0, 0, 0, 1);
        assertEquals(this, m.getL1(), Vector3D<int>(1, 0, 0));
        assertEquals(this, m.getL2(), Vector3D<int>(0, 1, 0));
        assertEquals(this, m.getL3(), Vector3D<int>(0, 0, 1));
        Matrix3x3<int> matrix(std::move(m));
        assertEquals(this, matrix.getL1(), Vector3D<int>(1, 0, 0));
        assertEquals(this, matrix.getL2(), Vector3D<int>(0, 1, 0));
        assertEquals(this, matrix.getL3(), Vector3D<int>(0, 0, 1));
    }
    
    TEST(Matrix3x3, Convertor) {
        Matrix3x3<float> m(1.5f, 0.1f, 0.23f, 0, 1, 0, 0, 0, 1);
        Matrix3x3<int> matrix(m);
        assertEquals(this, matrix.getL1(), Vector3D<int>(1, 0, 0));
        assertEquals(this, matrix.getL2(), Vector3D<int>(0, 1, 0));
        assertEquals(this, matrix.getL3(), Vector3D<int>(0, 0, 1));
    }
    
    TEST(Matrix3x3, Convertor4D) {
        Matrix4x4<float> m(1.5f, 0.1f, 0.23f, 0.4f, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1);
        Matrix3x3<int> matrix(m);
        assertEquals(this, matrix.getL1(), Vector3D<int>(1, 0, 0));
        assertEquals(this, matrix.getL2(), Vector3D<int>(0, 1, 0));
        assertEquals(this, matrix.getL3(), Vector3D<int>(0, 0, 1));
    }
    
    TEST(Matrix3x3, GetRows) {
        Matrix3x3<int> m(1, 2, 3, 4, 5, 6, 7, 8, 9);
        assertEquals(this, m.getL1(), Vector3D<int>(1, 2, 3));
        assertEquals(this, m.getL2(), Vector3D<int>(4, 5, 6));
        assertEquals(this, m.getL3(), Vector3D<int>(7, 8, 9));
    }
    
    TEST(Matrix3x3, GetColumns) {
        Matrix3x3<int> m(1, 2, 3, 4, 5, 6, 7, 8, 9);
        assertEquals(this, m.getC1(), Vector3D<int>(1, 4, 7));
        assertEquals(this, m.getC2(), Vector3D<int>(2, 5, 8));
        assertEquals(this, m.getC3(), Vector3D<int>(3, 6, 9));
    }
    
    TEST(Matrix3x3, Determinant) {
        Matrix3x3<int> m(1, 0, 0, 0, 1, 0, 0, 0, 1);
        assertTrue(this, equal(m.getDeterminant(), 1));
        Matrix3x3<int> m2(1, 2, 3, 4, 5, 6, 7, 8, 9);
        assertTrue(this, equal(m2.getDeterminant(), 0));
    }
    
    TEST(Matrix3x3, SetRows) {
        Matrix3x3<int> m(1, 2, 3, 4, 5, 6, 7, 8, 9);
        assertEquals(this, m.getL1(), Vector3D<int>(1, 2, 3));
        assertEquals(this, m.getL2(), Vector3D<int>(4, 5, 6));
        assertEquals(this, m.getL3(), Vector3D<int>(7, 8, 9));
        m.setL1(Vector3D<int>(1, 0, 0));
        m.setL2(Vector3D<int>(0, 1, 0));
        m.setL3(Vector3D<float>(0.1, 0.1, 1.5));
        assertEquals(this, m.getL1(), Vector3D<int>(1, 0, 0));
        assertEquals(this, m.getL2(), Vector3D<int>(0, 1, 0));
        assertEquals(this, m.getL3(), Vector3D<int>(0, 0, 1));
    }
    
    TEST(Matrix3x3, SetColumns) {
        Matrix3x3<int> m(1, 0, 0, 0, 1, 0, 0, 0, 1);
        assertEquals(this, m.getL1(), Vector3D<int>(1, 0, 0));
        assertEquals(this, m.getL2(), Vector3D<int>(0, 1, 0));
        assertEquals(this, m.getL3(), Vector3D<int>(0, 0, 1));
        m.setC1(Vector3D<int>(1, 2, 3));
        m.setC2(Vector3D<int>(4, 5, 6));
        m.setC3(Vector3D<float>(7.1, 8.1, 9.5));
        assertEquals(this, m.getL1(), Vector3D<int>(1, 4, 7));
        assertEquals(this, m.getL2(), Vector3D<int>(2, 5, 8));
        assertEquals(this, m.getL3(), Vector3D<int>(3, 6, 9));
    }
    
    TEST(Matrix3x3, SetIdentity) {
        Matrix3x3<int> m(1, 2, 3, 4, 5, 6, 7, 8, 9);
        assertEquals(this, m.getL1(), Vector3D<int>(1, 2, 3));
        assertEquals(this, m.getL2(), Vector3D<int>(4, 5, 6));
        assertEquals(this, m.getL3(), Vector3D<int>(7, 8, 9));
        m.setIdentity();
        assertEquals(this, m.getL1(), Vector3D<int>(1, 0, 0));
        assertEquals(this, m.getL2(), Vector3D<int>(0, 1, 0));
        assertEquals(this, m.getL3(), Vector3D<int>(0, 0, 1));
    }
    
    TEST(Matrix3x3, Transpose) {
        Matrix3x3<int> m(1, 2, 3, 4, 5, 6, 7, 8, 9);
        assertEquals(this, m.getL1(), Vector3D<int>(1, 2, 3));
        assertEquals(this, m.getL2(), Vector3D<int>(4, 5, 6));
        assertEquals(this, m.getL3(), Vector3D<int>(7, 8, 9));
        m.transpose();
        assertEquals(this, m.getL1(), Vector3D<int>(1, 4, 7));
        assertEquals(this, m.getL2(), Vector3D<int>(2, 5, 8));
        assertEquals(this, m.getL3(), Vector3D<int>(3, 6, 9));
    }

    TEST(Matrix3x3, Inverse) {
        Matrix3x3<float> m(1, 2, 2, 2, 1, 2, 2, 2, 1);
        assertEquals(this, m.getL1(), Vector3D<float>(1, 2, 2));
        assertEquals(this, m.getL2(), Vector3D<float>(2, 1, 2));
        assertEquals(this, m.getL3(), Vector3D<float>(2, 2, 1));
        m.inverse();
        assertEquals(this, m.getL1(), Vector3D<float>(-3.0 / 5.0,  2.0 / 5.0,  2.0 / 5.0));
        assertEquals(this, m.getL2(), Vector3D<float>( 2.0 / 5.0, -3.0 / 5.0,  2.0 / 5.0));
        assertEquals(this, m.getL3(), Vector3D<float>( 2.0 / 5.0,  2.0 / 5.0, -3.0 / 5.0));
    }
    
    TEST(Matrix3x3, InverseIdentity) {
        Matrix3x3<int> m(1, 0, 0, 0, 1, 0, 0, 0, 1);
        assertEquals(this, m.getL1(), Vector3D<int>(1, 0, 0));
        assertEquals(this, m.getL2(), Vector3D<int>(0, 1, 0));
        assertEquals(this, m.getL3(), Vector3D<int>(0, 0, 1));
        m.inverse();
        assertEquals(this, m.getL1(), Vector3D<int>(1, 0, 0));
        assertEquals(this, m.getL2(), Vector3D<int>(0, 1, 0));
        assertEquals(this, m.getL3(), Vector3D<int>(0, 0, 1));
    }
    
    TEST(Matrix3x3, Translate) {
        Matrix3x3<int> m(1, 0, 0, 0, 1, 0, 0, 0, 1);
        assertEquals(this, m.getL1(), Vector3D<int>(1, 0, 0));
        assertEquals(this, m.getL2(), Vector3D<int>(0, 1, 0));
        assertEquals(this, m.getL3(), Vector3D<int>(0, 0, 1));
        m.translate(Vector2D<float>(1.5, 1.5));
        assertEquals(this, m.getL1(), Vector3D<int>(1, 0, 1));
        assertEquals(this, m.getL2(), Vector3D<int>(0, 1, 1));
        assertEquals(this, m.getL3(), Vector3D<int>(0, 0, 1));
        assertEquals(this, Vector3D<int>(1, 1, 1), m * Vector3D<int>(0, 0, 1));
    }

    TEST(Matrix3x3, Scale) {
        Matrix3x3<int> m(1, 0, 0, 0, 1, 0, 0, 0, 1);
        assertEquals(this, m.getL1(), Vector3D<int>(1, 0, 0));
        assertEquals(this, m.getL2(), Vector3D<int>(0, 1, 0));
        assertEquals(this, m.getL3(), Vector3D<int>(0, 0, 1));
        m.scale(Vector2D<float>(5.5, 5.5));
        assertEquals(this, m.getL1(), Vector3D<int>(5, 0, 0));
        assertEquals(this, m.getL2(), Vector3D<int>(0, 5, 0));
        assertEquals(this, m.getL3(), Vector3D<int>(0, 0, 1));
        assertEquals(this, Vector3D<int>(0, 0, 1), m * Vector3D<int>(0, 0, 1));
        assertEquals(this, Vector3D<int>(5, 5, 1), m * Vector3D<int>(1, 1, 1));
    }

    TEST(Matrix3x3, StretchX) {
        Matrix3x3<int> m(1, 0, 0, 0, 1, 0, 0, 0, 1);
        assertEquals(this, m.getL1(), Vector3D<int>(1, 0, 0));
        assertEquals(this, m.getL2(), Vector3D<int>(0, 1, 0));
        assertEquals(this, m.getL3(), Vector3D<int>(0, 0, 1));
        m.stretchX(5.5);
        assertEquals(this, m.getL1(), Vector3D<int>(5, 0, 0));
        assertEquals(this, m.getL2(), Vector3D<int>(0, 1, 0));
        assertEquals(this, m.getL3(), Vector3D<int>(0, 0, 1));
        assertEquals(this, Vector3D<int>(0, 0, 1), m * Vector3D<int>(0, 0, 1));
        assertEquals(this, Vector3D<int>(5, 0, 1), m * Vector3D<int>(1, 0, 1));
    }

    TEST(Matrix3x3, StretchY) {
        Matrix3x3<int> m(1, 0, 0, 0, 1, 0, 0, 0, 1);
        assertEquals(this, m.getL1(), Vector3D<int>(1, 0, 0));
        assertEquals(this, m.getL2(), Vector3D<int>(0, 1, 0));
        assertEquals(this, m.getL3(), Vector3D<int>(0, 0, 1));
        m.stretchY(5.5);
        assertEquals(this, m.getL1(), Vector3D<int>(1, 0, 0));
        assertEquals(this, m.getL2(), Vector3D<int>(0, 5, 0));
        assertEquals(this, m.getL3(), Vector3D<int>(0, 0, 1));
        assertEquals(this, Vector3D<int>(0, 0, 1), m * Vector3D<int>(0, 0, 1));
        assertEquals(this, Vector3D<int>(0, 5, 1), m * Vector3D<int>(0, 1, 1));
    }

    TEST(Matrix3x3, SqueezeX) {
        Matrix3x3<float> m(1, 0, 0, 0, 1, 0, 0, 0, 1);
        assertEquals(this, m.getL1(), Vector3D<float>(1, 0, 0));
        assertEquals(this, m.getL2(), Vector3D<float>(0, 1, 0));
        assertEquals(this, m.getL3(), Vector3D<float>(0, 0, 1));
        m.squeezeX(5);
        assertEquals(this, m.getL1(), Vector3D<float>(1.0 / 5.0, 0, 0));
        assertEquals(this, m.getL2(), Vector3D<float>(0, 5, 0));
        assertEquals(this, m.getL3(), Vector3D<float>(0, 0, 1));
        assertEquals(this, Vector3D<float>(0, 0, 1), m * Vector3D<float>(0, 0, 1));
        assertEquals(this, Vector3D<float>(1.0 / 5.0, 5, 1), m * Vector3D<float>(1, 1, 1));
    }

    TEST(Matrix3x3, SqueezeY) {
        Matrix3x3<float> m(1, 0, 0, 0, 1, 0, 0, 0, 1);
        assertEquals(this, m.getL1(), Vector3D<float>(1, 0, 0));
        assertEquals(this, m.getL2(), Vector3D<float>(0, 1, 0));
        assertEquals(this, m.getL3(), Vector3D<float>(0, 0, 1));
        m.squeezeY(5.0);
        assertEquals(this, m.getL1(), Vector3D<float>(5, 0, 0));
        assertEquals(this, m.getL2(), Vector3D<float>(0, 1.0 / 5.0, 0));
        assertEquals(this, m.getL3(), Vector3D<float>(0, 0, 1));
        assertEquals(this, Vector3D<float>(0, 0, 1), m * Vector3D<float>(0, 0, 1));
        assertEquals(this, Vector3D<float>(5, 1.0 / 5.0, 1), m * Vector3D<float>(1, 1, 1));
    }
    
    TEST(Matrix3x3, ShearX) {
        Matrix3x3<int> m(1, 0, 0, 0, 1, 0, 0, 0, 1);
        assertEquals(this, m.getL1(), Vector3D<int>(1, 0, 0));
        assertEquals(this, m.getL2(), Vector3D<int>(0, 1, 0));
        assertEquals(this, m.getL3(), Vector3D<int>(0, 0, 1));
        m.shearX(5.5);
        assertEquals(this, m.getL1(), Vector3D<int>(1, 5, 0));
        assertEquals(this, m.getL2(), Vector3D<int>(0, 1, 0));
        assertEquals(this, m.getL3(), Vector3D<int>(0, 0, 1));
        assertEquals(this, Vector3D<int>(0, 0, 1), m * Vector3D<int>(0, 0, 1));
        assertEquals(this, Vector3D<int>(5, 1, 1), m * Vector3D<int>(0, 1, 1));
    }

    TEST(Matrix3x3, ShearY) {
        Matrix3x3<int> m(1, 0, 0, 0, 1, 0, 0, 0, 1);
        assertEquals(this, m.getL1(), Vector3D<int>(1, 0, 0));
        assertEquals(this, m.getL2(), Vector3D<int>(0, 1, 0));
        assertEquals(this, m.getL3(), Vector3D<int>(0, 0, 1));
        m.shearY(5.5);
        assertEquals(this, m.getL1(), Vector3D<int>(1, 0, 0));
        assertEquals(this, m.getL2(), Vector3D<int>(5, 1, 0));
        assertEquals(this, m.getL3(), Vector3D<int>(0, 0, 1));
        assertEquals(this, Vector3D<int>(0, 0, 1), m * Vector3D<int>(0, 0, 1));
        assertEquals(this, Vector3D<int>(1, 5, 1), m * Vector3D<int>(1, 0, 1));
    }
    
    TEST(Matrix3x3, Rotate) {
        Matrix3x3<int> m(1, 0, 0, 0, 1, 0, 0, 0, 1);
        assertEquals(this, m.getL1(), Vector3D<int>(1, 0, 0));
        assertEquals(this, m.getL2(), Vector3D<int>(0, 1, 0));
        assertEquals(this, m.getL3(), Vector3D<int>(0, 0, 1));
        m.rotate(90_deg);
        assertEquals(this, m.getL1(), Vector3D<int>(0, 1, 0));
        assertEquals(this, m.getL2(), Vector3D<int>(-1, 0, 0));
        assertEquals(this, m.getL3(), Vector3D<int>(0, 0, 1));
        assertEquals(this, Vector3D<int>(0, 0, 1), m * Vector3D<int>(0, 0, 1));
        assertEquals(this, Vector3D<int>(5, 0, 1), m * Vector3D<int>(0, 5, 1));
    }
    
    TEST(Matrix3x3, Value) {
        Matrix3x3<int> m(1, 2, 3, 4, 5, 6, 7, 8, 9);
        assertEquals(this, *(m.value()), 1);
        assertEquals(this, *(m.value() + 1), 2);
        assertEquals(this, *(m.value() + 2), 3);
        assertEquals(this, *(m.value() + 3), 4);
        assertEquals(this, *(m.value() + 4), 5);
        assertEquals(this, *(m.value() + 5), 6);
        assertEquals(this, *(m.value() + 6), 7);
        assertEquals(this, *(m.value() + 7), 8);
        assertEquals(this, *(m.value() + 8), 9);
    }
    
    TEST(Matrix3x3, Access) {
        Matrix3x3<int> m(1, 2, 3, 4, 5, 6, 7, 8, 9);
        assertEquals(this, m[0], Vector3D<int>(1, 2, 3));
        assertEquals(this, m[1], Vector3D<int>(4, 5, 6));
        assertEquals(this, m[2], Vector3D<int>(7, 8, 9));
        m[0] = Vector3D<int>(1, 0, 0);
        m[1] = Vector3D<int>(0, 1, 0);
        m[2] = Vector3D<int>(0, 0, 1);
        assertEquals(this, m.getL1(), Vector3D<int>(1, 0, 0));
        assertEquals(this, m.getL2(), Vector3D<int>(0, 1, 0));
        assertEquals(this, m.getL3(), Vector3D<int>(0, 0, 1));
    }
    
    TEST(Matrix3x3, Assign) {
        Matrix3x3<int> m1(1, 2, 3, 4, 5, 6, 7, 8, 9);
        Matrix3x3<int> m2(1, 0, 0, 0, 1, 0, 0, 0, 1);
        assertEquals(this, m1.getL1(), Vector3D<int>(1, 2, 3));
        assertEquals(this, m1.getL2(), Vector3D<int>(4, 5, 6));
        assertEquals(this, m1.getL3(), Vector3D<int>(7, 8, 9));
        m1 = m2;
        assertEquals(this, m1.getL1(), Vector3D<int>(1, 0, 0));
        assertEquals(this, m1.getL2(), Vector3D<int>(0, 1, 0));
        assertEquals(this, m1.getL3(), Vector3D<int>(0, 0, 1));
    }

    TEST(Matrix3x3, AssignMove) {
        Matrix3x3<int> m1(1, 2, 3, 4, 5, 6, 7, 8, 9);
        Matrix3x3<int> m2(1, 0, 0, 0, 1, 0, 0, 0, 1);
        assertEquals(this, m1.getL1(), Vector3D<int>(1, 2, 3));
        assertEquals(this, m1.getL2(), Vector3D<int>(4, 5, 6));
        assertEquals(this, m1.getL3(), Vector3D<int>(7, 8, 9));
        m1 = std::move(m2);
        assertEquals(this, m1.getL1(), Vector3D<int>(1, 0, 0));
        assertEquals(this, m1.getL2(), Vector3D<int>(0, 1, 0));
        assertEquals(this, m1.getL3(), Vector3D<int>(0, 0, 1));
    }

    TEST(Matrix3x3, AssignDifferent) {
        Matrix3x3<int> m1(1, 2, 3, 4, 5, 6, 7, 8, 9);
        Matrix3x3<float> m2(1.5, 0.1, 0.2, 0, 1, 0, 0, 0, 1);
        assertEquals(this, m1.getL1(), Vector3D<int>(1, 2, 3));
        assertEquals(this, m1.getL2(), Vector3D<int>(4, 5, 6));
        assertEquals(this, m1.getL3(), Vector3D<int>(7, 8, 9));
        m1 = m2;
        assertEquals(this, m1.getL1(), Vector3D<int>(1, 0, 0));
        assertEquals(this, m1.getL2(), Vector3D<int>(0, 1, 0));
        assertEquals(this, m1.getL3(), Vector3D<int>(0, 0, 1));
    }

    TEST(Matrix3x3, AssignMoveDifferent) {
        Matrix3x3<int> m1(1, 2, 3, 4, 5, 6, 7, 8, 9);
        Matrix3x3<float> m2(1.5, 0.1, 0.2, 0, 1, 0, 0, 0, 1);
        assertEquals(this, m1.getL1(), Vector3D<int>(1, 2, 3));
        assertEquals(this, m1.getL2(), Vector3D<int>(4, 5, 6));
        assertEquals(this, m1.getL3(), Vector3D<int>(7, 8, 9));
        m1 = std::move(m2);
        assertEquals(this, m1.getL1(), Vector3D<int>(1, 0, 0));
        assertEquals(this, m1.getL2(), Vector3D<int>(0, 1, 0));
        assertEquals(this, m1.getL3(), Vector3D<int>(0, 0, 1));
    }
    
    TEST(Matrix3x3, SelfAdd) {
        Matrix3x3<int> m1(10);
        Matrix3x3<float> m2(1.5);
        assertEquals(this, m1.getL1(), Vector3D<int>(10, 10, 10));
        assertEquals(this, m1.getL2(), Vector3D<int>(10, 10, 10));
        assertEquals(this, m1.getL3(), Vector3D<int>(10, 10, 10));
        m1 += m2;
        assertEquals(this, m1.getL1(), Vector3D<int>(11, 11, 11));
        assertEquals(this, m1.getL2(), Vector3D<int>(11, 11, 11));
        assertEquals(this, m1.getL3(), Vector3D<int>(11, 11, 11));
    }
    
    TEST(Matrix3x3, SelfSub) {
        Matrix3x3<int> m1(10);
        Matrix3x3<float> m2(1.5);
        assertEquals(this, m1.getL1(), Vector3D<int>(10, 10, 10));
        assertEquals(this, m1.getL2(), Vector3D<int>(10, 10, 10));
        assertEquals(this, m1.getL3(), Vector3D<int>(10, 10, 10));
        m1 -= m2;
        assertEquals(this, m1.getL1(), Vector3D<int>(8, 8, 8));
        assertEquals(this, m1.getL2(), Vector3D<int>(8, 8, 8));
        assertEquals(this, m1.getL3(), Vector3D<int>(8, 8, 8));
    }
    
    TEST(Matrix3x3, SelfMultScalar) {
        Matrix3x3<int> m(10);
        assertEquals(this, m.getL1(), Vector3D<int>(10, 10, 10));
        assertEquals(this, m.getL2(), Vector3D<int>(10, 10, 10));
        assertEquals(this, m.getL3(), Vector3D<int>(10, 10, 10));
        m *= 1.5;
        assertEquals(this, m.getL1(), Vector3D<int>(15, 15, 15));
        assertEquals(this, m.getL2(), Vector3D<int>(15, 15, 15));
        assertEquals(this, m.getL3(), Vector3D<int>(15, 15, 15));
    }

    TEST(Matrix3x3, SelfMultMatrix) {
        Matrix3x3<int> m1;
        m1.setIdentity();
        m1.translate(Vector2D<float>(10.5, 10.5));
        Matrix3x3<float> m2;
        m2.setIdentity();
        m2.scale(Vector2D<int>(20, 20));
        m1 *= m2;
        assertEquals(this, m1.getL1(), Vector3D<int>(20, 0, 10));
        assertEquals(this, m1.getL2(), Vector3D<int>(0, 20, 10));
        assertEquals(this, m1.getL3(), Vector3D<int>(0, 0, 1));
    }
    
    TEST(Matrix3x3, SelfDivScalar) {
        Matrix3x3<float> m1(10.5);
        assertEquals(this, m1.getL1(), Vector3D<float>(10.5, 10.5, 10.5));
        assertEquals(this, m1.getL2(), Vector3D<float>(10.5, 10.5, 10.5));
        assertEquals(this, m1.getL3(), Vector3D<float>(10.5, 10.5, 10.5));
        m1 /= 10.0;
        assertEquals(this, m1.getL1(), Vector3D<float>(1.05, 1.05, 1.05));
        assertEquals(this, m1.getL2(), Vector3D<float>(1.05, 1.05, 1.05));
        assertEquals(this, m1.getL3(), Vector3D<float>(1.05, 1.05, 1.05));
    }
    
    TEST(Matrix3x3, SelfDivMat) {
        Matrix3x3<int> m1;
        m1.setIdentity();
        m1.translate(Vector2D<float>(10.5, 10.5));
        Matrix3x3<float> m2;
        m2.setIdentity();
        m2.scale(Vector2D<int>(20, 20));
        m2 /= m1;
        assertEquals(this, m2.getL1(), Vector3D<float>(20, 0, -200));
        assertEquals(this, m2.getL2(), Vector3D<float>(0, 20, -200));
        assertEquals(this, m2.getL3(), Vector3D<float>(0, 0, 1));
    }
    
    TEST(Matrix3x3, Add) {
        Matrix3x3<int> m1(10);
        Matrix3x3<float> m2(1.5);
        assertEquals(this, m1.getL1(), Vector3D<int>(10, 10, 10));
        assertEquals(this, m1.getL2(), Vector3D<int>(10, 10, 10));
        assertEquals(this, m1.getL3(), Vector3D<int>(10, 10, 10));
        auto m3 = m1 + m2;
        assertTrue(this, std::is_same<decltype(m3), Matrix3x3<float>>::value);
        assertEquals(this, m3.getL1(), Vector3D<float>(11.5, 11.5, 11.5));
        assertEquals(this, m3.getL2(), Vector3D<float>(11.5, 11.5, 11.5));
        assertEquals(this, m3.getL3(), Vector3D<float>(11.5, 11.5, 11.5));
    }

    TEST(Matrix3x3, Sub) {
        Matrix3x3<int> m1(10);
        Matrix3x3<float> m2(1.5);
        assertEquals(this, m1.getL1(), Vector3D<int>(10, 10, 10));
        assertEquals(this, m1.getL2(), Vector3D<int>(10, 10, 10));
        assertEquals(this, m1.getL3(), Vector3D<int>(10, 10, 10));
        auto m3 = m1 - m2;
        assertTrue(this, std::is_same<decltype(m3), Matrix3x3<float>>::value);
        assertEquals(this, m3.getL1(), Vector3D<float>(8.5, 8.5, 8.5));
        assertEquals(this, m3.getL2(), Vector3D<float>(8.5, 8.5, 8.5));
        assertEquals(this, m3.getL3(), Vector3D<float>(8.5, 8.5, 8.5));
    }
    
    TEST(Matrix3x3, MultScalar) {
        Matrix3x3<int> m(10);
        assertEquals(this, m.getL1(), Vector3D<int>(10, 10, 10));
        assertEquals(this, m.getL2(), Vector3D<int>(10, 10, 10));
        assertEquals(this, m.getL3(), Vector3D<int>(10, 10, 10));
        auto m2 = m * 1.5f;
        assertTrue(this, std::is_same<decltype(m2), Matrix3x3<float>>::value);
        assertEquals(this, m2.getL1(), Vector3D<float>(15, 15, 15));
        assertEquals(this, m2.getL2(), Vector3D<float>(15, 15, 15));
        assertEquals(this, m2.getL3(), Vector3D<float>(15, 15, 15));
    }

    TEST(Matrix3x3, MultMatrix) {
        Matrix3x3<int> m1;
        m1.setIdentity();
        m1.translate(Vector2D<float>(10.5, 10.5));
        Matrix3x3<float> m2;
        m2.setIdentity();
        m2.scale(Vector2D<int>(20, 20));
        auto m3 = m1 * m2;
        assertTrue(this, std::is_same<decltype(m3), Matrix3x3<float>>::value);
        assertEquals(this, m3.getL1(), Vector3D<float>(20, 0, 10));
        assertEquals(this, m3.getL2(), Vector3D<float>(0, 20, 10));
        assertEquals(this, m3.getL3(), Vector3D<float>(0, 0, 1));
    }
    
    TEST(Matrix3x3, MultObjects) {
        Matrix3x3<float> m;
        m.setIdentity();
        m.translate(Vector2D<float>(10.5, 20.5));
        
        Vector3D<int> v(2, 2, 1);
        Segment3D<int> s(0, 0, 2, 2);
        BezierCurve3D b({{0, 0, 1}, {2, 2, 1}, {10, 10, 1}});
        v = m * v;
        s = m * s;
        b = m * b;
        assertEquals(this, v, Vector3D<int>(12, 22, 1));
        assertEquals(this, s, Segment3D<int>(10, 20, 12, 22));
        assertEquals(this, b.getPoint(0), Point3D<float>(10.5, 20.5, 1));
        assertEquals(this, b.getPoint(1), Point3D<float>(12.5, 22.5, 1));
        assertEquals(this, b.getPoint(2), Point3D<float>(20.5, 30.5, 1));
    }

    TEST(Matrix3x3, DivScalar) {
        Matrix3x3<float> m(10.5);
        assertEquals(this, m.getL1(), Vector3D<float>(10.5, 10.5, 10.5));
        assertEquals(this, m.getL2(), Vector3D<float>(10.5, 10.5, 10.5));
        assertEquals(this, m.getL3(), Vector3D<float>(10.5, 10.5, 10.5));
        auto m1 = m / 10.0;
        assertTrue(this, std::is_same<decltype(m1), Matrix3x3<double>>::value);
        assertEquals(this, m1.getL1(), Vector3D<double>(1.05, 1.05, 1.05));
        assertEquals(this, m1.getL2(), Vector3D<double>(1.05, 1.05, 1.05));
        assertEquals(this, m1.getL3(), Vector3D<double>(1.05, 1.05, 1.05));
    }

    TEST(Matrix3x3, DivMat) {
        Matrix3x3<int> m1;
        m1.setIdentity();
        m1.translate(Vector2D<float>(10.5, 10.5));
        Matrix3x3<float> m2;
        m2.setIdentity();
        m2.scale(Vector2D<int>(20, 20));
        auto m3 = m2 / m1;
        assertTrue(this, std::is_same<decltype(m3), Matrix3x3<float>>::value);
        assertEquals(this, m3.getL1(), Vector3D<float>(20, 0, -200));
        assertEquals(this, m3.getL2(), Vector3D<float>(0, 20, -200));
        assertEquals(this, m3.getL3(), Vector3D<float>(0, 0, 1));
    }
    
    TEST(Matrix3x3, Equality) {
        Matrix3x3<int> m1;
        m1.setIdentity();
        Matrix3x3<int> m2;
        m2.setIdentity();
        assertEquals(this, m1, m2);
    }
    
    TEST(Matrix3x3, EqualityDifference) {
        Matrix3x3<int> m1;
        m1.setIdentity();
        Matrix3x3<float> m2;
        m2.setIdentity();
        assertTrue(this, m1 == m2);
    }

    TEST(Matrix3x3, Difference) {
        Matrix3x3<int> m1;
        m1.setIdentity();
        Matrix3x3<float> m2(1.5);
        assertTrue(this, m1 != m2);
    }