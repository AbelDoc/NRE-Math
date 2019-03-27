
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
        Matrix2x2<float> mat;
        Matrix2x2<float> mat2(1, 2, 3, 4);

        std::cout << mat << std::endl;
        std::cout << mat2 << std::endl;

        mat = mat2;
        Matrix2x2<float> mat3(mat2);

        std::cout << mat << std::endl;
        std::cout << mat3 << std::endl;

        return 0;
    }
