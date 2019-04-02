
    /**
     * @file NRE_Plane.hpp
     * @brief Implmentation of Math's API's Object : Plane
     * @author Louis ABEL
     * @date 02/04/2019
     * @copyright GNU GPL v3
     */

    namespace NRE {
        namespace Math {

            template <class T>
            Plane<T>::Plane(Vector3D<T> const& n, Point3D<T> const& p) : normal(n), point(p) {
            }

            template <class T>
            Plane<T>::Plane(Point3D<T> const& p1, Point3D<T> const& p2, Point3D<T> const& p3) {
                computeNormalFrom3Point(p1, p2, p3);
            }

            template <class T>
            template <class K>
            Plane<T>::Plane(Plane<K> const& p) : normal(p.normal), point(p.point) {
            }

            template <class T>
            inline Vector3D<T> const& Plane<T>::getNormal() const {
                return normal;
            }

            template <class T>
            inline Point3D<T> const& Plane<T>::getPoint() const {
                return point;
            }

            template <class T>
            inline void Plane<T>::setNormal(Vector3D<T> const& n) {
                normal = n;
            }

            template <class T>
            inline void Plane<T>::setPoint(Point3D<T> const& p) {
                point = p;
            }

            template <class T>
            inline void Plane<T>::setNormalAndPoint(Vector3D<T> const& n, Point3D<T> const& p) {
                setNormal(n);
                setPoint(p);
            }

            template <class T>
            inline float Plane<T>::distance(Point3D<T> const& p) const {
                return (normal | point) + ((-normal) | p);
            }

            template <class T>
            template <class K>
            inline bool Plane<T>::operator ==(Plane<K> const& u) const {
                return normal == u.normal && almostEqual(distance(u.point), 0);
            }

            template <class T>
            template <class K>
            inline bool Plane<T>::operator !=(Plane<K> const& u) const {
                return !(*this == u);
            }

            template <class T>
            std::string Plane<T>::toString() const {
                std::string res("[");
                res += point.toString();
                res += ",";
                res += normal.toString();
                res += "]";
                return res;
            }

            template <class T>
            void Plane<T>::computeNormalFrom3Point(Point3D<T> const& p1, Point3D<T> const& p2, Point3D<T> const& p3) {
                Vector3D<T> v, u;
                v = p1 - p2;
                u = p1 - p3;
                setPoint(p1);
                setNormal(v ^ u);
                normal.normalize();
            }

            template <class T>
            std::ostream& operator <<(std::ostream& stream, Plane<T> const& o) {
                return stream << o.toString();
            }
        }
    }
