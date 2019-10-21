
    /**
     * @file NRE_Frustum.tpp
     * @brief Implementation of Math's API's Object : Frustum
     * @author Louis ABEL
     * @date 05/04/2019
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace Math {

            inline Frustum::Frustum(Angle fieldOfView, float r, Vector2D<float> const& d) : dist(d), ratio(r), fov(fieldOfView) {
                computeNearAndFar();
            }

            inline void Frustum::setFov(Angle fieldOfView) {
                fov = fieldOfView;
                computeNearAndFar();
            }

            inline void Frustum::computeProjectionMatrix(Matrix4x4<float>& m) {
                m.setIdentity();
                m.perspective(fov, ratio, dist);
            }

            inline void Frustum::resize(Vector2D<std::size_t> const& size, Point3D<float> const& eye, Vector3D<float> const& forward, Vector3D<float> const& left, Vector3D<float> const& up) {
                ratio = static_cast <float> (size.getW()) / static_cast <float> (size.getH());
                computeNearAndFar();
                computePlane(eye, forward, left, up);
            }

            inline void Frustum::computeNearAndFar() {
                float tang = static_cast <float> (tan(fov * 0.5));

                near.setY(tang * dist.getX());
                near.setX(near.getY() * ratio);
                far.setY(tang * dist.getY());
                far.setX(far.getY() * ratio);
            }

        }
    }
