
    /**
     * @file NRE_BezierCurve3D.tpp
     * @brief Implementation of Math's API's Object : BezierCurve3D
     * @author Louis ABEL
     * @date 05/04/2019
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace Math {
    
            inline Utility::String BezierCurve3D::toString() const {
                Utility::String res("Curve : \n");
                res.reserve(15 * getSize());
                for (unsigned int i = 0; i < getSize(); i++) {
                    res << i;
                    res << " : ";
                    res << controls[i];
                    res << '\n';
                }
                return res;
            }

        }
    }
