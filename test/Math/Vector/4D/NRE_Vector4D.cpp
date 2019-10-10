    
    /**
     * @file NRE_Vector4D.cpp
     * @brief Test of Math's API's Object : Vector4D
     * @author Louis ABEL
     * @date 09/10/2019
     * @copyright CC-BY-NC-SA
     */
    
    #include "../../../src/Header/NRE_Math.hpp"
    #include <Header/NRE_Tester.hpp>
    
    using namespace NRE::Math;
    using namespace NRE::Tester;
    
    TEST(Vector4D, CtrSeparate) {
        Vector4D<int> v(10, 20, 30, 40);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
        assertEquals(this, v.getW(), 40);
    }
    
    TEST(Vector4D, CtrSeparateDifferent) {
        Vector4D<double> u(10.0, 100, 21.5, 1u);
        Vector4D<int> v(u.getX(), u.getY(), u.getZ(), u.getW());
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 100);
        assertEquals(this, v.getZ(), 21);
        assertEquals(this, v.getW(), 1);
    }
    
    TEST(Vector4D, CtrSame) {
        Vector4D<int> v(1);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getX(), v.getY());
        assertEquals(this, v.getY(), v.getZ());
        assertEquals(this, v.getZ(), v.getW());
    }
    
    TEST(Vector4D, CtrList) {
        Vector4D<int> v({0, 1, 2, 3});
        assertEquals(this, v.getX(), 0);
        assertEquals(this, v.getY(), 1);
        assertEquals(this, v.getZ(), 2);
        assertEquals(this, v.getW(), 3);
    }
    
    TEST(Vector4D, Copy) {
        Vector4D<int> u(1, 2, 3, 4);
        Vector4D<int> v(u);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        assertEquals(this, v.getZ(), 3);
        assertEquals(this, v.getW(), 4);
    }
    
    TEST(Vector4D, Move) {
        Vector4D<int> u(1, 2, 3, 4);
        Vector4D<int> v(std::move(u));
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        assertEquals(this, v.getZ(), 3);
        assertEquals(this, v.getW(), 4);
    }
    
    TEST(Vector4D, Convertor) {
        Vector4D<float> u(1, 2, 3, 4);
        Vector4D<int> v(u);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        assertEquals(this, v.getZ(), 3);
        assertEquals(this, v.getW(), 4);
    }
    
    TEST(Vector4D, ConvertorPrecision) {
        Vector4D<float> u(1.5, 2.5, 3.5, 4.5);
        Vector4D<int> v(u);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        assertEquals(this, v.getZ(), 3);
        assertEquals(this, v.getW(), 4);
    }
    
    TEST(Vector4D, Convertor2DDefault) {
        Vector2D<float> u(1.5, 2.5);
        Vector4D<int> v(u);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        assertEquals(this, v.getZ(), 0);
        assertEquals(this, v.getW(), 0);
    }

    TEST(Vector4D, Convertor2DValue) {
        Vector2D<float> u(1.5, 2.5);
        Vector4D<int> v(u, 3.5, 4.5);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        assertEquals(this, v.getZ(), 3);
        assertEquals(this, v.getW(), 4);
    }
    
    TEST(Vector4D, Convertor3DDefault) {
        Vector3D<float> u(1.5, 2.5, 3.5);
        Vector4D<int> v(u);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        assertEquals(this, v.getZ(), 3);
        assertEquals(this, v.getW(), 0);
    }

    TEST(Vector4D, Convertor3DValue) {
        Vector3D<float> u(1.5, 2.5, 3.5);
        Vector4D<int> v(u, 4.5);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        assertEquals(this, v.getZ(), 3);
        assertEquals(this, v.getW(), 4);
    }
    
    TEST(Vector4D, Get) {
        Vector4D<int> v(1, 2, 3, 4);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        assertEquals(this, v.getZ(), 3);
        assertEquals(this, v.getW(), 4);
    }
    
    TEST(Vector4D, AlternateGet) {
        Vector4D<int> v(1, 2, 3, 4);
        assertEquals(this, v.getR(), 1);
        assertEquals(this, v.getG(), 2);
        assertEquals(this, v.getB(), 3);
        assertEquals(this, v.getA(), 4);
    }
    
    TEST(Vector4D, Set) {
        Vector4D<int> v(1, 2, 3, 4);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        assertEquals(this, v.getZ(), 3);
        assertEquals(this, v.getW(), 4);
        v.setX(10);
        v.setY(20);
        v.setZ(30);
        v.setW(40);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
        assertEquals(this, v.getW(), 40);
    }
    
    TEST(Vector4D, SetAlternate) {
        Vector4D<int> v(1, 2, 3, 4);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        assertEquals(this, v.getZ(), 3);
        assertEquals(this, v.getW(), 4);
        v.setR(10);
        v.setG(20);
        v.setB(30);
        v.setA(40);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
        assertEquals(this, v.getW(), 40);
    }
    
    TEST(Vector4D, SetDifferent) {
        Vector4D<int> v(1, 2, 3, 4);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        assertEquals(this, v.getZ(), 3);
        assertEquals(this, v.getW(), 4);
        v.setX(char(10));
        v.setY(20.5);
        v.setZ(30U);
        v.setW(40.5f);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
        assertEquals(this, v.getW(), 40);
    }
    
    TEST(Vector4D, SetAlternateDifferent) {
        Vector4D<int> v(1, 2, 3, 4);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        assertEquals(this, v.getZ(), 3);
        assertEquals(this, v.getW(), 4);
        v.setR(char(10));
        v.setG(20.5);
        v.setB(30U);
        v.setA(40.5f);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
        assertEquals(this, v.getW(), 40);
    }
    
    TEST(Vector4D, SetCoord) {
        Vector4D<int> v(1, 2, 3, 4);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        assertEquals(this, v.getZ(), 3);
        assertEquals(this, v.getW(), 4);
        v.setCoord(10, 20, 30, 40);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
        assertEquals(this, v.getW(), 40);
    }
    
    TEST(Vector4D, SetCoordVec2D) {
        Vector4D<int> v(1, 2, 3, 4);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        assertEquals(this, v.getZ(), 3);
        assertEquals(this, v.getW(), 4);
        v.setCoord(Vector2D<int>(10, 20), 30, 40);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
        assertEquals(this, v.getW(), 40);
    }

    TEST(Vector4D, SetCoordVec3D) {
        Vector4D<int> v(1, 2, 3, 4);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        assertEquals(this, v.getZ(), 3);
        assertEquals(this, v.getW(), 4);
        v.setCoord(Vector3D<int>(10, 20, 30), 40);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
        assertEquals(this, v.getW(), 40);
    }
    
    TEST(Vector4D, SetRGBA) {
        Vector4D<int> v(1, 2, 3, 4);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        assertEquals(this, v.getZ(), 3);
        assertEquals(this, v.getW(), 4);
        v.setRGBA(10, 20, 30, 40);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
        assertEquals(this, v.getW(), 40);
    }

    TEST(Vector4D, SetRGBAVec) {
        Vector4D<int> v(1, 2, 3, 4);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        assertEquals(this, v.getZ(), 3);
        assertEquals(this, v.getW(), 4);
        v.setRGBA(Vector3D<int>(10, 20, 30), 40);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
        assertEquals(this, v.getW(), 40);
    }
    
    TEST(Vector4D, SetCoordDifferent) {
        Vector4D<int> v(1, 2, 3, 4);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        assertEquals(this, v.getZ(), 3);
        assertEquals(this, v.getW(), 4);
        v.setCoord(10.5, 20.5, 30.5, 40.5);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
        assertEquals(this, v.getW(), 40);
    }
    
    TEST(Vector4D, SetRGBADifferent) {
        Vector4D<int> v(1, 2, 3, 4);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        assertEquals(this, v.getZ(), 3);
        assertEquals(this, v.getW(), 4);
        v.setRGBA(10.5, 20.5, 30.5, 40.5);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
        assertEquals(this, v.getW(), 40);
    }
    
    TEST(Vector4D, Norm) {
        Vector4D<int> v(10, 10, 10, 10);
        assertTrue(this, equal(v.norm(), std::sqrt(400)));
    }
    
    TEST(Vector4D, NormSquared) {
        Vector4D<int> v(10, 10, 10, 10);
        assertEquals(this, v.normSquared(), 400);
    }
    
    TEST(Vector4D, Normalize) {
        Vector4D<int> v(10, 0, 0, 0);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 0);
        assertEquals(this, v.getZ(), 0);
        assertEquals(this, v.getW(), 0);
        v.normalize();
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 0);
        assertEquals(this, v.getZ(), 0);
        assertEquals(this, v.getW(), 0);
    }
    
    TEST(Vector4D, Value) {
        Vector4D<int> v(10, 0, 20, -10);
        assertEquals(this, *(v.value()), 10);
        assertEquals(this, *(v.value() + 1), 0);
        assertEquals(this, *(v.value() + 2), 20);
        assertEquals(this, *(v.value() + 3), -10);
    }
    
    TEST(Vector4D, Access) {
        Vector4D<int> v(10, 0, 20, -10);
        assertEquals(this, v[0], 10);
        assertEquals(this, v[1], 0);
        assertEquals(this, v[2], 20);
        assertEquals(this, v[3], -10);
        v[0] = 1;
        v[1] = 2;
        v[2] = 3;
        v[3] = 4;
        assertEquals(this, v[0], 1);
        assertEquals(this, v[1], 2);
        assertEquals(this, v[2], 3);
        assertEquals(this, v[3], 4);
    }
    
    TEST(Vector4D, Assign) {
        Vector4D<int> u(10, 20, 30, 40);
        Vector4D<int> v(50, 60, 70, 80);
        assertEquals(this, v.getX(), 50);
        assertEquals(this, v.getY(), 60);
        assertEquals(this, v.getZ(), 70);
        assertEquals(this, v.getW(), 80);
        v = u;
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
        assertEquals(this, v.getW(), 40);
    }
    
    TEST(Vector4D, AssignMove) {
        Vector4D<int> u(10, 20, 30, 40);
        Vector4D<int> v(50, 60, 70, 80);
        assertEquals(this, v.getX(), 50);
        assertEquals(this, v.getY(), 60);
        assertEquals(this, v.getZ(), 70);
        assertEquals(this, v.getW(), 80);
        v = std::move(u);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
        assertEquals(this, v.getW(), 40);
    }
    
    TEST(Vector4D, AssignDifferent) {
        Vector4D<float> u(10.5, 20.5, 30.5, 40.5);
        Vector4D<int> v(50, 60, 70, 80);
        assertEquals(this, v.getX(), 50);
        assertEquals(this, v.getY(), 60);
        assertEquals(this, v.getZ(), 70);
        assertEquals(this, v.getW(), 80);
        v = u;
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
        assertEquals(this, v.getW(), 40);
    }
    
    TEST(Vector4D, AssignMoveDifferent) {
        Vector4D<float> u(10.5, 20.5, 30.5, 40.5);
        Vector4D<int> v(50, 60, 70, 80);
        assertEquals(this, v.getX(), 50);
        assertEquals(this, v.getY(), 60);
        assertEquals(this, v.getZ(), 70);
        assertEquals(this, v.getW(), 80);
        v = std::move(u);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
        assertEquals(this, v.getW(), 40);
    }
    
    TEST(Vector4D, SelfAdd) {
        Vector4D<int> u(10, 20, 30, 40);
        Vector4D<int> v(10, 20, 30, 40);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
        assertEquals(this, v.getW(), 40);
        v += u;
        assertEquals(this, v.getX(), 20);
        assertEquals(this, v.getY(), 40);
        assertEquals(this, v.getZ(), 60);
        assertEquals(this, v.getW(), 80);
    }
    
    TEST(Vector4D, SelfAddDifferent) {
        Vector4D<float> u(10.5, 20.5, 30.5, 40.5);
        Vector4D<int> v(10, 20, 30, 40);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
        assertEquals(this, v.getW(), 40);
        v += u;
        assertEquals(this, v.getX(), 20);
        assertEquals(this, v.getY(), 40);
        assertEquals(this, v.getZ(), 60);
        assertEquals(this, v.getW(), 80);
    }
    
    TEST(Vector4D, SelfSub) {
        Vector4D<int> u(10, 20, 30, 40);
        Vector4D<int> v(10, 20, 30, 40);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
        assertEquals(this, v.getW(), 40);
        v -= u;
        assertEquals(this, v.getX(), 0);
        assertEquals(this, v.getY(), 0);
        assertEquals(this, v.getZ(), 0);
        assertEquals(this, v.getW(), 0);
    }
    
    TEST(Vector4D, SelfSubDifferent) {
        Vector4D<float> u(10.5, 20.5, 30.5, 40.5);
        Vector4D<int> v(10, 20, 30, 40);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
        assertEquals(this, v.getW(), 40);
        v -= u;
        assertEquals(this, v.getX(), 0);
        assertEquals(this, v.getY(), 0);
        assertEquals(this, v.getZ(), 0);
        assertEquals(this, v.getW(), 0);
    }
    
    TEST(Vector4D, SelfMultScalar) {
        Vector4D<int> v(10, 20, 30, 40);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
        assertEquals(this, v.getW(), 40);
        v *= 10;
        assertEquals(this, v.getX(), 100);
        assertEquals(this, v.getY(), 200);
        assertEquals(this, v.getZ(), 300);
        assertEquals(this, v.getW(), 400);
    }
    
    TEST(Vector4D, SelfMultScalarDifferent) {
        Vector4D<int> v(10, 20, 30, 40);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
        assertEquals(this, v.getW(), 40);
        v *= 10.5;
        assertEquals(this, v.getX(), 105);
        assertEquals(this, v.getY(), 210);
        assertEquals(this, v.getZ(), 315);
        assertEquals(this, v.getW(), 420);
        Vector4D<float> u(10.5, 20.5, 30.5, 40.5);
        assertTrue(this, equal(u.getX(), 10.5));
        assertTrue(this, equal(u.getY(), 20.5));
        assertTrue(this, equal(u.getZ(), 30.5));
        assertTrue(this, equal(u.getW(), 40.5));
        u *= 10;
        assertTrue(this, equal(u.getX(), 105));
        assertTrue(this, equal(u.getY(), 205));
        assertTrue(this, equal(u.getZ(), 305));
        assertTrue(this, equal(u.getW(), 405));
    }
    
    TEST(Vector4D, SelfMultVec) {
        Vector4D<int> v(10, 20, 30, 40);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
        assertEquals(this, v.getW(), 40);
        v *= Vector4D<int>(10, 20, 30, 40);
        assertEquals(this, v.getX(), 100);
        assertEquals(this, v.getY(), 400);
        assertEquals(this, v.getZ(), 900);
        assertEquals(this, v.getW(), 1600);
    }
    
    TEST(Vector4D, SelfMultVecDifferent) {
        Vector4D<int> v(10, 20, 30, 40);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
        assertEquals(this, v.getW(), 40);
        v *= Vector4D<float>(10.5, 20.5, 30.5, 40.5);
        assertEquals(this, v.getX(), 105);
        assertEquals(this, v.getY(), 410);
        assertEquals(this, v.getZ(), 915);
        assertEquals(this, v.getW(), 1620);
        Vector4D<float> u(10.5, 20.5, 30.5, 40.5);
        assertTrue(this, equal(u.getX(), 10.5));
        assertTrue(this, equal(u.getY(), 20.5));
        assertTrue(this, equal(u.getZ(), 30.5));
        assertTrue(this, equal(u.getW(), 40.5));
        u *= Vector4D<int>(10, 20, 30, 40);
        assertTrue(this, equal(u.getX(), 105));
        assertTrue(this, equal(u.getY(), 410));
        assertTrue(this, equal(u.getZ(), 915));
        assertTrue(this, equal(u.getW(), 1620));
    }
    
    TEST(Vector4D, SelfDivScalar) {
        Vector4D<int> v(10, 20, 30, 40);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
        assertEquals(this, v.getW(), 40);
        v /= 10;
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        assertEquals(this, v.getZ(), 3);
        assertEquals(this, v.getW(), 4);
    }
    
    TEST(Vector4D, SelfDivScalarDifferent) {
        Vector4D<int> v(105, 210, 315, 420);
        assertEquals(this, v.getX(), 105);
        assertEquals(this, v.getY(), 210);
        assertEquals(this, v.getZ(), 315);
        assertEquals(this, v.getW(), 420);
        v /= 10.5;
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
        assertEquals(this, v.getW(), 40);
        Vector4D<float> u(10.5, 20.5, 30.5, 40.5);
        assertTrue(this, equal(u.getX(), 10.5));
        assertTrue(this, equal(u.getY(), 20.5));
        assertTrue(this, equal(u.getZ(), 30.5));
        assertTrue(this, equal(u.getW(), 40.5));
        u /= 10;
        assertTrue(this, equal(u.getX(), 1.05));
        assertTrue(this, equal(u.getY(), 2.05));
        assertTrue(this, equal(u.getZ(), 3.05));
        assertTrue(this, equal(u.getW(), 4.05));
    }
    
    TEST(Vector4D, SelfDivVec) {
        Vector4D<int> v(10, 20, 30, 40);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
        assertEquals(this, v.getW(), 40);
        v /= Vector4D<int>(10, 20, 30, 40);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 1);
        assertEquals(this, v.getZ(), 1);
        assertEquals(this, v.getW(), 1);
    }
    
    TEST(Vector4D, SelfDivVecDifferent) {
        Vector4D<int> v(105, 210, 315, 420);
        assertEquals(this, v.getX(), 105);
        assertEquals(this, v.getY(), 210);
        assertEquals(this, v.getZ(), 315);
        assertEquals(this, v.getW(), 420);
        v /= Vector4D<float>(10.5, 21, 31.5, 42);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 10);
        assertEquals(this, v.getZ(), 10);
        assertEquals(this, v.getW(), 10);
        Vector4D<float> u(10.5, 20.5, 30.5, 40.5);
        assertTrue(this, equal(u.getX(), 10.5));
        assertTrue(this, equal(u.getY(), 20.5));
        assertTrue(this, equal(u.getZ(), 30.5));
        assertTrue(this, equal(u.getW(), 40.5));
        u /= Vector4D<int>(10, 20, 40, 40);
        assertTrue(this, equal(u.getX(), 1.05));
        assertTrue(this, equal(u.getY(), 1.025));
        assertTrue(this, equal(u.getZ(), 0.7625));
        assertTrue(this, equal(u.getW(), 1.0125));
    }
    
    TEST(Vector4D, SelfDotProduct) {
        Vector4D<int> v(1, 0, 0, 0);
        Vector4D<int> u(0, 0, 0, 1);
        assertEquals(this, v |= u, 0);
        
        Vector4D<int> w(0, 0, 0, 2);
        assertTrue(this, equal(std::abs(u |= w), u.norm() * w.norm()));
    }
    
    TEST(Vector4D, SelfVecProduct) {
        Vector4D<int> v(1, 0, 0, 0);
        Vector4D<int> u(0, 0, 1, 0);
        
        v ^= u;
        assertEquals(this, v, Vector4D<int>(0, -1, 0, 0));
    }
    
    TEST(Vector4D, Add) {
        Vector4D<int> u(10, 20, 30, 40);
        Vector4D<int> v(10, 20, 30, 40);
        
        Vector4D<int> w = v + u;
        assertEquals(this, w.getX(), 20);
        assertEquals(this, w.getY(), 40);
        assertEquals(this, w.getZ(), 60);
        assertEquals(this, w.getW(), 80);
    }
    
    TEST(Vector4D, AddDifferent) {
        Vector4D<float> u(10.5, 20.5, 30.5, 40.5);
        Vector4D<int> v(10, 20, 30, 40);
        auto w = v + u;
        auto z = u + v;
        assertTrue(this, std::is_same_v<Vector4D<float>, decltype (w)>);
        assertTrue(this, std::is_same_v<decltype(z),  decltype (w)>);
        assertTrue(this, equal(w.getX(), 20.5));
        assertTrue(this, equal(w.getY(), 40.5));
        assertTrue(this, equal(w.getZ(), 60.5));
        assertTrue(this, equal(w.getW(), 80.5));
    }
    
    TEST(Vector4D, Sub) {
        Vector4D<int> u(10, 20, 30, 40);
        Vector4D<int> v(10, 30, 50, 70);
        
        Vector4D<int> w = v - u;
        assertEquals(this, w.getX(), 0);
        assertEquals(this, w.getY(), 10);
        assertEquals(this, w.getZ(), 20);
        assertEquals(this, w.getW(), 30);
    }
    
    TEST(Vector4D, SubDifferent) {
        Vector4D<float> u(10.5, 20.5, 30.5, 40.5);
        Vector4D<int> v(10, 10, 10, 10);
        auto w = v - u;
        auto z = u - v;
        assertTrue(this, std::is_same_v<Vector4D<float>, decltype (w)>);
        assertTrue(this, std::is_same_v<decltype(z),  decltype (w)>);
        assertTrue(this, equal(w.getX(), -0.5));
        assertTrue(this, equal(w.getY(), -10.5));
        assertTrue(this, equal(w.getZ(), -20.5));
        assertTrue(this, equal(w.getW(), -30.5));
    }
    
    TEST(Vector4D, Negate) {
        Vector4D<int> u(10, 20, 30, 40);
        Vector4D<int> v = -u;
        assertEquals(this, v.getX(), -10);
        assertEquals(this, v.getY(), -20);
        assertEquals(this, v.getZ(), -30);
        assertEquals(this, v.getW(), -40);
    }
    
    TEST(Vector4D, MultScalar) {
        Vector4D<int> u(10, 20, 30, 40);
        
        Vector4D<int> w = u * 10;
        assertEquals(this, w.getX(), 100);
        assertEquals(this, w.getY(), 200);
        assertEquals(this, w.getZ(), 300);
        assertEquals(this, w.getW(), 400);
    }
    
    TEST(Vector4D, MultScalarDifferent) {
        Vector4D<int> u(10, 20, 30, 40);
        auto w = u * 10.5f;
        assertTrue(this, std::is_same_v<Vector4D<float>, decltype (w)>);
        assertTrue(this, equal(w.getX(), 105));
        assertTrue(this, equal(w.getY(), 210));
        assertTrue(this, equal(w.getZ(), 315));
        assertTrue(this, equal(w.getW(), 420));
    }
    
    TEST(Vector4D, MultVec) {
        Vector4D<int> u(10, 20, 30, 40);
        
        Vector4D<int> w = u * Vector4D<int>(10, 20, 30, 40);
        assertEquals(this, w.getX(), 100);
        assertEquals(this, w.getY(), 400);
        assertEquals(this, w.getZ(), 900);
        assertEquals(this, w.getW(), 1600);
    }
    
    TEST(Vector4D, MultVecDifferent) {
        Vector4D<int> u(10, 20, 30, 40);
        auto w = u * Vector4D<float>(10.5, 20.5, 30.5, 40.5);
        auto z = Vector4D<float>(10.5, 20.5, 30.5, 40.5) * u;
        assertTrue(this, std::is_same_v<Vector4D<float>, decltype (w)>);
        assertTrue(this, std::is_same_v<decltype(z),  decltype (w)>);
        assertTrue(this, equal(w.getX(), 105));
        assertTrue(this, equal(w.getY(), 410));
        assertTrue(this, equal(w.getZ(), 915));
        assertTrue(this, equal(w.getW(), 1620));
    }
    
    TEST(Vector4D, DivScalar) {
        Vector4D<int> u(10, 20, 30, 40);
        
        Vector4D<int> w = u / 10;
        assertEquals(this, w.getX(), 1);
        assertEquals(this, w.getY(), 2);
        assertEquals(this, w.getZ(), 3);
        assertEquals(this, w.getW(), 4);
    }
    
    TEST(Vector4D, DivScalarDifferent) {
        Vector4D<int> u(105, 210, 315, 420);
        auto w = u / 10.5f;
        assertTrue(this, std::is_same_v<Vector4D<float>, decltype (w)>);
        assertTrue(this, equal(w.getX(), 10));
        assertTrue(this, equal(w.getY(), 20));
        assertTrue(this, equal(w.getZ(), 30));
        assertTrue(this, equal(w.getW(), 40));
    }
    
    TEST(Vector4D, DivVec) {
        Vector4D<int> u(10, 20, 30, 40);
        
        Vector4D<int> w = u / Vector4D<int>(10, 5, 6, 8);
        assertEquals(this, w.getX(), 1);
        assertEquals(this, w.getY(), 4);
        assertEquals(this, w.getZ(), 5);
        assertEquals(this, w.getW(), 5);
    }
    
    TEST(Vector4D, DivVecDifferent) {
        Vector4D<int> u(10, 20, 30, 40);
        auto w = u / Vector4D<float>(1.0, 2.0, 3.0, 4.0);
        auto z = Vector4D<float>(105, 410, 915, 1620) / u;
        assertTrue(this, std::is_same_v<Vector4D<float>, decltype (w)>);
        assertTrue(this, std::is_same_v<decltype(z),  decltype (w)>);
        assertTrue(this, equal(w.getX(), 10));
        assertTrue(this, equal(w.getY(), 10));
        assertTrue(this, equal(w.getZ(), 10));
        assertTrue(this, equal(w.getW(), 10));
        assertTrue(this, equal(z.getX(), 10.5));
        assertTrue(this, equal(z.getY(), 20.5));
        assertTrue(this, equal(z.getZ(), 30.5));
        assertTrue(this, equal(z.getW(), 40.5));
    }
    
    TEST(Vector4D, DotProduct) {
        Vector4D<int> v(1, 0, 0, 0);
        Vector4D<int> u(0, 0, 0, 1);
        assertEquals(this, v | u, 0);
        
        Vector4D<int> w(0, 0, 0, 2);
        assertTrue(this, equal(std::abs(u | w), u.norm() * w.norm()));
    }

    TEST(Vector4D, VecProduct) {
        Vector4D<int> v(1, 0, 0, 0);
        Vector4D<int> u(0, 0, 1, 0);
    
        Vector4D<int> w = v ^ u;
        assertEquals(this, w, Vector4D<int>(0, -1, 0, 0));
    }
    
    TEST(Vector4D, Equal) {
        Vector4D<int> u(10, 20, 30, 40);
        Vector4D<int> v(10, 20, 30, 40);
        
        assertEquals(this, u, v);
    }
    
    TEST(Vector4D, EqualDifferent) {
        Vector4D<int> u(1, 1, 1, 1);
        Vector4D<float> v(0, 0, 0, 0);
        for (auto i = 0; i < 100; i++) {
            v += Vector4D<float>(0.01, 0.01, 0.01, 0.01);
        }
        
        assertTrue(this, u == v);
    }
    
    TEST(Vector4D, Different) {
        Vector4D<int> u(10, 20, 30, 40);
        Vector4D<int> v(10, 20, 30, 10);
        
        assertNotEquals(this, u, v);
    }
    
    TEST(Vector4D, DifferentDifferent) {
        Vector4D<int> u(1, 1, 1, 1);
        Vector4D<float> v(1.01, 1, 1, 1);
        
        assertTrue(this, u != v);
    }
    
    TEST(Vector4D, Inferior) {
        Vector4D<int> u(20, 20, 20, 20);
        Vector4D<int> v(10, 20, 20, 20);
        
        assertLesser(this, v, u);
    }
    
    TEST(Vector4D, InferiorDifferent) {
        Vector4D<int> u(2, 1, 1, 1);
        Vector4D<float> v(1.01, 1, 1, 1);
        
        assertTrue(this, v < u);
    }
    
    TEST(Vector4D, Superior) {
        Vector4D<int> u(20, 20, 20, 20);
        Vector4D<int> v(10, 20, 20, 20);
        
        assertGreater(this, u, v);
    }
    
    TEST(Vector4D, SuperiorDifferent) {
        Vector4D<int> u(2, 1, 1, 1);
        Vector4D<float> v(1.01, 1, 1, 1);
        
        assertTrue(this, u > v);
    }
    
    TEST(Vector4D, InferiorEqual) {
        Vector4D<int> u(2, 0, 0, 0);
        Vector4D<int> v(0, 0, 0, 1);
        Vector4D<int> w(1, 0, 0, 0);
        
        assertLesserOrEquals(this, v, u);
        assertLesserOrEquals(this, w, v);
    }
    
    TEST(Vector4D, InferiorEqualDifferent) {
        Vector4D<float> u(2, 0, 0, 0);
        Vector4D<int> v(0, 0, 0, 1);
        Vector4D<float> w(0, 0, 0, 0);
        for (auto i = 0; i < 100; i++) {
            w += Vector4D<float>(0.01, 0, 0, 0);
        }
        
        assertTrue(this, v <= u);
        assertTrue(this, w <= v);
    }
    
    TEST(Vector4D, SuperiorEqual) {
        Vector4D<int> u(2, 0, 0, 0);
        Vector4D<int> v(0, 0, 0, 1);
        Vector4D<int> w(1, 0, 0, 0);
        
        assertGreaterOrEquals(this, u, v);
        assertGreaterOrEquals(this, w, v);
    }
    
    TEST(Vector4D, SuperiorEqualDifferent) {
        Vector4D<float> u(2, 0, 0, 0);
        Vector4D<int> v(0, 0, 0, 1);
        Vector4D<float> w(0, 0, 0, 0);
        for (auto i = 0; i < 100; i++) {
            w += Vector4D<float>(0.01, 0, 0, 0);
        }
        
        assertTrue(this, u >= v);
        assertTrue(this, v >= w);
    }