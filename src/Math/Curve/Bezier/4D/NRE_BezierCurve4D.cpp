
    /**
     * @file NRE_BezierCurve4D.hpp
     * @brief Implementation of Math's API's Object : BezierCurve4D
     * @author Louis ABEL
     * @date 05/04/2019
     * @copyright CC-BY-NC-SA
     */

    #include "NRE_BezierCurve4D.hpp"

    using namespace NRE::Utility;

    namespace NRE {
        namespace Math {

            BezierCurve4D::BezierCurve4D(std::initializer_list<Point4D<float>> points) : controls(points) {
            }

            BezierCurve4D::BezierCurve4D(Vector<Point4D<float>> && c) : controls(std::move(c)) {
            }

            String BezierCurve4D::toString() const {
                String res("Curve : \n");
                res.reserve(20 * getSize());
                for (std::size_t i = 0; i < getSize(); i++) {
                    res << i;
                    res << " : ";
                    res << controls[i];
                    res << '\n';
                }
                return res;
            }

            std::ostream& operator <<(std::ostream& stream, BezierCurve4D const& o) {
                return stream << o.toString();
            }

        }
    }
