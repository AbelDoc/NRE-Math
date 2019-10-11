    
    /**
     * @file NRE_Quaternion.cpp
     * @brief Test of Math's API's Object : Quaternion
     * @author Louis ABEL
     * @date 11/10/2019
     * @copyright CC-BY-NC-SA
     */
    
    #include "../../../src/Header/NRE_Math.hpp"
    #include <Header/NRE_Tester.hpp>
    
    using namespace NRE::Math;
    using namespace NRE::Tester;

    TEST(Quaternion, CtrSeparate) {
        Quaternion<float> quat(0, 0, 0, 1);
        assertTrue(this, equal(quat.getX(), 0));
        assertTrue(this, equal(quat.getY(), 0));
        assertTrue(this, equal(quat.getZ(), 0));
        assertTrue(this, equal(quat.getW(), 1));
    }

    TEST(Quaternion, CtrSeparateAngle) {
        Quaternion<float> quat(1, 0, 0, 180_deg);
        assertTrue(this, equal(quat.getX(), 1));
        assertTrue(this, equal(quat.getY(), 0));
        assertTrue(this, equal(quat.getZ(), 0));
        assertTrue(this, equal(quat.getW(), 0));
    }
    
    TEST(Quaternion, CtrVec) {
        Quaternion<float> quat(Vector3D<int>(0, 0, 0), 1);
        assertTrue(this, equal(quat.getX(), 0));
        assertTrue(this, equal(quat.getY(), 0));
        assertTrue(this, equal(quat.getZ(), 0));
        assertTrue(this, equal(quat.getW(), 1));
    }

    TEST(Quaternion, CtrVecAngle) {
        Quaternion<float> quat(Vector3D<int>(1, 0, 0), 180_deg);
        assertTrue(this, equal(quat.getX(), 1));
        assertTrue(this, equal(quat.getY(), 0));
        assertTrue(this, equal(quat.getZ(), 0));
        assertTrue(this, equal(quat.getW(), 0));
    }
    
    TEST(Quaternion, CtrCopy) {
        Quaternion<float> quat(Vector3D<int>(1, 0, 0), 180_deg);
        Quaternion<float> q(quat);
        assertTrue(this, equal(q.getX(), 1));
        assertTrue(this, equal(q.getY(), 0));
        assertTrue(this, equal(q.getZ(), 0));
        assertTrue(this, equal(q.getW(), 0));
    }

    TEST(Quaternion, CtrMove) {
        Quaternion<float> quat(Vector3D<int>(1, 0, 0), 180_deg);
        Quaternion<float> q(std::move(quat));
        assertTrue(this, equal(q.getX(), 1));
        assertTrue(this, equal(q.getY(), 0));
        assertTrue(this, equal(q.getZ(), 0));
        assertTrue(this, equal(q.getW(), 0));
    }
    
    TEST(Quaternion, Convertor) {
        Quaternion<float> quat(Vector3D<int>(1, 0, 0), 180_deg);
        Quaternion<int> q(quat);
        assertEquals(this, q.getX(), 1);
        assertEquals(this, q.getY(), 0);
        assertEquals(this, q.getZ(), 0);
        assertEquals(this, q.getW(), 0);
    }
    
    TEST(Quaternion, Get) {
        Quaternion<float> quat(1, 2, 3, 4);
        assertTrue(this, equal(quat.getX(), 1));
        assertTrue(this, equal(quat.getY(), 2));
        assertTrue(this, equal(quat.getZ(), 3));
        assertTrue(this, equal(quat.getW(), 4));
    }
    
    TEST(Quaternion, GetAxis) {
        Quaternion<float> quat(1, 2, 3, 4);
        assertEquals(this, quat.getAxis(), Vector3D<float>(1, 2, 3));
    }

    TEST(Quaternion, GetQuaternion) {
        Quaternion<float> quat(1, 2, 3, 4);
        assertEquals(this, quat.getQuaternion(), Vector4D<float>(1, 2, 3, 4));
    }
    
    TEST(Quaternion, Set) {
        Quaternion<float> quat(1, 2, 3, 4);
        assertTrue(this, equal(quat.getX(), 1));
        assertTrue(this, equal(quat.getY(), 2));
        assertTrue(this, equal(quat.getZ(), 3));
        assertTrue(this, equal(quat.getW(), 4));
        quat.setX(10.0f);
        quat.setY(20.0f);
        quat.setZ(30.0f);
        quat.setW(40.0f);
        assertTrue(this, equal(quat.getX(), 10));
        assertTrue(this, equal(quat.getY(), 20));
        assertTrue(this, equal(quat.getZ(), 30));
        assertTrue(this, equal(quat.getW(), 40));
    }
    
    TEST(Quaternion, SetDifferent) {
        Quaternion<float> quat(1, 2, 3, 4);
        assertTrue(this, equal(quat.getX(), 1));
        assertTrue(this, equal(quat.getY(), 2));
        assertTrue(this, equal(quat.getZ(), 3));
        assertTrue(this, equal(quat.getW(), 4));
        quat.setX(10.00001);
        quat.setY(20.5f);
        quat.setZ(30u);
        quat.setW(40);
        assertTrue(this, equal(quat.getX(), 10.00001));
        assertTrue(this, equal(quat.getY(), 20.5));
        assertTrue(this, equal(quat.getZ(), 30));
        assertTrue(this, equal(quat.getW(), 40));
    }
    
    TEST(Quaternion, SetAngleAxis) {
        Quaternion<float> quat(1, 2, 3, 4);
        assertTrue(this, equal(quat.getX(), 1));
        assertTrue(this, equal(quat.getY(), 2));
        assertTrue(this, equal(quat.getZ(), 3));
        assertTrue(this, equal(quat.getW(), 4));
        quat.setAngleAxis(Vector3D<float>(1, 0, 0), 180_deg);
        assertTrue(this, equal(quat.getX(), 1));
        assertTrue(this, equal(quat.getY(), 0));
        assertTrue(this, equal(quat.getZ(), 0));
        assertTrue(this, equal(quat.getW(), 0));
    }
    
    TEST(Quaternion, SetIdentity) {
        Quaternion<float> quat(1, 2, 3, 4);
        assertTrue(this, equal(quat.getX(), 1));
        assertTrue(this, equal(quat.getY(), 2));
        assertTrue(this, equal(quat.getZ(), 3));
        assertTrue(this, equal(quat.getW(), 4));
        quat.setIdentity();
        assertTrue(this, equal(quat.getX(), 0));
        assertTrue(this, equal(quat.getY(), 0));
        assertTrue(this, equal(quat.getZ(), 0));
        assertTrue(this, equal(quat.getW(), 1));
    }
    
    TEST(Quaternion, Norm) {
        Quaternion<float> quat(Vector3D<int>(1, 0, 0), 180_deg);
        assertTrue(this, equal(quat.norm(), 1));
    }

    TEST(Quaternion, NormSquared) {
        Quaternion<float> quat(Vector3D<int>(1, 0, 0), 180_deg);
        assertTrue(this, equal(quat.normSquared(), 1));
    }
    
    TEST(Quaternion, Normalize) {
        Quaternion<float> quat(Vector3D<int>(10, 0, 0), 180_deg);
        assertTrue(this, equal(quat.getX(), 10));
        assertTrue(this, equal(quat.getY(), 0));
        assertTrue(this, equal(quat.getZ(), 0));
        assertTrue(this, equal(quat.getW(), 0));
        quat.normalize();
        assertTrue(this, equal(quat.getX(), 1));
        assertTrue(this, equal(quat.getY(), 0));
        assertTrue(this, equal(quat.getZ(), 0));
        assertTrue(this, equal(quat.getW(), 0));
    }
    
    TEST(Quaternion, Value) {
        Quaternion<float> quat(Vector3D<int>(1, 0, 0), 180_deg);
        assertTrue(this, equal(*quat.value(), 1));
    }
    
    TEST(Quaternion, Assign) {
        Quaternion<float> quat(Vector3D<int>(1, 0, 0), 180_deg);
        Quaternion<float> q(1, 2, 3, 4);
        q = quat;
        assertTrue(this, equal(q.getX(), 1));
        assertTrue(this, equal(q.getY(), 0));
        assertTrue(this, equal(q.getZ(), 0));
        assertTrue(this, equal(q.getW(), 0));
    }

    TEST(Quaternion, AssignMove) {
        Quaternion<float> quat(Vector3D<int>(1, 0, 0), 180_deg);
        Quaternion<float> q(1, 2, 3, 4);
        q = std::move(quat);
        assertTrue(this, equal(q.getX(), 1));
        assertTrue(this, equal(q.getY(), 0));
        assertTrue(this, equal(q.getZ(), 0));
        assertTrue(this, equal(q.getW(), 0));
    }

    TEST(Quaternion, AssignDifferent) {
        Quaternion<float> quat(Vector3D<int>(1, 0, 0), 180_deg);
        Quaternion<int> q(1, 2, 3, 4);
        q = quat;
        assertTrue(this, equal(q.getX(), 1));
        assertTrue(this, equal(q.getY(), 0));
        assertTrue(this, equal(q.getZ(), 0));
        assertTrue(this, equal(q.getW(), 0));
    }

    TEST(Quaternion, AssignMoveDifferent) {
        Quaternion<float> quat(Vector3D<int>(1, 0, 0), 180_deg);
        Quaternion<int> q(1, 2, 3, 4);
        q = std::move(quat);
        assertTrue(this, equal(q.getX(), 1));
        assertTrue(this, equal(q.getY(), 0));
        assertTrue(this, equal(q.getZ(), 0));
        assertTrue(this, equal(q.getW(), 0));
    }
    
    TEST(Quaternion, SelfMult) {
        Quaternion<float> quat1(Vector3D<int>(1, 0, 0), 180_deg);
        Quaternion<float> quat2(Vector3D<int>(0, 0, 1), 180_deg);
        quat1 *= quat2;
        assertEquals(this, quat1.getQuaternion(), Vector4D<float>(0, 1, 0, 0));
    }
    
    TEST(Quaternion, Mult) {
        Quaternion<float> quat1(Vector3D<int>(1, 0, 0), 180_deg);
        Quaternion<float> quat2(Vector3D<int>(0, 0, 1), 180_deg);
        Quaternion<float> res = quat1 * quat2;
        assertEquals(this, res.getQuaternion(), Vector4D<float>(0, 1, 0, 0));
    }
    
    TEST(Quaternion, MultDifferent) {
        Quaternion<float> quat1(Vector3D<int>(1, 0, 0), 180_deg);
        Quaternion<int> quat2(Vector3D<int>(0, 0, 1), 180_deg);
        auto res = quat1 * quat2;
        assertTrue(this, std::is_same<decltype(res), Quaternion<float>>::value);
        assertEquals(this, res.getQuaternion(), Vector4D<float>(0, 1, 0, 0));
    }