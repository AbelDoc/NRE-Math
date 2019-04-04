
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
        Segment3D<float> seg(0, 0, 10, 0);

        std::cout << seg << std::endl;
        std::cout << seg.getVector() << std::endl;

        Matrix3x3<float> mat;
        mat.translate({10, 0});

        seg = mat * seg;

        std::cout << seg << std::endl;
        std::cout << seg.getVector() << std::endl;

        mat.setIdentity();
        mat.rotate(90_deg);

        seg = mat * seg;

        std::cout << seg << std::endl;
        std::cout << seg.getVector() << std::endl;

        return 0;
    }
