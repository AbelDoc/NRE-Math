
    /**
     * @file NRE_Main.cpp
     * @brief Test of Math's API
     * @author Louis ABEL
     * @date 27/03/2019
     * @copyright CC-BY-NC-SA
     */

    #include <string>
    #include <iostream>

    #include "Header/NRE_Math.hpp"

    using namespace NRE::Math;

    int main(int, char**) {
        Frustum frustum(70_deg, 1600.0f / 900.0f, {0.1f, 100.0f});
        frustum.computePlane({0, 0, 0}, {0, 0, 1}, {1, 0, 0}, {0, 1, 0});

        std::cout << frustum << std::endl;

        Frustum frustum2(70_deg, 1600.0f / 900.0f, {0.1f, 100.0f});

        std::cout << frustum2 << std::endl;
        frustum2 = frustum;
        std::cout << frustum2 << std::endl;

        return 0;
    }
