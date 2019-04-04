
    /**
     * @file NRE_Plane.hpp
     * @brief Implmentation of Math's API's Object : Plane
     * @author Louis ABEL
     * @date 02/04/2019
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace Math {

            template <class T>
            inline Plane<T>::Plane() : point(0, 0, 0, 1) {
            }

            template <class T>
            inline Plane<T>::Plane(Vector4D<T> const& n, Point4D<T> const& p) : normal(n), point(p) {
            }

            template <class T>
            inline Plane<T>::Plane(Vector3D<T> const& n, Point3D<T> const& p) : normal({n, 0}), point({p, 1}) {
            }

            template <class T>
            Plane<T>::Plane(Point4D<T> const& p1, Point4D<T> const& p2, Point4D<T> const& p3) {
                computeNormalFrom3Point(p1, p2, p3);
            }

            template <class T>
            Plane<T>::Plane(Point3D<T> const& p1, Point3D<T> const& p2, Point3D<T> const& p3) : Plane(Point4D<T>(p1, 1), Point4D<T>(p2, 1), Point4D<T>(p3, 1)) {
            }

            template <class T>
            template <class K>
            Plane<T>::Plane(Plane<K> const& p) : normal(p.normal), point(p.point) {
            }

            template <class T>
            inline Vector4D<T> const& Plane<T>::getNormal() const {
                return normal;
            }

            template <class T>
            inline Point4D<T> const& Plane<T>::getPoint() const {
                return point;
            }

            template <class T>
            inline void Plane<T>::setNormal(Vector4D<T> const& n) {
                normal = n;
            }

            template <class T>
            inline void Plane<T>::setNormal(Vector3D<T> const& n) {
                normal = {n, 0};
            }

            template <class T>
            inline void Plane<T>::setPoint(Point4D<T> const& p) {
                point = p;
            }

            template <class T>
            inline void Plane<T>::setPoint(Point3D<T> const& p) {
                point = {p, 1};
            }

            template <class T>
            inline void Plane<T>::setNormalAndPoint(Vector4D<T> const& n, Point4D<T> const& p) {
                setNormal(n);
                setPoint(p);
            }

            template <class T>
            inline void Plane<T>::setNormalAndPoint(Vector3D<T> const& n, Point3D<T> const& p) {
                setNormal(n);
                setPoint(p);
            }

            template <class T>
            inline float Plane<T>::distance(Point4D<T> const& p) const {
                return (normal | p) + ((-normal) | point);
            }

            template <class T>
            inline float Plane<T>::distance(Point3D<T> const& p) const {
                return distance(Point4D<T>(p, 1));
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
            void Plane<T>::computeNormalFrom3Point(Point4D<T> const& p1, Point4D<T> const& p2, Point4D<T> const& p3) {
                Vector4D<T> u, v;
                u = p2 - p1;
                v = p3 - p1;
                setPoint(p1);
                setNormal(u ^ v);
                normal.normalize();
            }

            template <class T>
            std::ostream& operator <<(std::ostream& stream, Plane<T> const& o) {
                return stream << o.toString();
            }
        }
    }
