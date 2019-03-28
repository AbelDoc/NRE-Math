
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
        Matrix3x3<float> mat;
        Vector3D<float> vec(0, 0, 1);

        std::cout << mat << "\n\n";
        std::cout << vec << "\n\n";

        mat.translate({10, 0});

        vec = mat * vec;

        std::cout << mat << "\n\n";
        std::cout << vec << "\n\n";

        mat.setIdentity();
        mat.scale({10, 10});
        mat.translate({10, 0});
        mat.rotate(90_deg);

        vec = mat * vec;

        std::cout << mat << "\n\n";
        std::cout << vec << "\n\n";

        return 0;
    }
