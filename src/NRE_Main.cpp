
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
        Vector2D<float>     v1(1);
        Vector2D<float>     v2(2);
        Vector2D<int>       v3(3);
        Vector2D<short int> v4(4);
        Vector2D<long long int>  v5(5);

        v1 += v2;
        v1 += v3;

        v5 = v3 + v4;
        std::cout << v5 << std::endl;
        v4 = v3 + v5;
        std::cout << v4 << std::endl;

        std::cout << sizeof(short int) << std::endl;
        std::cout << sizeof(int) << std::endl;
        std::cout << sizeof(long long int) << std::endl;

        std::cout << sizeof(float) << std::endl;
        std::cout << sizeof(double) << std::endl;
        std::cout << sizeof(long double) << std::endl;

        auto v6 = v4 + Vector2D<long double>(1);
        std::cout << sizeof(v6) << std::endl;

        Vector2D<float> tmp = Vector2D<float>(1) + Vector2D<double>(2);
        std::cout << tmp << std::endl;

        auto d = v3 | v4;
        std::cout << d << std::endl;

        return 0;
    }
