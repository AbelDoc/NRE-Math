    
    /**
     * @file NRE_Vector2D.cpp
     * @brief Test of Math's API's Object : Vector2D
     * @author Louis ABEL
     * @date 09/10/2019
     * @copyright CC-BY-NC-SA
     */
    
    #include "../../../src/Header/NRE_Math.hpp"
    #include <Header/NRE_Tester.hpp>
    
    using namespace NRE::Math;
    using namespace NRE::Tester;
    
    TEST(Vector2D, CtrSeparate) {
        Vector2D<int> v(10, 20);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
    }

    TEST(Vector2D, CtrSeparateDifferent) {
        Vector2D<double> u(10.0, 100);
        Vector2D<int> v(u.getX(), u.getY());
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 100);
    }

    TEST(Vector2D, CtrSame) {
        Vector2D<int> v(1);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getX(), v.getY());
    }

    TEST(Vector2D, Copy) {
        Vector2D<int> u(1, 2);
        Vector2D<int> v(u);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
    }

    TEST(Vector2D, Move) {
        Vector2D<int> u(1, 2);
        Vector2D<int> v(std::move(u));
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
    }

    TEST(Vector2D, Convertor) {
        Vector2D<float> u(1, 2);
        Vector2D<int> v(u);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
    }

    TEST(Vector2D, ConvertorPrecision) {
        Vector2D<float> u(1.5, 2.5);
        Vector2D<int> v(u);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
    }

    TEST(Vector2D, Convertor3D) {
        Vector3D<float> u(1.5, 2.5, 3.5);
        Vector2D<int> v(u);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
    }

    TEST(Vector2D, Convertor4D) {
        Vector4D<float> u(1.5, 2.5, 3.5, 4.5);
        Vector2D<int> v(u);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
    }
    
    TEST(Vector2D, Get) {
        Vector2D<int> v(1, 2);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
    }
    
    TEST(Vector2D, AlternateGet) {
        Vector2D<int> v(1, 2);
        assertEquals(this, v.getW(), 1);
        assertEquals(this, v.getH(), 2);
    }

    TEST(Vector2D, Set) {
        Vector2D<int> v(1, 2);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        v.setX(10);
        v.setY(20);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
    }

    TEST(Vector2D, SetAlternate) {
        Vector2D<int> v(1, 2);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        v.setW(10);
        v.setH(20);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
    }

    TEST(Vector2D, SetDifferent) {
        Vector2D<int> v(1, 2);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        v.setX(char(10));
        v.setY(20.5);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
    }

    TEST(Vector2D, SetAlternateDifferent) {
        Vector2D<int> v(1, 2);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        v.setW(char(10));
        v.setH(20.5);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
    }

    TEST(Vector2D, SetCoord) {
        Vector2D<int> v(1, 2);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        v.setCoord(10, 20);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
    }

    TEST(Vector2D, SetSize) {
        Vector2D<int> v(1, 2);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        v.setSize(10, 20);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
    }

    TEST(Vector2D, SetCoordDifferent) {
        Vector2D<int> v(1, 2);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        v.setCoord(10.5, 20.5);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
    }

    TEST(Vector2D, SetSizeDifferent) {
        Vector2D<int> v(1, 2);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        v.setSize(10.5, 20.5);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
    }
    
    TEST(Vector2D, Norm) {
        Vector2D<int> v(10, 10);
        assertTrue(this, equal(v.norm(), std::sqrt(200)));
    }

    TEST(Vector2D, NormSquared) {
        Vector2D<int> v(10, 10);
        assertEquals(this, v.normSquared(), 200);
    }
    
    TEST(Vector2D, Normalize) {
        Vector2D<int> v(10, 0);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 0);
        v.normalize();
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 0);
    }

    TEST(Vector2D, Value) {
        Vector2D<int> v(10, 0);
        assertEquals(this, *(v.value()), 10);
        assertEquals(this, *(v.value() + 1), 0);
    }
    
    TEST(Vector2D, Access) {
        Vector2D<int> v(10, 0);
        assertEquals(this, v[0], 10);
        assertEquals(this, v[1], 0);
        v[0] = 20;
        v[1] = 30;
        assertEquals(this, v[0], 20);
        assertEquals(this, v[1], 30);
    }

    TEST(Vector2D, Assign) {
        Vector2D<int> u(10, 20);
        Vector2D<int> v(30, 40);
        assertEquals(this, v.getX(), 30);
        assertEquals(this, v.getY(), 40);
        v = u;
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
    }

    TEST(Vector2D, AssignMove) {
        Vector2D<int> u(10, 20);
        Vector2D<int> v(30, 40);
        assertEquals(this, v.getX(), 30);
        assertEquals(this, v.getY(), 40);
        v = std::move(u);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
    }

    TEST(Vector2D, AssignDifferent) {
        Vector2D<float> u(10.5, 20.5);
        Vector2D<int> v(30, 40);
        assertEquals(this, v.getX(), 30);
        assertEquals(this, v.getY(), 40);
        v = u;
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
    }

    TEST(Vector2D, AssignMoveDifferent) {
        Vector2D<float> u(10.5, 20.5);
        Vector2D<int> v(30, 40);
        assertEquals(this, v.getX(), 30);
        assertEquals(this, v.getY(), 40);
        v = std::move(u);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
    }
    
    TEST(Vector2D, SelfAdd) {
        Vector2D<int> u(10, 20);
        Vector2D<int> v(10, 20);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        v += u;
        assertEquals(this, v.getX(), 20);
        assertEquals(this, v.getY(), 40);
    }

    TEST(Vector2D, SelfAddDifferent) {
        Vector2D<float> u(10.5, 20.5);
        Vector2D<int> v(10, 20);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        v += u;
        assertEquals(this, v.getX(), 20);
        assertEquals(this, v.getY(), 40);
    }

    TEST(Vector2D, SelfSub) {
        Vector2D<int> u(10, 20);
        Vector2D<int> v(10, 20);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        v -= u;
        assertEquals(this, v.getX(), 0);
        assertEquals(this, v.getY(), 0);
    }

    TEST(Vector2D, SelfSubDifferent) {
        Vector2D<float> u(10.5, 20.5);
        Vector2D<int> v(10, 20);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        v -= u;
        assertEquals(this, v.getX(), 0);
        assertEquals(this, v.getY(), 0);
    }
    
    TEST(Vector2D, SelfMultScalar) {
        Vector2D<int> v(10, 20);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        v *= 10;
        assertEquals(this, v.getX(), 100);
        assertEquals(this, v.getY(), 200);
    }

    TEST(Vector2D, SelfMultScalarDifferent) {
        Vector2D<int> v(10, 20);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        v *= 10.5;
        assertEquals(this, v.getX(), 105);
        assertEquals(this, v.getY(), 210);
        Vector2D<float> u(10.5, 20.5);
        assertTrue(this, equal(u.getX(), 10.5));
        assertTrue(this, equal(u.getY(), 20.5));
        u *= 10;
        assertTrue(this, equal(u.getX(), 105));
        assertTrue(this, equal(u.getY(), 205));
    }