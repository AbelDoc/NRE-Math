    
    /**
     * @file NRE_Segment4D.cpp
     * @brief Test of Math's API's Object : Segment4D
     * @author Louis ABEL
     * @date 10/10/2019
     * @copyright CC-BY-NC-SA
     */
    
    #include "../../../src/Header/NRE_Math.hpp"
    #include <Header/NRE_Tester.hpp>
    
    using namespace NRE::Math;
    using namespace NRE::Tester;

    TEST(Segment4D, Ctr4D) {
        Segment4D<int> seg(Point4D<int>(0, 0, 0, 1), Point4D<int>(1, 1, 1, 1));
        assertEquals(this, seg.getStart(), Point4D<int>(0, 0, 0, 1));
        assertEquals(this, seg.getEnd(), Point4D<int>(1, 1, 1, 1));
    }
    
    TEST(Segment4D, Ctr3D) {
        Segment4D<int> seg(Point3D<int>(0, 0, 0), Point3D<int>(1, 1, 1));
        assertEquals(this, seg.getStart(), Point4D<int>(0, 0, 0, 1));
        assertEquals(this, seg.getEnd(), Point4D<int>(1, 1, 1, 1));
    }
    
    TEST(Segment4D, Ctr3DDifferent) {
        Segment4D<int> seg(Point3D<float>(0.5, 0, 0.5), Point3D<double>(1.5, 1.5, 1.5));
        assertEquals(this, seg.getStart(), Point4D<int>(0, 0, 0, 1));
        assertEquals(this, seg.getEnd(), Point4D<int>(1, 1, 1, 1));
    }
    
    TEST(Segment4D, CtrSeparate) {
        Segment4D<int> seg(0, 0, 0, 1, 1, 1);
        assertEquals(this, seg.getStart(), Point4D<int>(0, 0, 0, 1));
        assertEquals(this, seg.getEnd(), Point4D<int>(1, 1, 1, 1));
    }
    
    TEST(Segment4D, CtrSeparateDifferent) {
        Segment4D<int> seg(0.5, 0.25, 0.00000000001, 1u, 1.1f, 1UL);
        assertEquals(this, seg.getStart(), Point4D<int>(0, 0, 0, 1));
        assertEquals(this, seg.getEnd(), Point4D<int>(1, 1, 1, 1));
    }
    
    TEST(Segment4D, CtrCopy) {
        Segment4D<int> base(0, 0, 0, 1, 1, 1);
        Segment4D<int> seg(base);
        assertEquals(this, seg.getStart(), Point4D<int>(0, 0, 0, 1));
        assertEquals(this, seg.getEnd(), Point4D<int>(1, 1, 1, 1));
    }
    
    TEST(Segment4D, CtrMove) {
        Segment4D<int> base(0, 0, 0, 1, 1, 1);
        Segment4D<int> seg(std::move(base));
        assertEquals(this, seg.getStart(), Point4D<int>(0, 0, 0, 1));
        assertEquals(this, seg.getEnd(), Point4D<int>(1, 1, 1, 1));
    }
    
    TEST(Segment4D, Get) {
        Segment4D<int> seg(0, 0, 0, 1, 1, 1);
        assertEquals(this, seg.getStart(), Point4D<int>(0, 0, 0, 1));
        assertEquals(this, seg.getEnd(), Point4D<int>(1, 1, 1, 1));
    }
    
    TEST(Segment4D, GetVector) {
        Segment4D<int> seg(0, 0, 0, 1, 1, 1);
        assertEquals(this, seg.getVector(), Vector4D<int>(1, 1, 1, 0));
        Segment4D<float> seg2(-1.5, 1.5, 1.5, 3.5, 0, 2.5);
        assertEquals(this, seg2.getVector(), Vector4D<float>(5, -1.5, 1, 0));
    }
    
    TEST(Segment4D, Assign) {
        Segment4D<int> base(0, 0, 0, 1, 1, 1);
        Segment4D<int> seg(1, 1, 1, 2, 2, 2);
        assertEquals(this, seg.getStart(), Point4D<int>(1, 1, 1, 1));
        assertEquals(this, seg.getEnd(), Point4D<int>(2, 2, 2, 1));
        seg = base;
        assertEquals(this, seg.getStart(), Point4D<int>(0, 0, 0, 1));
        assertEquals(this, seg.getEnd(), Point4D<int>(1, 1, 1, 1));
    }
    
    TEST(Segment4D, AssignMove) {
        Segment4D<int> base(0, 0, 0, 1, 1, 1);
        Segment4D<int> seg(1, 1, 1, 2, 2, 2);
        assertEquals(this, seg.getStart(), Point4D<int>(1, 1, 1, 1));
        assertEquals(this, seg.getEnd(), Point4D<int>(2, 2, 2, 1));
        seg = std::move(base);
        assertEquals(this, seg.getStart(), Point4D<int>(0, 0, 0, 1));
        assertEquals(this, seg.getEnd(), Point4D<int>(1, 1, 1, 1));
    }
    
    TEST(Segment4D, Equal) {
        Segment4D<int> base(0, 0, 0, 1, 1, 1);
        Segment4D<int> seg(0, 0, 0, 1, 1, 1);
        
        assertEquals(this, base, seg);
        
        Segment4D<int> seg2(1, 1, 1, 0, 0, 0);
        assertEquals(this, seg2, seg);
    }
    
    TEST(Segment4D, EqualDifferent) {
        Segment4D<int> base(0, 0, 0, 1, 1, 1);
        Segment4D<float> seg(0, 0, 0, 1, 1, 1);
        
        assertTrue(this, base == seg);
        
        Segment4D<int> seg2(1, 1, 1, 0, 0, 0);
        assertTrue(this, seg2 == seg);
    }
    
    TEST(Segment4D, Different) {
        Segment4D<int> base(0, 0, 0, 1, 1, 1);
        Segment4D<int> seg(1, 1, 1, 1, 1, 1);
        
        assertNotEquals(this, base, seg);
    }
    
    TEST(Segment4D, DifferentDifferent) {
        Segment4D<int> base(0, 0, 0, 1, 1, 1);
        Segment4D<float> seg(0, 0, 0, 1.1, 1.1, 1.1);
        
        assertTrue(this, base != seg);
        
        Segment4D<int> seg2(1, 1.1, 1.1, 0, 0, 0);
        assertTrue(this, seg != seg2);
    }