
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
        Vector2D<float> vec;
        Vector2D<float> vec2(1, 2);

        std::cout << vec << std::endl;
        std::cout << vec2 << std::endl;

        vec = vec2;
        Vector2D<float> vec3(vec2);

        std::cout << vec << std::endl;
        std::cout << vec3 << std::endl;

        return 0;
    }
