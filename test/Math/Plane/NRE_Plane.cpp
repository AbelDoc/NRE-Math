    
    /**
     * @file NRE_Plane.cpp
     * @brief Test of Math's API's Object : Plane
     * @author Louis ABEL
     * @date 13/10/2019
     * @copyright CC-BY-NC-SA
     */
    
    #include "../../../src/Header/NRE_Math.hpp"
    #include <Header/NRE_Tester.hpp>
    
    using namespace NRE::Math;
    using namespace NRE::Tester;
    
    TEST(Plane, Ctr4D) {
        Plane<int> p(Vector4D<int>(0, 1, 0, 0), Point4D<int>(0, 0, 0, 1));
        assertEquals(this, p.getNormal(), Vector3D<int>(0, 1, 0));
        assertEquals(this, p.getPoint(), Point3D<int>(0, 0, 0));
    }

    TEST(Plane, Ctr3D) {
        Plane<int> p(Vector3D<int>(0, 1, 0), Point3D<int>(0, 0, 0));
        assertEquals(this, p.getNormal(), Vector3D<int>(0, 1, 0));
        assertEquals(this, p.getPoint(), Point3D<int>(0, 0, 0));
    }
    
    TEST(Plane, CtrPoint4D) {
        Plane<int> p(Point4D<int>(0, 0, 0, 1), Point4D<int>(0, 0, 1, 1), Point4D<int>(1, 0, 0, 1));
        assertEquals(this, p.getNormal(), Vector3D<int>(0, 1, 0));
        assertEquals(this, p.getPoint(), Point3D<int>(0, 0, 0));
    }

    TEST(Plane, CtrPoint3D) {
        Plane<int> p(Point3D<int>(0, 0, 0), Point3D<int>(0, 0, 1), Point3D<int>(1, 0, 0));
        assertEquals(this, p.getNormal(), Vector3D<int>(0, 1, 0));
        assertEquals(this, p.getPoint(), Point3D<int>(0, 0, 0));
    }
    
    TEST(Plane, CtrCopy) {
        Plane<int> p(Vector3D<int>(0, 1, 0), Point3D<int>(0, 0, 0));
        assertEquals(this, p.getNormal(), Vector3D<int>(0, 1, 0));
        assertEquals(this, p.getPoint(), Point3D<int>(0, 0, 0));
        Plane<int> plane(p);
        assertEquals(this, plane.getNormal(), Vector3D<int>(0, 1, 0));
        assertEquals(this, plane.getPoint(), Point3D<int>(0, 0, 0));
    }

    TEST(Plane, CtrMove) {
        Plane<int> p(Vector3D<int>(0, 1, 0), Point3D<int>(0, 0, 0));
        assertEquals(this, p.getNormal(), Vector3D<int>(0, 1, 0));
        assertEquals(this, p.getPoint(), Point3D<int>(0, 0, 0));
        Plane<int> plane(std::move(p));
        assertEquals(this, plane.getNormal(), Vector3D<int>(0, 1, 0));
        assertEquals(this, plane.getPoint(), Point3D<int>(0, 0, 0));
    }

    TEST(Plane, Convertor) {
        Plane<float> p(Vector3D<float>(0, 1.5, 0), Point3D<float>(0, 0, 0));
        assertEquals(this, p.getNormal(), Vector3D<float>(0, 1.5, 0));
        assertEquals(this, p.getPoint(), Point3D<float>(0, 0, 0));
        Plane<int> plane(p);
        assertEquals(this, plane.getNormal(), Vector3D<int>(0, 1, 0));
        assertEquals(this, plane.getPoint(), Point3D<int>(0, 0, 0));
    }
    
    TEST(Plane, Get) {
        Plane<int> p(Vector3D<int>(0, 1, 0), Point3D<int>(0, 0, 0));
        assertEquals(this, p.getNormal(), Vector3D<int>(0, 1, 0));
        assertEquals(this, p.getPoint(), Point3D<int>(0, 0, 0));
    }
    
    TEST(Plane, Set4D) {
        Plane<int> p(Vector3D<int>(0, 1, 0), Point3D<int>(0, 0, 0));
        assertEquals(this, p.getNormal(), Vector3D<int>(0, 1, 0));
        assertEquals(this, p.getPoint(), Point3D<int>(0, 0, 0));
        p.setNormal(Vector4D<int>(1, 0, 0, 0));
        p.setPoint(Point4D<int>(1, 0, 0, 1));
        assertEquals(this, p.getNormal(), Vector3D<int>(1, 0, 0));
        assertEquals(this, p.getPoint(), Point3D<int>(1, 0, 0));
        p.setNormalAndPoint(Vector4D<int>(0, 1, 0, 0), Point4D<int>(0, 0, 0, 1));
        assertEquals(this, p.getNormal(), Vector3D<int>(0, 1, 0));
        assertEquals(this, p.getPoint(), Point3D<int>(0, 0, 0));
    }

    TEST(Plane, Set3D) {
        Plane<int> p(Vector3D<int>(0, 1, 0), Point3D<int>(0, 0, 0));
        assertEquals(this, p.getNormal(), Vector3D<int>(0, 1, 0));
        assertEquals(this, p.getPoint(), Point3D<int>(0, 0, 0));
        p.setNormal(Vector3D<int>(1, 0, 0));
        p.setPoint(Point3D<int>(1, 0, 0));
        assertEquals(this, p.getNormal(), Vector3D<int>(1, 0, 0));
        assertEquals(this, p.getPoint(), Point3D<int>(1, 0, 0));
        p.setNormalAndPoint(Vector3D<int>(0, 1, 0), Point3D<int>(0, 0, 0));
        assertEquals(this, p.getNormal(), Vector3D<int>(0, 1, 0));
        assertEquals(this, p.getPoint(), Point3D<int>(0, 0, 0));
    }
    
    TEST(Plane, Distance4D) {
        Plane<int> p(Vector3D<int>(0, 1, 0), Point3D<int>(0, 0, 0));
        auto dist1 = p.distance(Point4D<float>(0, 1.5, 0, 1));
        auto dist2 = p.distance(Point4D<int>(0, 2, 0, 2));
        assertTrue(this, std::is_same<decltype(dist1), float>::value);
        assertTrue(this, std::is_same<decltype(dist2), int>::value);
        assertTrue(this, equal(dist1, 1.5));
        assertEquals(this, dist2, 1);
    }
    
    TEST(Plane, Distance3D) {
        Plane<int> p(Vector3D<int>(0, 1, 0), Point3D<int>(0, 0, 0));
        int dist = p.distance(Point3D<int>(0, 2, 0));
        assertEquals(this, dist, 2);
    }
    
    TEST(Plane, Assign) {
        Plane<int> p(Vector3D<int>(0, 1, 0), Point3D<int>(0, 0, 0));
        Plane<int> plane(Vector3D<int>(1, 0, 0), Point3D<int>(1, 0, 0));
        assertEquals(this, plane.getNormal(), Vector3D<int>(1, 0, 0));
        assertEquals(this, plane.getPoint(), Point3D<int>(1, 0, 0));
        plane = p;
        assertEquals(this, plane.getNormal(), Vector3D<int>(0, 1, 0));
        assertEquals(this, plane.getPoint(), Point3D<int>(0, 0, 0));
    }
    
    TEST(Plane, AissgnMove) {
        Plane<int> p(Vector3D<int>(0, 1, 0), Point3D<int>(0, 0, 0));
        Plane<int> plane(Vector3D<int>(1, 0, 0), Point3D<int>(1, 0, 0));
        assertEquals(this, plane.getNormal(), Vector3D<int>(1, 0, 0));
        assertEquals(this, plane.getPoint(), Point3D<int>(1, 0, 0));
        plane = std::move(p);
        assertEquals(this, plane.getNormal(), Vector3D<int>(0, 1, 0));
        assertEquals(this, plane.getPoint(), Point3D<int>(0, 0, 0));
    }
    
    TEST(Plane, AssignConvertor) {
        Plane<float> p(Vector3D<float>(0, 1.5, 0), Point3D<float>(0, 0, 0));
        Plane<int> plane(Vector3D<int>(1, 0, 0), Point3D<int>(1, 0, 0));
        assertEquals(this, plane.getNormal(), Vector3D<int>(1, 0, 0));
        assertEquals(this, plane.getPoint(), Point3D<int>(1, 0, 0));
        plane = p;
        assertEquals(this, plane.getNormal(), Vector3D<int>(0, 1, 0));
        assertEquals(this, plane.getPoint(), Point3D<int>(0, 0, 0));
    }
    
    TEST(Plane, Equality) {
        Plane<int> p1(Vector3D<int>(0, 1, 0), Point3D<int>(0, 0, 0));
        Plane<int> p2(Vector3D<int>(0, 1, 0), Point3D<int>(0, 0, 0));
        Plane<int> p3(Vector3D<int>(0, 1, 0), Point3D<int>(0, 0, 1));
        
        assertEquals(this, p1, p2);
        assertEquals(this, p1, p3);
    }
    
    TEST(Plane, Different) {
        Plane<int> p1(Vector3D<int>(0, 1, 0), Point3D<int>(0, 0, 0));
        Plane<int> p2(Vector3D<int>(1, 0, 0), Point3D<int>(0, 0, 0));
        Plane<int> p3(Vector3D<int>(0, 1, 0), Point3D<int>(0, 1, 0));
        
        assertNotEquals(this, p1, p2);
        assertNotEquals(this, p1, p3);
    }