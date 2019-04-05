
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
        BezierCurve3D bez1{{0, 0, 1} , {0, 10, 1}, {10, 0, 1}};
        Matrix3x3<float> mat;
        mat.rotate(90_deg);

        std::cout << bez1 << std::endl;
        bez1 = mat * bez1;

        std::cout << bez1 << std::endl;

        return 0;
    }
