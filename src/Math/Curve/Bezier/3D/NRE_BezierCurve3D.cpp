
    /**
     * @file NRE_BezierCurve3D.hpp
     * @brief Implementation of Math's API's Object : BezierCurve3D
     * @author Louis ABEL
     * @date 05/04/2019
     * @copyright CC-BY-NC-SA
     */

    #include "NRE_BezierCurve3D.hpp"

    using namespace NRE::Utility;

    namespace NRE {
        namespace Math {

            String BezierCurve3D::toString() const {
                String res("Curve : \n");
                res.reserve(15 * getSize());
                for (std::size_t i = 0; i < getSize(); i++) {
                    res << i;
                    res << " : ";
                    res << controls[i];
                    res << '\n';
                }
                return res;
            }

            std::ostream& operator <<(std::ostream& stream, BezierCurve3D const& o) {
                return stream << o.toString();
            }

        }
    }
