
    /**
     * @file NRE_BezierCurve4D.hpp
     * @brief Implementation of Math's API's Object : BezierCurve4D
     * @author Louis ABEL
     * @date 05/04/2019
     * @copyright CC-BY-NC-SA
     */

    #include "NRE_BezierCurve4D.hpp"

    namespace NRE {
        namespace Math {

            BezierCurve4D::BezierCurve4D(std::initializer_list<Point4D<float>> && points) : controls(std::move(points)) {
            }

            BezierCurve4D::BezierCurve4D(std::vector<Point4D<float>> && c) : controls(std::move(c)) {
            }

            std::string BezierCurve4D::toString() const {
                std::string res("Curve : \n");
                for (std::size_t i = 0; i < getSize(); i++) {
                    res += std::to_string(i);
                    res += " : ";
                    res += controls[i].toString();
                    res += "\n";
                }
                return res;
            }

            std::ostream& operator <<(std::ostream& stream, BezierCurve4D const& o) {
                return stream << o.toString();
            }

        }
    }
