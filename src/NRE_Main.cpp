
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
        float f = 0;
        for (int i = 0; i < 100; i++) {
            f += 0.01f;
        }

        int i = 1;

        std::cout << equal(i, f) << std::endl;

        return 0;
    }
