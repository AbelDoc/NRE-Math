
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
        Vector4D<float> vec1(1, 2, 3, 4);
        Vector4D<float> vec2(1, 2, 3, 4);

        Vector4D<float> vec3 = vec1 + vec2;
        vec1 += vec3;
        vec2 += vec3;
        vec3 += vec2 += vec1;
        vec3.normalize();

        return static_cast <int> (vec3.getX());
    }
