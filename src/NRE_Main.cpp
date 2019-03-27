
    /**
     * @file NRE_Main.cpp
     * @brief Test of Math's API
     * @author Louis ABEL
     * @date 27/03/2019
     * @copyright GNU GPL v3
     */

    #include <string>
    #include <iostream>

    #include "Header/NRE_Math.hpp"

    using namespace NRE::Math;

    int main(int, char**) {
        Vector3D<float> vec;
        Vector3D<float> vec2(1, 2, 3);

        std::cout << vec << std::endl;
        std::cout << vec2 << std::endl;

        vec = vec2;
        Vector3D<float> vec3(vec2);

        std::cout << vec << std::endl;
        std::cout << vec3 << std::endl;

        return 0;
    }
