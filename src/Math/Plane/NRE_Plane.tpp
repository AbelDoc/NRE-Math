
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
            template <class K, class L>
            inline Plane<T>::Plane(Vector4D<K> const& n, Point4D<L> const& p) : normal(n), point(p) {
            }

            template <class T>
            template <class K, class L>
            inline Plane<T>::Plane(Vector3D<K> const& n, Point3D<L> const& p) : normal({n, 0}), point({p, 1}) {
            }

            template <class T>
            template <class K, class L, class N>
            Plane<T>::Plane(Point4D<K> const& p1, Point4D<L> const& p2, Point4D<N> const& p3) {
                computeNormalFrom3Point(p1, p2, p3);
            }

            template <class T>
            template <class K, class L, class N>
            Plane<T>::Plane(Point3D<K> const& p1, Point3D<L> const& p2, Point3D<N> const& p3) : Plane(Point4D<T>(p1, 1), Point4D<T>(p2, 1), Point4D<T>(p3, 1)) {
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
            template <class K>
            inline void Plane<T>::setNormal(Vector4D<K> const& n) {
                normal = n;
            }

            template <class T>
            template <class K>
            inline void Plane<T>::setNormal(Vector3D<K> const& n) {
                normal = {n, 0};
            }

            template <class T>
            template <class K>
            inline void Plane<T>::setPoint(Point4D<K> const& p) {
                point = p;
            }

            template <class T>
            template <class K>
            inline void Plane<T>::setPoint(Point3D<K> const& p) {
                point = {p, 1};
            }

            template <class T>
            template <class K, class L>
            inline void Plane<T>::setNormalAndPoint(Vector4D<K> const& n, Point4D<L> const& p) {
                setNormal(n);
                setPoint(p);
            }

            template <class T>
            template <class K, class L>
            inline void Plane<T>::setNormalAndPoint(Vector3D<K> const& n, Point3D<L> const& p) {
                setNormal(n);
                setPoint(p);
            }

            template <class T>
            template <class K>
            inline std::common_type_t<T, K> Plane<T>::distance(Point4D<K> const& p) const {
                return (normal | p) + ((-normal) | point);
            }

            template <class T>
            template <class K>
            inline std::common_type_t<T, K> Plane<T>::distance(Point3D<K> const& p) const {
                return distance(Point4D<T>(p, 1));
            }
            
            template <class T>
            template <class K>
            inline Plane<T>& Plane<T>::operator=(Plane<K> const& p) {
                normal = p.normal;
                point = p.point;
                return *this;
            }
    
            template <class T>
            template <class K>
            inline Plane<T>& Plane<T>::operator=(Plane<K> && p) {
                normal = p.normal;
                point = p.point;
                return *this;
            }

            template <class T>
            template <class K>
            inline bool Plane<T>::operator ==(Plane<K> const& u) const {
                return normal == u.normal && equal(distance(u.point), 0);
            }

            template <class T>
            template <class K>
            inline bool Plane<T>::operator !=(Plane<K> const& u) const {
                return !(*this == u);
            }

            template <class T>
            Utility::String Plane<T>::toString() const {
                Utility::String res;
                res.reserve(30);
                res << '[';
                res << point;
                res << ',';
                res << normal;
                res << ']';
                return res;
            }

            template <class T>
            template <class K, class L, class N>
            void Plane<T>::computeNormalFrom3Point(Point4D<K> const& p1, Point4D<L> const& p2, Point4D<N> const& p3) {
                auto u = p2 - p1;
                auto v = p3 - p1;
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
