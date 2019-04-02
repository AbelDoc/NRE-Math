
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
        Plane<float> plane({0, 1, 0}, {0, 0, 0});
        Plane<float> pPlane({100, 0, 100}, {110, 0, 0}, {0, 0, 110});

        std::cout << plane << std::endl;
        std::cout << pPlane << std::endl;
        std::cout << (pPlane == plane) << std::endl;

        return 0;
    }
