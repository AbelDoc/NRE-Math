    
    /**
     * @file NRE_Vector3D.cpp
     * @brief Test of Math's API's Object : Vector3D
     * @author Louis ABEL
     * @date 09/10/2019
     * @copyright CC-BY-NC-SA
     */
    
    #include "../../../src/Header/NRE_Math.hpp"
    #include <Header/NRE_Tester.hpp>
    
    using namespace NRE::Math;
    using namespace NRE::Tester;
    
    TEST(Vector3D, CtrSeparate) {
        Vector3D<int> v(10, 20, 30);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
    }
    
    TEST(Vector3D, CtrSeparateDifferent) {
        Vector3D<double> u(10.0, 100, 21.5);
        Vector3D<int> v(u.getX(), u.getY(), u.getZ());
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 100);
        assertEquals(this, v.getZ(), 21);
    }
    
    TEST(Vector3D, CtrSame) {
        Vector3D<int> v(1);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getX(), v.getY());
        assertEquals(this, v.getY(), v.getZ());
    }
    
    TEST(Vector3D, CtrList) {
        Vector3D<int> v({0, 1, 2});
        assertEquals(this, v.getX(), 0);
        assertEquals(this, v.getY(), 1);
        assertEquals(this, v.getZ(), 2);
    }
    
    TEST(Vector3D, Copy) {
        Vector3D<int> u(1, 2, 3);
        Vector3D<int> v(u);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        assertEquals(this, v.getZ(), 3);
    }
    
    TEST(Vector3D, Move) {
        Vector3D<int> u(1, 2, 3);
        Vector3D<int> v(std::move(u));
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        assertEquals(this, v.getZ(), 3);
    }
    
    TEST(Vector3D, Convertor) {
        Vector3D<float> u(1, 2, 3);
        Vector3D<int> v(u);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        assertEquals(this, v.getZ(), 3);
    }
    
    TEST(Vector3D, ConvertorPrecision) {
        Vector3D<float> u(1.5, 2.5, 3.5);
        Vector3D<int> v(u);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        assertEquals(this, v.getZ(), 3);
    }
    
    TEST(Vector3D, Convertor2DDefault) {
        Vector2D<float> u(1.5, 2.5);
        Vector3D<int> v(u);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        assertEquals(this, v.getZ(), 0);
    }

    TEST(Vector3D, Convertor2DValue) {
        Vector2D<float> u(1.5, 2.5);
        Vector3D<int> v(u, 3.5);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        assertEquals(this, v.getZ(), 3);
    }
    
    TEST(Vector3D, Convertor4D) {
        Vector4D<float> u(1.5, 2.5, 3.5, 4.5);
        Vector3D<int> v(u);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        assertEquals(this, v.getZ(), 3);
    }
    
    TEST(Vector3D, Get) {
        Vector3D<int> v(1, 2, 3);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        assertEquals(this, v.getZ(), 3);
    }
    
    TEST(Vector3D, AlternateGet) {
        Vector3D<int> v(1, 2, 3);
        assertEquals(this, v.getR(), 1);
        assertEquals(this, v.getG(), 2);
        assertEquals(this, v.getB(), 3);
    }
    
    TEST(Vector3D, Set) {
        Vector3D<int> v(1, 2, 3);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        assertEquals(this, v.getZ(), 3);
        v.setX(10);
        v.setY(20);
        v.setZ(30);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
    }
    
    TEST(Vector3D, SetAlternate) {
        Vector3D<int> v(1, 2, 3);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        assertEquals(this, v.getZ(), 3);
        v.setR(10);
        v.setG(20);
        v.setB(30);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
    }
    
    TEST(Vector3D, SetDifferent) {
        Vector3D<int> v(1, 2, 3);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        assertEquals(this, v.getZ(), 3);
        v.setX(char(10));
        v.setY(20.5);
        v.setZ(30U);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
    }
    
    TEST(Vector3D, SetAlternateDifferent) {
        Vector3D<int> v(1, 2, 3);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        assertEquals(this, v.getZ(), 3);
        v.setR(char(10));
        v.setG(20.5);
        v.setB(30U);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
    }
    
    TEST(Vector3D, SetCoord) {
        Vector3D<int> v(1, 2, 3);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        assertEquals(this, v.getZ(), 3);
        v.setCoord(10, 20, 30);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
    }
    
    TEST(Vector3D, SetCoordVec) {
        Vector3D<int> v(1, 2, 3);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        assertEquals(this, v.getZ(), 3);
        v.setCoord(Vector2D<int>(10, 20), 30);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
    }
    
    TEST(Vector3D, SetRGB) {
        Vector3D<int> v(1, 2, 3);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        assertEquals(this, v.getZ(), 3);
        v.setRGB(10, 20, 30);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
    }
    
    TEST(Vector3D, SetCoordDifferent) {
        Vector3D<int> v(1, 2, 3);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        assertEquals(this, v.getZ(), 3);
        v.setCoord(10.5, 20.5, 30.5);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
    }
    
    TEST(Vector3D, SetRGBDifferent) {
        Vector3D<int> v(1, 2, 3);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        assertEquals(this, v.getZ(), 3);
        v.setRGB(10.5, 20.5, 30.5);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
    }
    
    TEST(Vector3D, Norm) {
        Vector3D<int> v(10, 10, 10);
        assertTrue(this, equal(v.norm(), std::sqrt(300)));
    }
    
    TEST(Vector3D, NormSquared) {
        Vector3D<int> v(10, 10, 10);
        assertEquals(this, v.normSquared(), 300);
    }
    
    TEST(Vector3D, Normalize) {
        Vector3D<int> v(10, 0, 0);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 0);
        assertEquals(this, v.getZ(), 0);
        v.normalize();
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 0);
        assertEquals(this, v.getZ(), 0);
    }
    
    TEST(Vector3D, Value) {
        Vector3D<int> v(10, 0, 20);
        assertEquals(this, *(v.value()), 10);
        assertEquals(this, *(v.value() + 1), 0);
        assertEquals(this, *(v.value() + 2), 20);
    }
    
    TEST(Vector3D, Access) {
        Vector3D<int> v(10, 0, 20);
        assertEquals(this, v[0], 10);
        assertEquals(this, v[1], 0);
        assertEquals(this, v[2], 20);
        v[0] = 1;
        v[1] = 2;
        v[2] = 3;
        assertEquals(this, v[0], 1);
        assertEquals(this, v[1], 2);
        assertEquals(this, v[2], 3);
    }
    
    TEST(Vector3D, Assign) {
        Vector3D<int> u(10, 20, 30);
        Vector3D<int> v(40, 50, 60);
        assertEquals(this, v.getX(), 40);
        assertEquals(this, v.getY(), 50);
        assertEquals(this, v.getZ(), 60);
        v = u;
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
    }
    
    TEST(Vector3D, AssignMove) {
        Vector3D<int> u(10, 20, 30);
        Vector3D<int> v(40, 50, 60);
        assertEquals(this, v.getX(), 40);
        assertEquals(this, v.getY(), 50);
        assertEquals(this, v.getZ(), 60);
        v = std::move(u);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
    }
    
    TEST(Vector3D, AssignDifferent) {
        Vector3D<float> u(10.5, 20.5, 30.5);
        Vector3D<int> v(40, 50, 60);
        assertEquals(this, v.getX(), 40);
        assertEquals(this, v.getY(), 50);
        assertEquals(this, v.getZ(), 60);
        v = u;
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
    }
    
    TEST(Vector3D, AssignMoveDifferent) {
        Vector3D<float> u(10.5, 20.5, 30.5);
        Vector3D<int> v(40, 50, 60);
        assertEquals(this, v.getX(), 40);
        assertEquals(this, v.getY(), 50);
        assertEquals(this, v.getZ(), 60);
        v = std::move(u);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
    }
    
    TEST(Vector3D, SelfAdd) {
        Vector3D<int> u(10, 20, 30);
        Vector3D<int> v(10, 20, 30);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
        v += u;
        assertEquals(this, v.getX(), 20);
        assertEquals(this, v.getY(), 40);
        assertEquals(this, v.getZ(), 60);
    }
    
    TEST(Vector3D, SelfAddDifferent) {
        Vector3D<float> u(10.5, 20.5, 30.5);
        Vector3D<int> v(10, 20, 30);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
        v += u;
        assertEquals(this, v.getX(), 20);
        assertEquals(this, v.getY(), 40);
        assertEquals(this, v.getZ(), 60);
    }
    
    TEST(Vector3D, SelfSub) {
        Vector3D<int> u(10, 20, 30);
        Vector3D<int> v(10, 20, 30);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
        v -= u;
        assertEquals(this, v.getX(), 0);
        assertEquals(this, v.getY(), 0);
        assertEquals(this, v.getZ(), 0);
    }
    
    TEST(Vector3D, SelfSubDifferent) {
        Vector3D<float> u(10.5, 20.5, 30.5);
        Vector3D<int> v(10, 20, 30);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
        v -= u;
        assertEquals(this, v.getX(), 0);
        assertEquals(this, v.getY(), 0);
        assertEquals(this, v.getZ(), 0);
    }
    
    TEST(Vector3D, SelfMultScalar) {
        Vector3D<int> v(10, 20, 30);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
        v *= 10;
        assertEquals(this, v.getX(), 100);
        assertEquals(this, v.getY(), 200);
        assertEquals(this, v.getZ(), 300);
    }
    
    TEST(Vector3D, SelfMultScalarDifferent) {
        Vector3D<int> v(10, 20, 30);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
        v *= 10.5;
        assertEquals(this, v.getX(), 105);
        assertEquals(this, v.getY(), 210);
        assertEquals(this, v.getZ(), 315);
        Vector3D<float> u(10.5, 20.5, 30.5);
        assertTrue(this, equal(u.getX(), 10.5));
        assertTrue(this, equal(u.getY(), 20.5));
        assertTrue(this, equal(u.getZ(), 30.5));
        u *= 10;
        assertTrue(this, equal(u.getX(), 105));
        assertTrue(this, equal(u.getY(), 205));
        assertTrue(this, equal(u.getZ(), 305));
    }
    
    TEST(Vector3D, SelfMultVec) {
        Vector3D<int> v(10, 20, 30);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
        v *= Vector3D<int>(10, 20, 30);
        assertEquals(this, v.getX(), 100);
        assertEquals(this, v.getY(), 400);
        assertEquals(this, v.getZ(), 900);
    }
    
    TEST(Vector3D, SelfMultVecDifferent) {
        Vector3D<int> v(10, 20, 30);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
        v *= Vector3D<float>(10.5, 20.5, 30.5);
        assertEquals(this, v.getX(), 105);
        assertEquals(this, v.getY(), 410);
        assertEquals(this, v.getZ(), 915);
        Vector3D<float> u(10.5, 20.5, 30.5);
        assertTrue(this, equal(u.getX(), 10.5));
        assertTrue(this, equal(u.getY(), 20.5));
        assertTrue(this, equal(u.getZ(), 30.5));
        u *= Vector3D<int>(10, 20, 30);
        assertTrue(this, equal(u.getX(), 105));
        assertTrue(this, equal(u.getY(), 410));
        assertTrue(this, equal(u.getZ(), 915));
    }
    
    TEST(Vector3D, SelfDivScalar) {
        Vector3D<int> v(10, 20, 30);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
        v /= 10;
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 2);
        assertEquals(this, v.getZ(), 3);
    }
    
    TEST(Vector3D, SelfDivScalarDifferent) {
        Vector3D<int> v(105, 210, 315);
        assertEquals(this, v.getX(), 105);
        assertEquals(this, v.getY(), 210);
        assertEquals(this, v.getZ(), 315);
        v /= 10.5;
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
        Vector3D<float> u(10.5, 20.5, 30.5);
        assertTrue(this, equal(u.getX(), 10.5));
        assertTrue(this, equal(u.getY(), 20.5));
        assertTrue(this, equal(u.getZ(), 30.5));
        u /= 10;
        assertTrue(this, equal(u.getX(), 1.05));
        assertTrue(this, equal(u.getY(), 2.05));
        assertTrue(this, equal(u.getZ(), 3.05));
    }
    
    TEST(Vector3D, SelfDivVec) {
        Vector3D<int> v(10, 20, 30);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 20);
        assertEquals(this, v.getZ(), 30);
        v /= Vector3D<int>(10, 20, 30);
        assertEquals(this, v.getX(), 1);
        assertEquals(this, v.getY(), 1);
        assertEquals(this, v.getZ(), 1);
    }
    
    TEST(Vector3D, SelfDivVecDifferent) {
        Vector3D<int> v(105, 210, 315);
        assertEquals(this, v.getX(), 105);
        assertEquals(this, v.getY(), 210);
        assertEquals(this, v.getZ(), 315);
        v /= Vector3D<float>(10.5, 21, 31.5);
        assertEquals(this, v.getX(), 10);
        assertEquals(this, v.getY(), 10);
        assertEquals(this, v.getZ(), 10);
        Vector3D<float> u(10.5, 20.5, 30.5);
        assertTrue(this, equal(u.getX(), 10.5));
        assertTrue(this, equal(u.getY(), 20.5));
        assertTrue(this, equal(u.getZ(), 30.5));
        u /= Vector3D<int>(10, 20, 40);
        assertTrue(this, equal(u.getX(), 1.05));
        assertTrue(this, equal(u.getY(), 1.025));
        assertTrue(this, equal(u.getZ(), 0.7625));
    }
    
    TEST(Vector3D, SelfDotProduct) {
        Vector3D<int> v(1, 0, 0);
        Vector3D<int> u(0, 0, 1);
        assertEquals(this, v |= u, 0);
        
        Vector3D<int> w(0, 0, 2);
        assertTrue(this, equal(std::abs(u |= w), u.norm() * w.norm()));
    }
    
    TEST(Vector3D, SelfVecProduct) {
        Vector3D<int> v(1, 0, 0);
        Vector3D<int> u(0, 0, 1);
        
        v ^= u;
        assertEquals(this, v, Vector3D<int>(0, -1, 0));
    }
    
    TEST(Vector3D, Add) {
        Vector3D<int> u(10, 20, 30);
        Vector3D<int> v(10, 20, 30);
        
        Vector3D<int> w = v + u;
        assertEquals(this, w.getX(), 20);
        assertEquals(this, w.getY(), 40);
        assertEquals(this, w.getZ(), 60);
    }
    
    TEST(Vector3D, AddDifferent) {
        Vector3D<float> u(10.5, 20.5, 30.5);
        Vector3D<int> v(10, 20, 30);
        auto w = v + u;
        auto z = u + v;
        assertTrue(this, std::is_same_v<Vector3D<float>, decltype (w)>);
        assertTrue(this, std::is_same_v<decltype(z),  decltype (w)>);
        assertTrue(this, equal(w.getX(), 20.5));
        assertTrue(this, equal(w.getY(), 40.5));
        assertTrue(this, equal(w.getZ(), 60.5));
    }
    
    TEST(Vector3D, Sub) {
        Vector3D<int> u(10, 20, 30);
        Vector3D<int> v(20, 20, 50);
        
        Vector3D<int> w = v - u;
        assertEquals(this, w.getX(), 10);
        assertEquals(this, w.getY(), 0);
        assertEquals(this, w.getZ(), 20);
    }
    
    TEST(Vector3D, SubDifferent) {
        Vector3D<float> u(10.5, 20.5, 30.5);
        Vector3D<int> v(10, 10, 10);
        auto w = v - u;
        auto z = u - v;
        assertTrue(this, std::is_same_v<Vector3D<float>, decltype (w)>);
        assertTrue(this, std::is_same_v<decltype(z),  decltype (w)>);
        assertTrue(this, equal(w.getX(), -0.5));
        assertTrue(this, equal(w.getY(), -10.5));
        assertTrue(this, equal(w.getZ(), -20.5));
    }
    
    TEST(Vector3D, Negate) {
        Vector3D<int> u(10, 20, 30);
        Vector3D<int> v = -u;
        assertEquals(this, v.getX(), -10);
        assertEquals(this, v.getY(), -20);
        assertEquals(this, v.getZ(), -30);
    }
    
    TEST(Vector3D, MultScalar) {
        Vector3D<int> u(10, 20, 30);
        
        Vector3D<int> w = u * 10;
        assertEquals(this, w.getX(), 100);
        assertEquals(this, w.getY(), 200);
        assertEquals(this, w.getZ(), 300);
    }
    
    TEST(Vector3D, MultScalarDifferent) {
        Vector3D<int> u(10, 20, 30);
        auto w = u * 10.5f;
        assertTrue(this, std::is_same_v<Vector3D<float>, decltype (w)>);
        assertTrue(this, equal(w.getX(), 105));
        assertTrue(this, equal(w.getY(), 210));
        assertTrue(this, equal(w.getZ(), 315));
    }
    
    TEST(Vector3D, MultVec) {
        Vector3D<int> u(10, 20, 30);
        
        Vector3D<int> w = u * Vector3D<int>(10, 20, 30);
        assertEquals(this, w.getX(), 100);
        assertEquals(this, w.getY(), 400);
        assertEquals(this, w.getZ(), 900);
    }
    
    TEST(Vector3D, MultVecDifferent) {
        Vector3D<int> u(10, 20, 30);
        auto w = u * Vector3D<float>(10.5, 20.5, 30.5);
        auto z = Vector3D<float>(10.5, 20.5, 30.5) * u;
        assertTrue(this, std::is_same_v<Vector3D<float>, decltype (w)>);
        assertTrue(this, std::is_same_v<decltype(z),  decltype (w)>);
        assertTrue(this, equal(w.getX(), 105));
        assertTrue(this, equal(w.getY(), 410));
        assertTrue(this, equal(w.getZ(), 915));
    }
    
    TEST(Vector3D, DivScalar) {
        Vector3D<int> u(10, 20, 30);
        
        Vector3D<int> w = u / 10;
        assertEquals(this, w.getX(), 1);
        assertEquals(this, w.getY(), 2);
        assertEquals(this, w.getZ(), 3);
    }
    
    TEST(Vector3D, DivScalarDifferent) {
        Vector3D<int> u(105, 210, 315);
        auto w = u / 10.5f;
        assertTrue(this, std::is_same_v<Vector3D<float>, decltype (w)>);
        assertTrue(this, equal(w.getX(), 10));
        assertTrue(this, equal(w.getY(), 20));
        assertTrue(this, equal(w.getZ(), 30));
    }
    
    TEST(Vector3D, DivVec) {
        Vector3D<int> u(10, 20, 30);
        
        Vector3D<int> w = u / Vector3D<int>(10, 5, 6);
        assertEquals(this, w.getX(), 1);
        assertEquals(this, w.getY(), 4);
        assertEquals(this, w.getZ(), 5);
    }
    
    TEST(Vector3D, DivVecDifferent) {
        Vector3D<int> u(10, 20, 30);
        auto w = u / Vector3D<float>(1.0, 2.0, 3.0);
        auto z = Vector3D<float>(105, 410, 915) / u;
        assertTrue(this, std::is_same_v<Vector3D<float>, decltype (w)>);
        assertTrue(this, std::is_same_v<decltype(z),  decltype (w)>);
        assertTrue(this, equal(w.getX(), 10));
        assertTrue(this, equal(w.getY(), 10));
        assertTrue(this, equal(w.getZ(), 10));
        assertTrue(this, equal(z.getX(), 10.5));
        assertTrue(this, equal(z.getY(), 20.5));
        assertTrue(this, equal(z.getZ(), 30.5));
    }
    
    TEST(Vector3D, DotProduct) {
        Vector3D<int> v(1, 0, 0);
        Vector3D<int> u(0, 0, 1);
        assertEquals(this, v | u, 0);
        
        Vector3D<int> w(0, 0, 2);
        assertTrue(this, equal(std::abs(u | w), u.norm() * w.norm()));
    }

    TEST(Vector3D, VecProduct) {
        Vector3D<int> v(1, 0, 0);
        Vector3D<int> u(0, 0, 1);
    
        Vector3D<int> w = v ^ u;
        assertEquals(this, w, Vector3D<int>(0, -1, 0));
    }
    
    TEST(Vector3D, Equal) {
        Vector3D<int> u(10, 20, 30);
        Vector3D<int> v(10, 20, 30);
        
        assertEquals(this, u, v);
    }
    
    TEST(Vector3D, EqualDifferent) {
        Vector3D<int> u(1, 1, 1);
        Vector3D<float> v(0, 0, 0);
        for (auto i = 0; i < 100; i++) {
            v += Vector3D<float>(0.01, 0.01, 0.01);
        }
        
        assertTrue(this, u == v);
    }
    
    TEST(Vector3D, Different) {
        Vector3D<int> u(10, 20, 30);
        Vector3D<int> v(10, 20, 10);
        
        assertNotEquals(this, u, v);
    }
    
    TEST(Vector3D, DifferentDifferent) {
        Vector3D<int> u(1, 1, 1);
        Vector3D<float> v(1.01, 1, 1);
        
        assertTrue(this, u != v);
    }
    
    TEST(Vector3D, Inferior) {
        Vector3D<int> u(20, 20, 20);
        Vector3D<int> v(10, 20, 20);
        
        assertLesser(this, v, u);
    }
    
    TEST(Vector3D, InferiorDifferent) {
        Vector3D<int> u(2, 1, 1);
        Vector3D<float> v(1.01, 1, 1);
        
        assertTrue(this, v < u);
    }
    
    TEST(Vector3D, Superior) {
        Vector3D<int> u(20, 20, 20);
        Vector3D<int> v(10, 20, 20);
        
        assertGreater(this, u, v);
    }
    
    TEST(Vector3D, SuperiorDifferent) {
        Vector3D<int> u(2, 1, 1);
        Vector3D<float> v(1.01, 1, 1);
        
        assertTrue(this, u > v);
    }
    
    TEST(Vector3D, InferiorEqual) {
        Vector3D<int> u(2, 0, 0);
        Vector3D<int> v(0, 0, 1);
        Vector3D<int> w(1, 0, 0);
        
        assertLesserOrEquals(this, v, u);
        assertLesserOrEquals(this, w, v);
    }
    
    TEST(Vector3D, InferiorEqualDifferent) {
        Vector3D<float> u(2, 0, 0);
        Vector3D<int> v(0, 0, 1);
        Vector3D<float> w(0, 0, 0);
        for (auto i = 0; i < 100; i++) {
            w += Vector3D<float>(0.01, 0, 0);
        }
        
        assertTrue(this, v <= u);
        assertTrue(this, w <= v);
    }
    
    TEST(Vector3D, SuperiorEqual) {
        Vector3D<int> u(2, 0, 0);
        Vector3D<int> v(0, 0, 1);
        Vector3D<int> w(1, 0, 0);
        
        assertGreaterOrEquals(this, u, v);
        assertGreaterOrEquals(this, w, v);
    }
    
    TEST(Vector3D, SuperiorEqualDifferent) {
        Vector3D<float> u(2, 0, 0);
        Vector3D<int> v(0, 0, 1);
        Vector3D<float> w(0, 0, 0);
        for (auto i = 0; i < 100; i++) {
            w += Vector3D<float>(0.01, 0, 0);
        }
        
        assertTrue(this, u >= v);
        assertTrue(this, v >= w);
    }