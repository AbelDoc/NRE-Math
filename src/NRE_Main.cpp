
    /**
     * @file NRE_Main.cpp
     * @brief Test of Math's API
     * @author Louis ABEL
     * @date 27/03/2019
     * @copyright CC-BY-NC-SA
     */

    #include "Header/NRE_Math.hpp"

    using namespace NRE::Math;

    int main(int, char**) {
        constexpr Vector2D<int> NULL_2(0, 0);
        constexpr Vector3D<int> NULL_3(0, 0, 0);
        constexpr Vector4D<int> NULL_4(0, 0, 0, 0);
        Vector4D<float> u({0, 1, 0, 0});
        Vector4D<float> v({1, 0, 0, 0});
        
        std::cout << u << std::endl;
        std::cout << v << std::endl;
    
        Vector4D<float> w(u ^ v);       // Cross product
    
        std::cout << w << std::endl;
        std::cout << (u | v) << std::endl;  // Dot product
    
        Segment4D<float> seg(Vector3D<float>(0, 0, 0), Vector3D<float>(0, 100, 0));
    
        std::cout << seg << std::endl;
    
        Matrix4x4<float> mat;
        mat.setIdentity();
        mat.rotate(90_deg, Vector3D<float>(1, 0, 0));  // Equivalent of mat.rotate(1_rad, {1, 0, 0});
    
        u = mat * u;
        v = mat * v;
        w = mat * w;
    
        std::cout << u << std::endl;
        std::cout << v << std::endl;
        std::cout << w << std::endl;
    
        seg = mat * seg;
    
        std::cout << seg << std::endl;
    
        Quaternion<float> quat(Vector3D<float>(1, 0, 0), 90_deg);      // Equivalent to previous matrix,
                                                        // if 4th parameter is not an Angle it only set parameters
    
        std::cout << quat << std::endl;
    
        Matrix4x4<float> quatToMat(quat);
    
        std::cout << quatToMat << std::endl;

        return 0;
    }
