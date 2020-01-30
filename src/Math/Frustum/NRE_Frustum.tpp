
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
            
            inline Plane<float> const& Frustum::getPlane(std::size_t index) const {
                return planes[index];
            }

            inline void Frustum::setFov(Angle fieldOfView) {
                fov = fieldOfView;
                computeNearAndFar();
            }
    
            inline void Frustum::computePlane(Point3D<float> const& eye, Vector3D<float> const& forward, Vector3D<float> const& left, Vector3D<float> const& up) {
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

            inline void Frustum::computeProjectionMatrix(Matrix4x4<float>& m) {
                m.perspective(fov, ratio, dist);
            }

            inline void Frustum::resize(Vector2D<std::size_t> const& size, Point3D<float> const& eye, Vector3D<float> const& forward, Vector3D<float> const& left, Vector3D<float> const& up) {
                ratio = static_cast <float> (size.getW()) / static_cast <float> (size.getH());
                computeNearAndFar();
                computePlane(eye, forward, left, up);
            }

            inline void Frustum::computeNearAndFar() {
                float tang = static_cast <float> (tan(fov / 2.0));
                
                near.setH(2.0f * tang * dist.getX());
                near.setW(near.getY() * ratio);
                far.setH(2.0f  * tang * dist.getY());
                far.setW(far.getY() * ratio);
            }
    
            inline Utility::String Frustum::toString() const {
                Utility::String res( "Top = ");
                res.reserve(150);
                res << planes[TOP];
                res << "]\nBottom = ";
                res << planes[BOTTOM];
                res << "]\nRight = ";
                res << planes[RIGHT];
                res << "]\nLeft = ";
                res << planes[LEFT];
                res << "]\nNear = ";
                res << planes[NEAR];
                res << "]\nFar = ";
                res << planes[FAR];
                res << "]\n[";
                res << near;
                res << ',';
                res << far;
                res << ',';
                res << dist;
                res << ',';
                res << fov;
                res << ',';
                res << ratio;
                res << ']';
                return res;
            }

        }
    }
