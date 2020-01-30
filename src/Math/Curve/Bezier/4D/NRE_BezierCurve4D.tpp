
    /**
     * @file NRE_BezierCurve4D.tpp
     * @brief Implementation of Math's API's Object : BezierCurve4D
     * @author Louis ABEL
     * @date 05/04/2019
     * @copyright CC-BY-NC-SA
     */


    namespace NRE {
        namespace Math {

            inline Utility::String BezierCurve4D::toString() const {
                Utility::String res("Curve : \n");
                res.reserve(20 * getSize());
                for (std::size_t i = 0; i < getSize(); i++) {
                    res << i;
                    res << " : ";
                    res << controls[i];
                    res << '\n';
                }
                return res;
            }
        }
    }
