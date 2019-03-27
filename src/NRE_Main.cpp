
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
        Matrix3x3<float> mat2(1, 2, 3, 4, 5, 6, 7, 8, 9);

        std::cout << mat << std::endl;
        std::cout << mat2 << std::endl;

        mat = mat2;
        Matrix3x3<float> mat3(mat2);

        std::cout << mat << std::endl;
        std::cout << mat3 << std::endl;

        return 0;
    }
