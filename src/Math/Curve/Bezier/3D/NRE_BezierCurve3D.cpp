
    /**
     * @file NRE_BezierCurve3D.hpp
     * @brief Implementation of Math's API's Object : BezierCurve3D
     * @author Louis ABEL
     * @date 05/04/2019
     * @copyright CC-BY-NC-SA
     */

    #include "NRE_BezierCurve3D.hpp"

    namespace NRE {
        namespace Math {

            BezierCurve3D::BezierCurve3D(std::initializer_list<Point3D<float>> && points) : controls(std::move(points)) {
            }

            BezierCurve3D::BezierCurve3D(std::vector<Point3D<float>> && c) : controls(std::move(c)) {
            }

            std::string BezierCurve3D::toString() const {
                std::string res("Curve : \n");
                for (std::size_t i = 0; i < getSize(); i++) {
                    res += std::to_string(i);
                    res += " : ";
                    res += controls[i].toString();
                    res += "\n";
                }
                return res;
            }

            std::ostream& operator <<(std::ostream& stream, BezierCurve3D const& o) {
                return stream << o.toString();
            }

        }
    }
