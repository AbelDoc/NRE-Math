    
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
    
    TEST(Vector2D, CtrList) {
        Vector2D<int> v({0, 1});
        assertEquals(this, v.getX(), 0);
        assertEquals(this, v.getY(), 1);
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

    TEST(Vector2D, SelfMultVec) {
        Vector2D<int> v(10, 20);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        v *= Vector2D<int>(10, 20);
        assertEquals(this, v.getX(), 100);
        assertEquals(this, v.getY(), 400);
    }

    TEST(Vector2D, SelfMultVecDifferent) {
        Vector2D<int> v(10, 20);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        v *= Vector2D<float>(10.5, 20.5);
        assertEquals(this, v.getX(), 105);
        assertEquals(this, v.getY(), 410);
        Vector2D<float> u(10.5, 20.5);
        assertTrue(this, equal(u.getX(), 10.5));
        assertTrue(this, equal(u.getY(), 20.5));
        u *= Vector2D<int>(10, 20);
        assertTrue(this, equal(u.getX(), 105));
        assertTrue(this, equal(u.getY(), 410));
    }

    TEST(Vector2D, SelfDivScalar) {
        Vector2D<int> v(10, 20);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        v /= 10;
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
    }

    TEST(Vector2D, SelfDivScalarDifferent) {
        Vector2D<int> v(105, 210);
        assertEquals(this, v.getX(), 105);
        assertEquals(this, v.getY(), 210);
        v /= 10.5;
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        Vector2D<float> u(10.5, 20.5);
        assertTrue(this, equal(u.getX(), 10.5));
        assertTrue(this, equal(u.getY(), 20.5));
        u /= 10;
        assertTrue(this, equal(u.getX(), 1.05));
        assertTrue(this, equal(u.getY(), 2.05));
    }

    TEST(Vector2D, SelfDivVec) {
        Vector2D<int> v(10, 20);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        v /= Vector2D<int>(10, 20);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 1);
    }

    TEST(Vector2D, SelfDivVecDifferent) {
        Vector2D<int> v(105, 210);
        assertEquals(this, v.getX(), 105);
        assertEquals(this, v.getY(), 210);
        v /= Vector2D<float>(10.5, 21);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 10);
        Vector2D<float> u(10.5, 20.5);
        assertTrue(this, equal(u.getX(), 10.5));
        assertTrue(this, equal(u.getY(), 20.5));
        u /= Vector2D<int>(10, 20);
        assertTrue(this, equal(u.getX(), 1.05));
        assertTrue(this, equal(u.getY(), 1.025));
    }
    
    TEST(Vector2D, SelfDotProduct) {
        Vector2D<int> v(1, 0);
        Vector2D<int> u(0, 1);
        assertEquals(this, v |= u, 0);
        
        Vector2D<int> w(0, 2);
        assertTrue(this, equal(std::abs(u |= w), u.norm() * w.norm()));
    }

    TEST(Vector2D, Add) {
        Vector2D<int> u(10, 20);
        Vector2D<int> v(10, 20);
        
        Vector2D<int> w = v + u;
        assertEquals(this, w.getX(), 20);
        assertEquals(this, w.getY(), 40);
    }

    TEST(Vector2D, AddDifferent) {
        Vector2D<float> u(10.5, 20.5);
        Vector2D<int> v(10, 20);
        auto w = v + u;
        auto z = u + v;
        assertTrue(this, std::is_same_v<Vector2D<float>, decltype (w)>);
        assertTrue(this, std::is_same_v<decltype(z),  decltype (w)>);
        assertTrue(this, equal(w.getX(), 20.5));
        assertTrue(this, equal(w.getY(), 40.5));
    }

    TEST(Vector2D, Sub) {
        Vector2D<int> u(10, 20);
        Vector2D<int> v(20, 20);
    
        Vector2D<int> w = v - u;
        assertEquals(this, w.getX(), 10);
        assertEquals(this, w.getY(), 0);
    }

    TEST(Vector2D, SubDifferent) {
        Vector2D<float> u(10.5, 20.5);
        Vector2D<int> v(10, 10);
        auto w = v - u;
        auto z = u - v;
        assertTrue(this, std::is_same_v<Vector2D<float>, decltype (w)>);
        assertTrue(this, std::is_same_v<decltype(z),  decltype (w)>);
        assertTrue(this, equal(w.getX(), -0.5));
        assertTrue(this, equal(w.getY(), -10.5));
    }
    
    TEST(Vector2D, Negate) {
        Vector2D<int> u(10, 20);
        Vector2D<int> v = -u;
        assertEquals(this, v.getX(), -10);
        assertEquals(this, v.getY(), -20);
    }

    TEST(Vector2D, MultScalar) {
        Vector2D<int> u(10, 20);
    
        Vector2D<int> w = u * 10;
        assertEquals(this, w.getX(), 100);
        assertEquals(this, w.getY(), 200);
    }

    TEST(Vector2D, MultScalarDifferent) {
        Vector2D<int> u(10, 20);
        auto w = u * 10.5f;
        assertTrue(this, std::is_same_v<Vector2D<float>, decltype (w)>);
        assertTrue(this, equal(w.getX(), 105));
        assertTrue(this, equal(w.getY(), 210));
    }

    TEST(Vector2D, MultVec) {
        Vector2D<int> u(10, 20);
    
        Vector2D<int> w = u * Vector2D<int>(10, 20);
        assertEquals(this, w.getX(), 100);
        assertEquals(this, w.getY(), 400);
    }

    TEST(Vector2D, MultVecDifferent) {
        Vector2D<int> u(10, 20);
        auto w = u * Vector2D<float>(10.5, 20.5);
        auto z = Vector2D<float>(10.5, 20.5) * u;
        assertTrue(this, std::is_same_v<Vector2D<float>, decltype (w)>);
        assertTrue(this, std::is_same_v<decltype(z),  decltype (w)>);
        assertTrue(this, equal(w.getX(), 105));
        assertTrue(this, equal(w.getY(), 410));
    }

    TEST(Vector2D, DivScalar) {
        Vector2D<int> u(10, 20);
    
        Vector2D<int> w = u / 10;
        assertEquals(this, w.getX(), 1);
        assertEquals(this, w.getY(), 2);
    }

    TEST(Vector2D, DivScalarDifferent) {
        Vector2D<int> u(105, 210);
        auto w = u / 10.5f;
        assertTrue(this, std::is_same_v<Vector2D<float>, decltype (w)>);
        assertTrue(this, equal(w.getX(), 10));
        assertTrue(this, equal(w.getY(), 20));
    }

    TEST(Vector2D, DivVec) {
        Vector2D<int> u(10, 20);
    
        Vector2D<int> w = u / Vector2D<int>(10, 5);
        assertEquals(this, w.getX(), 1);
        assertEquals(this, w.getY(), 4);
    }

    TEST(Vector2D, DivVecDifferent) {
        Vector2D<int> u(10, 20);
        auto w = u / Vector2D<float>(1.0, 2.0);
        auto z = Vector2D<float>(105, 410) / u;
        assertTrue(this, std::is_same_v<Vector2D<float>, decltype (w)>);
        assertTrue(this, std::is_same_v<decltype(z),  decltype (w)>);
        assertTrue(this, equal(w.getX(), 10));
        assertTrue(this, equal(w.getY(), 10));
        assertTrue(this, equal(z.getX(), 10.5));
        assertTrue(this, equal(z.getY(), 20.5));
    }
    
    TEST(Vector2D, DotProduct) {
        Vector2D<int> v(1, 0);
        Vector2D<int> u(0, 1);
        assertEquals(this, v | u, 0);
    
        Vector2D<int> w(0, 2);
        assertTrue(this, equal(std::abs(u | w), u.norm() * w.norm()));
    }
    
    TEST(Vector2D, Equal) {
        Vector2D<int> u(10, 20);
        Vector2D<int> v(10, 20);
        
        assertEquals(this, u, v);
    }
    
    TEST(Vector2D, EqualDifferent) {
        Vector2D<int> u(1, 1);
        Vector2D<float> v(0, 0);
        for (auto i = 0; i < 100; i++) {
            v += Vector2D<float>(0.01, 0.01);
        }
        
        assertTrue(this, u == v);
    }

    TEST(Vector2D, Different) {
        Vector2D<int> u(10, 20);
        Vector2D<int> v(20, 20);
    
        assertNotEquals(this, u, v);
    }

    TEST(Vector2D, DifferentDifferent) {
        Vector2D<int> u(1, 1);
        Vector2D<float> v(1.01, 1);
    
        assertTrue(this, u != v);
    }

    TEST(Vector2D, Inferior) {
        Vector2D<int> u(20, 20);
        Vector2D<int> v(10, 20);
    
        assertLesser(this, v, u);
    }

    TEST(Vector2D, InferiorDifferent) {
        Vector2D<int> u(2, 1);
        Vector2D<float> v(1.01, 1);
    
        assertTrue(this, v < u);
    }

    TEST(Vector2D, Superior) {
        Vector2D<int> u(20, 20);
        Vector2D<int> v(10, 20);
    
        assertGreater(this, u, v);
    }

    TEST(Vector2D, SuperiorDifferent) {
        Vector2D<int> u(2, 1);
        Vector2D<float> v(1.01, 1);
    
        assertTrue(this, u > v);
    }
    
    TEST(Vector2D, InferiorEqual) {
        Vector2D<int> u(2, 0);
        Vector2D<int> v(0, 1);
        Vector2D<int> w(1, 0);
    
        assertLesserOrEquals(this, v, u);
        assertLesserOrEquals(this, w, v);
    }

    TEST(Vector2D, InferiorEqualDifferent) {
        Vector2D<float> u(2, 0);
        Vector2D<int> v(0, 1);
        Vector2D<float> w(0, 0);
        for (auto i = 0; i < 100; i++) {
            w += Vector2D<float>(0.01, 0);
        }
    
        assertTrue(this, v <= u);
        assertTrue(this, w <= v);
    }

    TEST(Vector2D, SuperiorEqual) {
        Vector2D<int> u(2, 0);
        Vector2D<int> v(0, 1);
        Vector2D<int> w(1, 0);
    
        assertGreaterOrEquals(this, u, v);
        assertGreaterOrEquals(this, w, v);
    }

    TEST(Vector2D, SuperiorEqualDifferent) {
        Vector2D<float> u(2, 0);
        Vector2D<int> v(0, 1);
        Vector2D<float> w(0, 0);
        for (auto i = 0; i < 100; i++) {
            w += Vector2D<float>(0.01, 0);
        }
    
        assertTrue(this, u >= v);
        assertTrue(this, v >= w);
    }