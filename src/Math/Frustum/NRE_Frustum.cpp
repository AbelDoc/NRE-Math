
    /**
     * @file NRE_Frustum.hpp
     * @brief Implementation of Math's API's Object : Frustum
     * @author Louis ABEL
     * @date 05/04/2019
     * @copyright CC-BY-NC-SA
     */

    #include "NRE_Frustum.hpp"

    namespace NRE {
        namespace Math {

            Frustum::Frustum(Angle fieldOfView, float r, Vector2D<float> const& d) : dist(d), ratio(r), fov(fieldOfView) {
                computeNearAndFar();
            }

            void Frustum::computePlane(Point3D<float> const& eye, Vector3D<float> const& forward, Vector3D<float> const& left, Vector3D<float> const& up) {
                Point3D<float> fc, nc;
                Vector3D<float> a, normal;
                nc = eye + forward * dist.getX();
                fc = eye + forward * dist.getY();

                planes[NEAR].setNormalAndPoint(forward, nc);
                planes[FAR].setNormalAndPoint(-forward, fc);


                a = (nc + up * near.getY()) - eye;
                a.normalize();
                normal = a ^ left;
                planes[TOP].setNormalAndPoint(normal, nc + up * near.getY());

                a = (nc - up * near.getY()) - eye;
                a.normalize();
                normal = left ^ a;
                planes[BOTTOM].setNormalAndPoint(normal, nc - up * near.getY());

                a = (nc - left * near.getX()) - eye;
                a.normalize();
                normal = a ^ up;
                planes[LEFT].setNormalAndPoint(normal, nc - left * near.getX());

                a = (nc + left * near.getX()) - eye;
                a.normalize();
                normal = up ^ a;
                planes[RIGHT].setNormalAndPoint(normal, nc + left * near.getX());
            }

            void Frustum::computeProjectionMatrix(Matrix4x4<float>& m) {
                m.perspective(fov, ratio, dist);
            }

            void Frustum::resize(Vector2D<std::size_t> const& size, Point3D<float> const& eye, Vector3D<float> const& forward, Vector3D<float> const& left, Vector3D<float> const& up) {
                ratio = static_cast <float> (size.getW()) / static_cast <float> (size.getH());
                computeNearAndFar();
                computePlane(eye, forward, left, up);
            }

            std::string Frustum::toString() const {
                std::string res( "Top = ");
                res += planes[TOP].toString();
                res += "]\nBottom = ";
                res += planes[BOTTOM].toString();
                res += "]\nRight = ";
                res += planes[RIGHT].toString();
                res += "]\nLeft = ";
                res += planes[LEFT].toString();
                res += "]\nNear = ";
                res += planes[NEAR].toString();
                res += "]\nFar = ";
                res += planes[FAR].toString();
                res += "]\n[";
                res += near.toString();
                res += ",";
                res += far.toString();
                res += ",";
                res += dist.toString();
                res += ",";
                res += fov.toString();
                res += ",";
                res += std::to_string(ratio);
                res += "]";
                return res;
            }

            void Frustum::computeNearAndFar() {
                float tang = static_cast <float> (tan(fov * 0.5));

                near.setY(tang * dist.getX());
                near.setX(near.getY() * ratio);
                far.setY(tang * dist.getY());
                far.setX(far.getY() * ratio);
            }

            std::ostream& operator <<(std::ostream& stream, Frustum const& o) {
                return stream << o.toString();
            }

        }
    }
