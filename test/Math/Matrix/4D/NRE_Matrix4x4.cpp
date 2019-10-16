    
    /**
     * @file NRE_Matrix4x4.cpp
     * @brief Test of Math's API's Object : Matrix4x4
     * @author Louis ABEL
     * @date 13/10/2019
     * @copyright CC-BY-NC-SA
     */
    
    #include "../../../src/Header/NRE_Math.hpp"
    #include <Header/NRE_Tester.hpp>
    
    using namespace NRE::Math;
    using namespace NRE::Tester;
    
    TEST(Matrix4x4, CtrSeparate) {
        Matrix4x4<int> m(1.0, 0.1, 0.1, 0.1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1);
        assertEquals(this, m.getL1(), Vector4D<int>(1, 0, 0, 0));
        assertEquals(this, m.getL2(), Vector4D<int>(0, 1, 0, 0));
        assertEquals(this, m.getL3(), Vector4D<int>(0, 0, 1, 0));
        assertEquals(this, m.getL4(), Vector4D<int>(0, 0, 0, 1));
    }
    
    TEST(Matrix4x4, CtrValue) {
        Matrix4x4<int> m(1);
        assertEquals(this, m.getL1(), Vector4D<int>(1, 1, 1, 1));
        assertEquals(this, m.getL2(), Vector4D<int>(1, 1, 1, 1));
        assertEquals(this, m.getL3(), Vector4D<int>(1, 1, 1, 1));
        assertEquals(this, m.getL4(), Vector4D<int>(1, 1, 1, 1));
    }
    
    TEST(Matrix4x4, CtrRows) {
        Matrix4x4<int> m(Vector4D<int>(1, 0, 0, 0), Vector4D<int>(0, 1, 0, 0), Vector4D<int>(0, 0, 1, 0), Vector4D<int>(0, 0, 0, 1));
        assertEquals(this, m.getL1(), Vector4D<int>(1, 0, 0, 0));
        assertEquals(this, m.getL2(), Vector4D<int>(0, 1, 0, 0));
        assertEquals(this, m.getL3(), Vector4D<int>(0, 0, 1, 0));
        assertEquals(this, m.getL4(), Vector4D<int>(0, 0, 0, 1));
    }
    
    TEST(Matrix4x4, CtrCopy) {
        Matrix4x4<int> m(1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1);
        assertEquals(this, m.getL1(), Vector4D<int>(1, 0, 0, 0));
        assertEquals(this, m.getL2(), Vector4D<int>(0, 1, 0, 0));
        assertEquals(this, m.getL3(), Vector4D<int>(0, 0, 1, 0));
        assertEquals(this, m.getL4(), Vector4D<int>(0, 0, 0, 1));
        Matrix4x4<int> matrix(m);
        assertEquals(this, matrix.getL1(), Vector4D<int>(1, 0, 0, 0));
        assertEquals(this, matrix.getL2(), Vector4D<int>(0, 1, 0, 0));
        assertEquals(this, matrix.getL3(), Vector4D<int>(0, 0, 1, 0));
        assertEquals(this, matrix.getL4(), Vector4D<int>(0, 0, 0, 1));
    }

    TEST(Matrix4x4, CtrMove) {
        Matrix4x4<int> m(1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1);
        assertEquals(this, m.getL1(), Vector4D<int>(1, 0, 0, 0));
        assertEquals(this, m.getL2(), Vector4D<int>(0, 1, 0, 0));
        assertEquals(this, m.getL3(), Vector4D<int>(0, 0, 1, 0));
        assertEquals(this, m.getL4(), Vector4D<int>(0, 0, 0, 1));
        Matrix4x4<int> matrix(std::move(m));
        assertEquals(this, matrix.getL1(), Vector4D<int>(1, 0, 0, 0));
        assertEquals(this, matrix.getL2(), Vector4D<int>(0, 1, 0, 0));
        assertEquals(this, matrix.getL3(), Vector4D<int>(0, 0, 1, 0));
        assertEquals(this, matrix.getL4(), Vector4D<int>(0, 0, 0, 1));
    }
    
    TEST(Matrix4x4, Convertor) {
        Matrix4x4<float> m(1.5, 0.5, 0.5, 0.5, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1);
        Matrix4x4<int> matrix(m);
        assertEquals(this, matrix.getL1(), Vector4D<int>(1, 0, 0, 0));
        assertEquals(this, matrix.getL2(), Vector4D<int>(0, 1, 0, 0));
        assertEquals(this, matrix.getL3(), Vector4D<int>(0, 0, 1, 0));
        assertEquals(this, matrix.getL4(), Vector4D<int>(0, 0, 0, 1));
    }
    
    TEST(Matrix4x4, Convertor3D) {
        Matrix3x3<int> m(1, 2, 3, 4, 5, 6, 7, 8, 9);
        Matrix4x4<int> matrix(m);
        assertEquals(this, matrix.getL1(), Vector4D<int>(1, 2, 3, 0));
        assertEquals(this, matrix.getL2(), Vector4D<int>(4, 5, 6, 0));
        assertEquals(this, matrix.getL3(), Vector4D<int>(7, 8, 9, 0));
        assertEquals(this, matrix.getL4(), Vector4D<int>(0, 0, 0, 1));
    }
    
    TEST(Matrix4x4, ConvertorQuaternion) {
        Quaternion<float> q(Vector3D<float>(1, 0, 0), 90_deg);
        Matrix4x4<float> m(q);
        Matrix4x4<float> m2;
        m2.setIdentity();
        m2.rotate(90_deg, Vector3D<float>(1, 0, 0));
        
        assertEquals(this, m, m2);
    }
    
    TEST(Matrix4x4, GetRows) {
        Matrix4x4<int> m(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);
        assertEquals(this, m.getL1(), Vector4D<int>(1, 2, 3, 4));
        assertEquals(this, m.getL2(), Vector4D<int>(5, 6, 7, 8));
        assertEquals(this, m.getL3(), Vector4D<int>(9, 10, 11, 12));
        assertEquals(this, m.getL4(), Vector4D<int>(13, 14, 15, 16));
    }

    TEST(Matrix4x4, GetColumns) {
        Matrix4x4<int> m(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);
        assertEquals(this, m.getC1(), Vector4D<int>(1, 5, 9, 13));
        assertEquals(this, m.getC2(), Vector4D<int>(2, 6, 10, 14));
        assertEquals(this, m.getC3(), Vector4D<int>(3, 7, 11, 15));
        assertEquals(this, m.getC4(), Vector4D<int>(4, 8, 12, 16));
    }
    
    TEST(Matrix4x4, Determinant) {
        Matrix4x4<int> m(1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1);
        assertTrue(this, equal(m.getDeterminant(), 1));
        Matrix4x4<int> m2(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);
        assertTrue(this, equal(m2.getDeterminant(), 0));
    }
    
    TEST(Matrix4x4, SetRows) {
        Matrix4x4<int> m(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);
        assertEquals(this, m.getL1(), Vector4D<int>(1, 2, 3, 4));
        assertEquals(this, m.getL2(), Vector4D<int>(5, 6, 7, 8));
        assertEquals(this, m.getL3(), Vector4D<int>(9, 10, 11, 12));
        assertEquals(this, m.getL4(), Vector4D<int>(13, 14, 15, 16));
        m.setL1(Vector4D<int>(1, 0, 0, 0));
        m.setL2(Vector4D<int>(0, 1, 0, 0));
        m.setL3(Vector4D<int>(0, 0, 1, 0));
        m.setL4(Vector4D<int>(0, 0, 0, 1));
        assertEquals(this, m.getL1(), Vector4D<int>(1, 0, 0, 0));
        assertEquals(this, m.getL2(), Vector4D<int>(0, 1, 0, 0));
        assertEquals(this, m.getL3(), Vector4D<int>(0, 0, 1, 0));
        assertEquals(this, m.getL4(), Vector4D<int>(0, 0, 0, 1));
    }
    
    TEST(Matrix4x4, SetColumns) {
        Matrix4x4<int> m(1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1);
        assertEquals(this, m.getL1(), Vector4D<int>(1, 0, 0, 0));
        assertEquals(this, m.getL2(), Vector4D<int>(0, 1, 0, 0));
        assertEquals(this, m.getL3(), Vector4D<int>(0, 0, 1, 0));
        assertEquals(this, m.getL4(), Vector4D<int>(0, 0, 0, 1));
        m.setC1(Vector4D<int>(1, 2, 3, 4));
        m.setC2(Vector4D<int>(5, 6, 7, 8));
        m.setC3(Vector4D<int>(9, 10, 11, 12));
        m.setC4(Vector4D<int>(13, 14, 15, 16));
        assertEquals(this, m.getL1(), Vector4D<int>(1, 5, 9, 13));
        assertEquals(this, m.getL2(), Vector4D<int>(2, 6, 10, 14));
        assertEquals(this, m.getL3(), Vector4D<int>(3, 7, 11, 15));
        assertEquals(this, m.getL4(), Vector4D<int>(4, 8, 12, 16));
    }
    
    TEST(Matrix4x4, SetIdentity) {
        Matrix4x4<int> m(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);
        assertEquals(this, m.getL1(), Vector4D<int>(1, 2, 3, 4));
        assertEquals(this, m.getL2(), Vector4D<int>(5, 6, 7, 8));
        assertEquals(this, m.getL3(), Vector4D<int>(9, 10, 11, 12));
        assertEquals(this, m.getL4(), Vector4D<int>(13, 14, 15, 16));
        m.setIdentity();
        assertEquals(this, m.getL1(), Vector4D<int>(1, 0, 0, 0));
        assertEquals(this, m.getL2(), Vector4D<int>(0, 1, 0, 0));
        assertEquals(this, m.getL3(), Vector4D<int>(0, 0, 1, 0));
        assertEquals(this, m.getL4(), Vector4D<int>(0, 0, 0, 1));
    }
    
    TEST(Matrix4x4, Transpose) {
        Matrix4x4<int> m(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);
        assertEquals(this, m.getL1(), Vector4D<int>(1, 2, 3, 4));
        assertEquals(this, m.getL2(), Vector4D<int>(5, 6, 7, 8));
        assertEquals(this, m.getL3(), Vector4D<int>(9, 10, 11, 12));
        assertEquals(this, m.getL4(), Vector4D<int>(13, 14, 15, 16));
        m.transpose();
        assertEquals(this, m.getL1(), Vector4D<int>(1, 5, 9, 13));
        assertEquals(this, m.getL2(), Vector4D<int>(2, 6, 10, 14));
        assertEquals(this, m.getL3(), Vector4D<int>(3, 7, 11, 15));
        assertEquals(this, m.getL4(), Vector4D<int>(4, 8, 12, 16));
    }
    
    TEST(Matrix4x4, Inverse) {
        Matrix4x4<float> m(1, 2, 2, 2, 2, 1, 2, 2, 2, 2, 1, 2, 2, 2, 2, 1);
        assertEquals(this, m.getL1(), Vector4D<float>(1, 2, 2, 2));
        assertEquals(this, m.getL2(), Vector4D<float>(2, 1, 2, 2));
        assertEquals(this, m.getL3(), Vector4D<float>(2, 2, 1, 2));
        assertEquals(this, m.getL4(), Vector4D<float>(2, 2, 2, 1));
        m.inverse();
        assertEquals(this, m.getL1(), Vector4D<float>(-5.0 / 7.0,  2.0 / 7.0,  2.0 / 7.0,  2.0 / 7.0));
        assertEquals(this, m.getL2(), Vector4D<float>( 2.0 / 7.0, -5.0 / 7.0,  2.0 / 7.0,  2.0 / 7.0));
        assertEquals(this, m.getL3(), Vector4D<float>( 2.0 / 7.0,  2.0 / 7.0, -5.0 / 7.0,  2.0 / 7.0));
        assertEquals(this, m.getL4(), Vector4D<float>( 2.0 / 7.0,  2.0 / 7.0,  2.0 / 7.0, -5.0 / 7.0));
    }
    
    TEST(Matrix4x4, InverseIdentity) {
        Matrix4x4<int> m(1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1);
        assertEquals(this, m.getL1(), Vector4D<int>(1, 0, 0, 0));
        assertEquals(this, m.getL2(), Vector4D<int>(0, 1, 0, 0));
        assertEquals(this, m.getL3(), Vector4D<int>(0, 0, 1, 0));
        assertEquals(this, m.getL4(), Vector4D<int>(0, 0, 0, 1));
        m.inverse();
        assertEquals(this, m.getL1(), Vector4D<int>(1, 0, 0, 0));
        assertEquals(this, m.getL2(), Vector4D<int>(0, 1, 0, 0));
        assertEquals(this, m.getL3(), Vector4D<int>(0, 0, 1, 0));
        assertEquals(this, m.getL4(), Vector4D<int>(0, 0, 0, 1));
    }
    
    TEST(Matrix4x4, Translate) {
        Matrix4x4<int> m;
        m.setIdentity();
        m.translate(Vector3D<float>(10.5, 10.5, 10.5));
        assertEquals(this, m.getL1(), Vector4D<int>(1, 0, 0, 10));
        assertEquals(this, m.getL2(), Vector4D<int>(0, 1, 0, 10));
        assertEquals(this, m.getL3(), Vector4D<int>(0, 0, 1, 10));
        assertEquals(this, m.getL4(), Vector4D<int>(0, 0, 0, 1));
        assertEquals(this, Vector4D<int>(10, 10, 10, 1), m * Vector4D<int>(0, 0, 0, 1));
    }

    TEST(Matrix4x4, Scale) {
        Matrix4x4<int> m;
        m.setIdentity();
        m.scale(Vector3D<float>(10.5, 10.5, 10.5));
        assertEquals(this, m.getL1(), Vector4D<int>(10, 0, 0, 0));
        assertEquals(this, m.getL2(), Vector4D<int>(0, 10, 0, 0));
        assertEquals(this, m.getL3(), Vector4D<int>(0, 0, 10, 0));
        assertEquals(this, m.getL4(), Vector4D<int>(0, 0, 0, 1));
        assertEquals(this, Vector4D<int>(0, 0, 0, 1), m * Vector4D<int>(0, 0, 0, 1));
        assertEquals(this, Vector4D<int>(10, 10, 10, 1), m * Vector4D<int>(1, 1, 1, 1));
    }
    
    TEST(Matrix4x4, StretchX) {
        Matrix4x4<int> m;
        m.setIdentity();
        m.stretchX(10.5);
        assertEquals(this, m.getL1(), Vector4D<int>(10, 0, 0, 0));
        assertEquals(this, m.getL2(), Vector4D<int>(0, 1, 0, 0));
        assertEquals(this, m.getL3(), Vector4D<int>(0, 0, 1, 0));
        assertEquals(this, m.getL4(), Vector4D<int>(0, 0, 0, 1));
        assertEquals(this, Vector4D<int>(0, 0, 0, 1), m * Vector4D<int>(0, 0, 0, 1));
        assertEquals(this, Vector4D<int>(10, 1, 1, 1), m * Vector4D<int>(1, 1, 1, 1));
    }

    TEST(Matrix4x4, StretchY) {
        Matrix4x4<int> m;
        m.setIdentity();
        m.stretchY(10.5);
        assertEquals(this, m.getL1(), Vector4D<int>(1, 0, 0, 0));
        assertEquals(this, m.getL2(), Vector4D<int>(0, 10, 0, 0));
        assertEquals(this, m.getL3(), Vector4D<int>(0, 0, 1, 0));
        assertEquals(this, m.getL4(), Vector4D<int>(0, 0, 0, 1));
        assertEquals(this, Vector4D<int>(0, 0, 0, 1), m * Vector4D<int>(0, 0, 0, 1));
        assertEquals(this, Vector4D<int>(1, 10, 1, 1), m * Vector4D<int>(1, 1, 1, 1));
    }

    TEST(Matrix4x4, StretchZ) {
        Matrix4x4<int> m;
        m.setIdentity();
        m.stretchZ(10.5);
        assertEquals(this, m.getL1(), Vector4D<int>(1, 0, 0, 0));
        assertEquals(this, m.getL2(), Vector4D<int>(0, 1, 0, 0));
        assertEquals(this, m.getL3(), Vector4D<int>(0, 0, 10, 0));
        assertEquals(this, m.getL4(), Vector4D<int>(0, 0, 0, 1));
        assertEquals(this, Vector4D<int>(0, 0, 0, 1), m * Vector4D<int>(0, 0, 0, 1));
        assertEquals(this, Vector4D<int>(1, 1, 10, 1), m * Vector4D<int>(1, 1, 1, 1));
    }
    
    TEST(Matrix4x4, Rotate) {
        Matrix4x4<int> m;
        m.setIdentity();
        m.rotate(90_deg, Vector3D<int>(1, 0, 0));
        assertEquals(this, m.getL1(), Vector4D<int>(1, 0, 0, 0));
        assertEquals(this, m.getL2(), Vector4D<int>(0, 0, -1, 0));
        assertEquals(this, m.getL3(), Vector4D<int>(0, 1, 0, 0));
        assertEquals(this, m.getL4(), Vector4D<int>(0, 0, 0, 1));
        assertEquals(this, Vector4D<int>(0, -1, 0, 1), m * Vector4D<int>(0, 0, 1, 1));
    }
    
    TEST(Matrix4x4, Value) {
        Matrix4x4<int> m;
        m.setIdentity();
        assertEquals(this, *(m.value()), 1);
        assertEquals(this, *(m.value() + 1), 0);
        assertEquals(this, *(m.value() + 2), 0);
        assertEquals(this, *(m.value() + 3), 0);
    }
    
    TEST(Matrix4x4, Access) {
        Matrix4x4<int> m;
        m.setIdentity();
        assertEquals(this, m[0], Vector4D<int>(1, 0, 0, 0));
        assertEquals(this, m[1], Vector4D<int>(0, 1, 0, 0));
        assertEquals(this, m[2], Vector4D<int>(0, 0, 1, 0));
        assertEquals(this, m[3], Vector4D<int>(0, 0, 0, 1));
        m[0] = Vector4D<int>(1, 2, 3, 4);
        assertEquals(this, m[0], Vector4D<int>(1, 2, 3, 4));
    }
    
    TEST(Matrix4x4, Assign) {
        Matrix4x4<int> m1(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);
        Matrix4x4<int> m2;
        m2.setIdentity();
        assertEquals(this, m2[0], Vector4D<int>(1, 0, 0, 0));
        assertEquals(this, m2[1], Vector4D<int>(0, 1, 0, 0));
        assertEquals(this, m2[2], Vector4D<int>(0, 0, 1, 0));
        assertEquals(this, m2[3], Vector4D<int>(0, 0, 0, 1));
        m2 = m1;
        assertEquals(this, m2[0], Vector4D<int>(1, 2, 3, 4));
        assertEquals(this, m2[1], Vector4D<int>(5, 6, 7, 8));
        assertEquals(this, m2[2], Vector4D<int>(9, 10, 11, 12));
        assertEquals(this, m2[3], Vector4D<int>(13, 14, 15, 16));
    }

    TEST(Matrix4x4, AssignMove) {
        Matrix4x4<int> m1(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);
        Matrix4x4<int> m2;
        m2.setIdentity();
        assertEquals(this, m2[0], Vector4D<int>(1, 0, 0, 0));
        assertEquals(this, m2[1], Vector4D<int>(0, 1, 0, 0));
        assertEquals(this, m2[2], Vector4D<int>(0, 0, 1, 0));
        assertEquals(this, m2[3], Vector4D<int>(0, 0, 0, 1));
        m2 = std::move(m1);
        assertEquals(this, m2[0], Vector4D<int>(1, 2, 3, 4));
        assertEquals(this, m2[1], Vector4D<int>(5, 6, 7, 8));
        assertEquals(this, m2[2], Vector4D<int>(9, 10, 11, 12));
        assertEquals(this, m2[3], Vector4D<int>(13, 14, 15, 16));
    }

    TEST(Matrix4x4, AssignDifferent) {
        Matrix4x4<float> m1(1.0, 2.1, 3.5, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);
        Matrix4x4<int> m2;
        m2.setIdentity();
        assertEquals(this, m2[0], Vector4D<int>(1, 0, 0, 0));
        assertEquals(this, m2[1], Vector4D<int>(0, 1, 0, 0));
        assertEquals(this, m2[2], Vector4D<int>(0, 0, 1, 0));
        assertEquals(this, m2[3], Vector4D<int>(0, 0, 0, 1));
        m2 = m1;
        assertEquals(this, m2[0], Vector4D<int>(1, 2, 3, 4));
        assertEquals(this, m2[1], Vector4D<int>(5, 6, 7, 8));
        assertEquals(this, m2[2], Vector4D<int>(9, 10, 11, 12));
        assertEquals(this, m2[3], Vector4D<int>(13, 14, 15, 16));
    }

    TEST(Matrix4x4, AssignMoveDifferent) {
        Matrix4x4<float> m1(1.0, 2.1, 3.5, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);
        Matrix4x4<int> m2;
        m2.setIdentity();
        assertEquals(this, m2[0], Vector4D<int>(1, 0, 0, 0));
        assertEquals(this, m2[1], Vector4D<int>(0, 1, 0, 0));
        assertEquals(this, m2[2], Vector4D<int>(0, 0, 1, 0));
        assertEquals(this, m2[3], Vector4D<int>(0, 0, 0, 1));
        m2 = std::move(m1);
        assertEquals(this, m2[0], Vector4D<int>(1, 2, 3, 4));
        assertEquals(this, m2[1], Vector4D<int>(5, 6, 7, 8));
        assertEquals(this, m2[2], Vector4D<int>(9, 10, 11, 12));
        assertEquals(this, m2[3], Vector4D<int>(13, 14, 15, 16));
    }
    
    TEST(Matrix4x4, SelfAdd) {
        Matrix4x4<int> m1;
        m1.setIdentity();
        Matrix4x4<int> m2;
        m2.setIdentity();
        assertEquals(this, m1[0], Vector4D<int>(1, 0, 0, 0));
        assertEquals(this, m1[1], Vector4D<int>(0, 1, 0, 0));
        assertEquals(this, m1[2], Vector4D<int>(0, 0, 1, 0));
        assertEquals(this, m1[3], Vector4D<int>(0, 0, 0, 1));
        m1 += m2;
        assertEquals(this, m1[0], Vector4D<int>(2, 0, 0, 0));
        assertEquals(this, m1[1], Vector4D<int>(0, 2, 0, 0));
        assertEquals(this, m1[2], Vector4D<int>(0, 0, 2, 0));
        assertEquals(this, m1[3], Vector4D<int>(0, 0, 0, 2));
    }
    
    TEST(Matrix4x4, SelfAddDifferent) {
        Matrix4x4<int> m1;
        m1.setIdentity();
        Matrix4x4<float> m2(1.5, 0, 0, 0, 0, 1.5, 0, 0, 0, 0, 1.5, 0, 0, 0, 0, 1.5);
        assertEquals(this, m1[0], Vector4D<int>(1, 0, 0, 0));
        assertEquals(this, m1[1], Vector4D<int>(0, 1, 0, 0));
        assertEquals(this, m1[2], Vector4D<int>(0, 0, 1, 0));
        assertEquals(this, m1[3], Vector4D<int>(0, 0, 0, 1));
        m1 += m2;
        assertEquals(this, m1[0], Vector4D<int>(2, 0, 0, 0));
        assertEquals(this, m1[1], Vector4D<int>(0, 2, 0, 0));
        assertEquals(this, m1[2], Vector4D<int>(0, 0, 2, 0));
        assertEquals(this, m1[3], Vector4D<int>(0, 0, 0, 2));
    }

    TEST(Matrix4x4, SelfSub) {
        Matrix4x4<int> m1;
        m1.setIdentity();
        Matrix4x4<int> m2;
        m2.setIdentity();
        assertEquals(this, m1[0], Vector4D<int>(1, 0, 0, 0));
        assertEquals(this, m1[1], Vector4D<int>(0, 1, 0, 0));
        assertEquals(this, m1[2], Vector4D<int>(0, 0, 1, 0));
        assertEquals(this, m1[3], Vector4D<int>(0, 0, 0, 1));
        m1 -= m2;
        assertEquals(this, m1[0], Vector4D<int>(0, 0, 0, 0));
        assertEquals(this, m1[1], Vector4D<int>(0, 0, 0, 0));
        assertEquals(this, m1[2], Vector4D<int>(0, 0, 0, 0));
        assertEquals(this, m1[3], Vector4D<int>(0, 0, 0, 0));
    }
    
    TEST(Matrix4x4, SelfSubDifferent) {
        Matrix4x4<int> m1;
        m1.setIdentity();
        Matrix4x4<float> m2(1.5, 0, 0, 0, 0, 1.5, 0, 0, 0, 0, 1.5, 0, 0, 0, 0, 1.5);
        assertEquals(this, m1[0], Vector4D<int>(1, 0, 0, 0));
        assertEquals(this, m1[1], Vector4D<int>(0, 1, 0, 0));
        assertEquals(this, m1[2], Vector4D<int>(0, 0, 1, 0));
        assertEquals(this, m1[3], Vector4D<int>(0, 0, 0, 1));
        m1 -= m2;
        assertEquals(this, m1[0], Vector4D<int>(0, 0, 0, 0));
        assertEquals(this, m1[1], Vector4D<int>(0, 0, 0, 0));
        assertEquals(this, m1[2], Vector4D<int>(0, 0, 0, 0));
        assertEquals(this, m1[3], Vector4D<int>(0, 0, 0, 0));
    }
    
    TEST(Matrix4x4, SelfMultScalar) {
        Matrix4x4<int> m1;
        m1.setIdentity();
        assertEquals(this, m1[0], Vector4D<int>(1, 0, 0, 0));
        assertEquals(this, m1[1], Vector4D<int>(0, 1, 0, 0));
        assertEquals(this, m1[2], Vector4D<int>(0, 0, 1, 0));
        assertEquals(this, m1[3], Vector4D<int>(0, 0, 0, 1));
        m1 *= 10;
        assertEquals(this, m1[0], Vector4D<int>(10, 0, 0, 0));
        assertEquals(this, m1[1], Vector4D<int>(0, 10, 0, 0));
        assertEquals(this, m1[2], Vector4D<int>(0, 0, 10, 0));
        assertEquals(this, m1[3], Vector4D<int>(0, 0, 0, 10));
    }
    
    TEST(Matrix4x4, SelfMultScalarDifferent) {
        Matrix4x4<int> m1;
        m1.setIdentity();
        m1 *= 10;
        assertEquals(this, m1[0], Vector4D<int>(10, 0, 0, 0));
        assertEquals(this, m1[1], Vector4D<int>(0, 10, 0, 0));
        assertEquals(this, m1[2], Vector4D<int>(0, 0, 10, 0));
        assertEquals(this, m1[3], Vector4D<int>(0, 0, 0, 10));
        m1 *= 10.5;
        assertEquals(this, m1[0], Vector4D<int>(105, 0, 0, 0));
        assertEquals(this, m1[1], Vector4D<int>(0, 105, 0, 0));
        assertEquals(this, m1[2], Vector4D<int>(0, 0, 105, 0));
        assertEquals(this, m1[3], Vector4D<int>(0, 0, 0, 105));
        Matrix4x4<float> m2;
        m2.setIdentity();
        m2 *= 10.5;
        assertEquals(this, m2[0], Vector4D<float>(10.5, 0, 0, 0));
        assertEquals(this, m2[1], Vector4D<float>(0, 10.5, 0, 0));
        assertEquals(this, m2[2], Vector4D<float>(0, 0, 10.5, 0));
        assertEquals(this, m2[3], Vector4D<float>(0, 0, 0, 10.5));
        m2 *= 10;
        assertEquals(this, m2[0], Vector4D<float>(105, 0, 0, 0));
        assertEquals(this, m2[1], Vector4D<float>(0, 105, 0, 0));
        assertEquals(this, m2[2], Vector4D<float>(0, 0, 105, 0));
        assertEquals(this, m2[3], Vector4D<float>(0, 0, 0, 105));
    }
    
    TEST(Matrix4x4, SelfMultMatrix) {
        Matrix4x4<int> m1;
        m1.setIdentity();
        m1.translate(Vector3D<int>(10, 10, 10));
        Matrix4x4<int> m2;
        m2.setIdentity();
        m2.scale(Vector3D<int>(20, 20, 20));
        assertEquals(this, m1[0], Vector4D<int>(1, 0, 0, 10));
        assertEquals(this, m1[1], Vector4D<int>(0, 1, 0, 10));
        assertEquals(this, m1[2], Vector4D<int>(0, 0, 1, 10));
        assertEquals(this, m1[3], Vector4D<int>(0, 0, 0, 1));
        m1 *= m2;
        assertEquals(this, m1[0], Vector4D<int>(20, 0, 0, 10));
        assertEquals(this, m1[1], Vector4D<int>(0, 20, 0, 10));
        assertEquals(this, m1[2], Vector4D<int>(0, 0, 20, 10));
        assertEquals(this, m1[3], Vector4D<int>(0, 0, 0, 1));
    }
    
    TEST(Matrix4x4, SelfDivScalar) {
        Matrix4x4<int> m1;
        m1.setIdentity();
        m1 *= 10;
        assertEquals(this, m1[0], Vector4D<int>(10, 0, 0, 0));
        assertEquals(this, m1[1], Vector4D<int>(0, 10, 0, 0));
        assertEquals(this, m1[2], Vector4D<int>(0, 0, 10, 0));
        assertEquals(this, m1[3], Vector4D<int>(0, 0, 0, 10));
        m1 /= 10;
        assertEquals(this, m1[0], Vector4D<int>(1, 0, 0, 0));
        assertEquals(this, m1[1], Vector4D<int>(0, 1, 0, 0));
        assertEquals(this, m1[2], Vector4D<int>(0, 0, 1, 0));
        assertEquals(this, m1[3], Vector4D<int>(0, 0, 0, 1));
    }
    
    TEST(Matrix4x4, SelfDivScalarDifferent) {
        Matrix4x4<int> m1;
        m1.setIdentity();
        m1 *= 105;
        assertEquals(this, m1[0], Vector4D<int>(105, 0, 0, 0));
        assertEquals(this, m1[1], Vector4D<int>(0, 105, 0, 0));
        assertEquals(this, m1[2], Vector4D<int>(0, 0, 105, 0));
        assertEquals(this, m1[3], Vector4D<int>(0, 0, 0, 105));
        m1 /= 10.5;
        assertEquals(this, m1[0], Vector4D<int>(10, 0, 0, 0));
        assertEquals(this, m1[1], Vector4D<int>(0, 10, 0, 0));
        assertEquals(this, m1[2], Vector4D<int>(0, 0, 10, 0));
        assertEquals(this, m1[3], Vector4D<int>(0, 0, 0, 10));
    }
    
    TEST(Matrix4x4, SelfDivMatrix) {
        Matrix4x4<int> m1;
        m1.setIdentity();
        m1.scale(Vector3D<int>(10, 10, 10));
        Matrix4x4<int> m2;
        m2.setIdentity();
        m2.translate(Vector3D<int>(20, 20, 20));
        assertEquals(this, m1[0], Vector4D<int>(10, 0, 0, 0));
        assertEquals(this, m1[1], Vector4D<int>(0, 10, 0, 0));
        assertEquals(this, m1[2], Vector4D<int>(0, 0, 10, 0));
        assertEquals(this, m1[3], Vector4D<int>(0, 0, 0, 1));
        m1 /= m2;
        assertEquals(this, m1[0], Vector4D<int>(10, 0, 0, -200));
        assertEquals(this, m1[1], Vector4D<int>(0, 10, 0, -200));
        assertEquals(this, m1[2], Vector4D<int>(0, 0, 10, -200));
        assertEquals(this, m1[3], Vector4D<int>(0, 0, 0, 1));
    }

    TEST(Matrix4x4, Add) {
        Matrix4x4<int> m1;
        m1.setIdentity();
        Matrix4x4<int> m2;
        m2.setIdentity();
        auto m3 = m1 + m2;
        assertTrue(this, std::is_same<decltype(m3), Matrix4x4<int>>::value);
        assertEquals(this, m3[0], Vector4D<int>(2, 0, 0, 0));
        assertEquals(this, m3[1], Vector4D<int>(0, 2, 0, 0));
        assertEquals(this, m3[2], Vector4D<int>(0, 0, 2, 0));
        assertEquals(this, m3[3], Vector4D<int>(0, 0, 0, 2));
    }

    TEST(Matrix4x4, AddDifferent) {
        Matrix4x4<int> m1;
        m1.setIdentity();
        Matrix4x4<float> m2;
        m2.setIdentity();
        m2 *= 1.5;
        auto m3 = m1 + m2;
        assertTrue(this, std::is_same<decltype(m3), Matrix4x4<float>>::value);
        assertEquals(this, m3[0], Vector4D<float>(2.5, 0, 0, 0));
        assertEquals(this, m3[1], Vector4D<float>(0, 2.5, 0, 0));
        assertEquals(this, m3[2], Vector4D<float>(0, 0, 2.5, 0));
        assertEquals(this, m3[3], Vector4D<float>(0, 0, 0, 2.5));
    }

    TEST(Matrix4x4, Sub) {
        Matrix4x4<int> m1;
        m1.setIdentity();
        Matrix4x4<int> m2;
        m2.setIdentity();
        auto m3 = m1 - m2;
        assertTrue(this, std::is_same<decltype(m3), Matrix4x4<int>>::value);
        assertEquals(this, m3[0], Vector4D<int>(0, 0, 0, 0));
        assertEquals(this, m3[1], Vector4D<int>(0, 0, 0, 0));
        assertEquals(this, m3[2], Vector4D<int>(0, 0, 0, 0));
        assertEquals(this, m3[3], Vector4D<int>(0, 0, 0, 0));
    }

    TEST(Matrix4x4, SubDifferent) {
        Matrix4x4<int> m1;
        m1.setIdentity();
        Matrix4x4<float> m2;
        m2.setIdentity();
        m2 *= 1.5;
        auto m3 = m1 - m2;
        assertTrue(this, std::is_same<decltype(m3), Matrix4x4<float>>::value);
        assertEquals(this, m3[0], Vector4D<float>(-0.5, 0, 0, 0));
        assertEquals(this, m3[1], Vector4D<float>(0, -0.5, 0, 0));
        assertEquals(this, m3[2], Vector4D<float>(0, 0, -0.5, 0));
        assertEquals(this, m3[3], Vector4D<float>(0, 0, 0, -0.5));
    }
    
    TEST(Matrix4x4, MultScalar) {
        Matrix4x4<int> m1;
        m1.setIdentity();
        auto m2 = m1 * 10;
        assertTrue(this, std::is_same<decltype(m2), Matrix4x4<int>>::value);
        assertEquals(this, m2[0], Vector4D<int>(10, 0, 0, 0));
        assertEquals(this, m2[1], Vector4D<int>(0, 10, 0, 0));
        assertEquals(this, m2[2], Vector4D<int>(0, 0, 10, 0));
        assertEquals(this, m2[3], Vector4D<int>(0, 0, 0, 10));
    }

    TEST(Matrix4x4, MultScalarDifferent) {
        Matrix4x4<int> m1;
        m1.setIdentity();
        auto m2 = m1 * 10.5f;
        assertTrue(this, std::is_same<decltype(m2), Matrix4x4<float>>::value);
        assertEquals(this, m2[0], Vector4D<float>(10.5, 0, 0, 0));
        assertEquals(this, m2[1], Vector4D<float>(0, 10.5, 0, 0));
        assertEquals(this, m2[2], Vector4D<float>(0, 0, 10.5, 0));
        assertEquals(this, m2[3], Vector4D<float>(0, 0, 0, 10.5));
    }

    TEST(Matrix4x4, MultMatrix) {
        Matrix4x4<int> m1;
        m1.setIdentity();
        m1.translate(Vector3D<int>(10, 10, 10));
        Matrix4x4<int> m2;
        m2.setIdentity();
        m2.scale(Vector3D<int>(20, 20, 20));
        auto m3 = m1 * m2;
        assertTrue(this, std::is_same<decltype(m3), Matrix4x4<int>>::value);
        assertEquals(this, m3[0], Vector4D<int>(20, 0, 0, 10));
        assertEquals(this, m3[1], Vector4D<int>(0, 20, 0, 10));
        assertEquals(this, m3[2], Vector4D<int>(0, 0, 20, 10));
        assertEquals(this, m3[3], Vector4D<int>(0, 0, 0, 1));
    }

    TEST(Matrix4x4, DivScalar) {
        Matrix4x4<int> m1;
        m1.setIdentity();
        m1 *= 10;
        auto m2 = m1 / 10;
        assertTrue(this, std::is_same<decltype(m2), Matrix4x4<int>>::value);
        assertEquals(this, m2[0], Vector4D<int>(1, 0, 0, 0));
        assertEquals(this, m2[1], Vector4D<int>(0, 1, 0, 0));
        assertEquals(this, m2[2], Vector4D<int>(0, 0, 1, 0));
        assertEquals(this, m2[3], Vector4D<int>(0, 0, 0, 1));
    }

    TEST(Matrix4x4, DivScalarDifferent) {
        Matrix4x4<int> m1;
        m1.setIdentity();
        m1 *= 105;
        auto m2 = m1 / 10.5f;
        assertTrue(this, std::is_same<decltype(m2), Matrix4x4<float>>::value);
        assertEquals(this, m2[0], Vector4D<float>(10, 0, 0, 0));
        assertEquals(this, m2[1], Vector4D<float>(0, 10, 0, 0));
        assertEquals(this, m2[2], Vector4D<float>(0, 0, 10, 0));
        assertEquals(this, m2[3], Vector4D<float>(0, 0, 0, 10));
    }

    TEST(Matrix4x4, DivMatrix) {
        Matrix4x4<int> m1;
        m1.setIdentity();
        m1.scale(Vector3D<int>(10, 10, 10));
        Matrix4x4<int> m2;
        m2.setIdentity();
        m2.translate(Vector3D<int>(20, 20, 20));
        auto m3 = m1 / m2;
        assertTrue(this, std::is_same<decltype(m3), Matrix4x4<int>>::value);
        assertEquals(this, m3[0], Vector4D<int>(10, 0, 0, -200));
        assertEquals(this, m3[1], Vector4D<int>(0, 10, 0, -200));
        assertEquals(this, m3[2], Vector4D<int>(0, 0, 10, -200));
        assertEquals(this, m3[3], Vector4D<int>(0, 0, 0, 1));
    }

    TEST(Matrix4x4, MultObjects) {
        Matrix4x4<float> m;
        m.setIdentity();
        m.translate(Vector3D<float>(10.5, 20.5, 30.5));
    
        Vector4D<int> v(2, 2, 2, 1);
        Segment4D<int> s(0, 0, 0, 2, 2, 2);
        BezierCurve4D b({{0, 0, 0, 1}, {2, 2, 2, 1}, {10, 10, 10, 1}});
        v = m * v;
        s = m * s;
        b = m * b;
        assertEquals(this, v, Vector4D<int>(12, 22, 32, 1));
        assertEquals(this, s, Segment4D<int>(10, 20, 30, 12, 22, 32));
        assertEquals(this, b.getPoint(0), Point4D<float>(10.5, 20.5, 30.5, 1));
        assertEquals(this, b.getPoint(1), Point4D<float>(12.5, 22.5, 32.5, 1));
        assertEquals(this, b.getPoint(2), Point4D<float>(20.5, 30.5, 40.5, 1));
    }

    TEST(Matrix4x4, Equality) {
        Matrix4x4<int> m1;
        m1.setIdentity();
        Matrix4x4<int> m2;
        m2.setIdentity();
        assertEquals(this, m1, m2);
    }

    TEST(Matrix4x4, EqualityDifference) {
        Matrix4x4<int> m1;
        m1.setIdentity();
        Matrix4x4<float> m2;
        m2.setIdentity();
        assertTrue(this, m1 == m2);
    }

    TEST(Matrix4x4, Difference) {
        Matrix4x4<int> m1;
        m1.setIdentity();
        Matrix4x4<float> m2(1.5);
        assertTrue(this, m1 != m2);
    }
    
    