    
    /**
     * @file NRE_Segment3D.cpp
     * @brief Test of Math's API's Object : Segment3D
     * @author Louis ABEL
     * @date 10/10/2019
     * @copyright CC-BY-NC-SA
     */
    
    #include "../../../src/Header/NRE_Math.hpp"
    #include <Header/NRE_Tester.hpp>
    
    using namespace NRE::Math;
    using namespace NRE::Tester;
    
    TEST(Segment3D, Ctr2D) {
        Segment3D<int> seg(Point2D<int>(0, 0), Point2D<int>(1, 1));
        assertEquals(this, seg.getStart(), Point3D<int>(0, 0, 1));
        assertEquals(this, seg.getEnd(), Point3D<int>(1, 1, 1));
    }

    TEST(Segment3D, Ctr2DDifferent) {
        Segment3D<int> seg(Point2D<float>(0.5, 0), Point2D<double>(1.5, 1.5));
        assertEquals(this, seg.getStart(), Point3D<int>(0, 0, 1));
        assertEquals(this, seg.getEnd(), Point3D<int>(1, 1, 1));
    }
    
    TEST(Segment3D, CtrSeparate) {
        Segment3D<int> seg(0, 0, 1, 1);
        assertEquals(this, seg.getStart(), Point3D<int>(0, 0, 1));
        assertEquals(this, seg.getEnd(), Point3D<int>(1, 1, 1));
    }

    TEST(Segment3D, CtrSeparateDifferent) {
        Segment3D<int> seg(0.5, 0.25, 1u, 1.1f);
        assertEquals(this, seg.getStart(), Point3D<int>(0, 0, 1));
        assertEquals(this, seg.getEnd(), Point3D<int>(1, 1, 1));
    }

    TEST(Segment3D, CtrCopy) {
        Segment3D<int> base(0, 0, 1, 1);
        Segment3D<int> seg(base);
        assertEquals(this, seg.getStart(), Point3D<int>(0, 0, 1));
        assertEquals(this, seg.getEnd(), Point3D<int>(1, 1, 1));
    }

    TEST(Segment3D, CtrMove) {
        Segment3D<int> base(0, 0, 1, 1);
        Segment3D<int> seg(std::move(base));
        assertEquals(this, seg.getStart(), Point3D<int>(0, 0, 1));
        assertEquals(this, seg.getEnd(), Point3D<int>(1, 1, 1));
    }
    
    TEST(Segment3D, Get) {
        Segment3D<int> seg(0, 0, 1, 1);
        assertEquals(this, seg.getStart(), Point3D<int>(0, 0, 1));
        assertEquals(this, seg.getEnd(), Point3D<int>(1, 1, 1));
    }
    
    TEST(Segment3D, GetVector) {
        Segment3D<int> seg(0, 0, 1, 1);
        assertEquals(this, seg.getVector(), Vector3D<int>(1, 1, 0));
        Segment3D<float> seg2(-1.5, 1.5, 3.5, 0);
        assertEquals(this, seg2.getVector(), Vector3D<float>(5, -1.5, 0));
    }
    
    TEST(Segment3D, Assign) {
        Segment3D<int> base(0, 0, 1, 1);
        Segment3D<int> seg(1, 1, 2, 2);
        assertEquals(this, seg.getStart(), Point3D<int>(1, 1, 1));
        assertEquals(this, seg.getEnd(), Point3D<int>(2, 2, 1));
        seg = base;
        assertEquals(this, seg.getStart(), Point3D<int>(0, 0, 1));
        assertEquals(this, seg.getEnd(), Point3D<int>(1, 1, 1));
    }

    TEST(Segment3D, AssignMove) {
        Segment3D<int> base(0, 0, 1, 1);
        Segment3D<int> seg(1, 1, 2, 2);
        assertEquals(this, seg.getStart(), Point3D<int>(1, 1, 1));
        assertEquals(this, seg.getEnd(), Point3D<int>(2, 2, 1));
        seg = std::move(base);
        assertEquals(this, seg.getStart(), Point3D<int>(0, 0, 1));
        assertEquals(this, seg.getEnd(), Point3D<int>(1, 1, 1));
    }
    
    TEST(Segment3D, Equal) {
        Segment3D<int> base(0, 0, 1, 1);
        Segment3D<int> seg(0, 0, 1, 1);
        
        assertEquals(this, base, seg);
        
        Segment3D<int> seg2(1, 1, 0, 0);
        assertEquals(this, seg2, seg);
    }

    TEST(Segment3D, EqualDifferent) {
        Segment3D<int> base(0, 0, 1, 1);
        Segment3D<float> seg(0, 0, 1, 1);

        assertTrue(this, base == seg);
    
        Segment3D<int> seg2(1, 1, 0, 0);
        assertTrue(this, seg2 == seg);
    }

    TEST(Segment3D, Different) {
        Segment3D<int> base(0, 0, 1, 1);
        Segment3D<int> seg(1, 1, 1, 1);
    
        assertNotEquals(this, base, seg);
    }

    TEST(Segment3D, DifferentDifferent) {
        Segment3D<int> base(0, 0, 1, 1);
        Segment3D<float> seg(0, 0, 1.1, 1.1);
    
        assertTrue(this, base != seg);
    
        Segment3D<int> seg2(1, 1.1, 0, 0);
        assertTrue(this, seg != seg2);
    }