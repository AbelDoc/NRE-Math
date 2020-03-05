
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
            constexpr Plane<T>::Plane(Vector4D<K> const& n, Point4D<L> const& p) : normal(n), point(p / p.getW()) {
            }

            template <class T>
            template <class K, class L>
            constexpr Plane<T>::Plane(Vector3D<K> const& n, Point3D<L> const& p) : normal(n), point(p) {
            }

            template <class T>
            template <class K, class L, class N>
            inline Plane<T>::Plane(Point4D<K> const& p1, Point4D<L> const& p2, Point4D<N> const& p3) : Plane(Point3D<K>(p1 / p1.getW()), Point3D<L>(p2 / p2.getW()), Point3D<N>(p3 / p3.getW())) {
            }

            template <class T>
            template <class K, class L, class N>
            inline Plane<T>::Plane(Point3D<K> const& p1, Point3D<L> const& p2, Point3D<N> const& p3)  {
                computeNormalFrom3Points(p1, p2, p3);
            }

            template <class T>
            template <class K>
            constexpr Plane<T>::Plane(Plane<K> const& p) : normal(p.getNormal()), point(p.getPoint()) {
            }

            template <class T>
            constexpr Vector3D<T> const& Plane<T>::getNormal() const {
                return normal;
            }

            template <class T>
            constexpr Point3D<T> const& Plane<T>::getPoint() const {
                return point;
            }

            template <class T>
            template <class K>
            constexpr void Plane<T>::setNormal(Vector4D<K> const& n) {
                setNormal(Vector3D<K>(n));
            }

            template <class T>
            template <class K>
            constexpr void Plane<T>::setNormal(Vector3D<K> const& n) {
                normal = n;
            }

            template <class T>
            template <class K>
            constexpr void Plane<T>::setPoint(Point4D<K> const& p) {
                setPoint(Point3D<K>(p / p.getW()));
            }

            template <class T>
            template <class K>
            constexpr void Plane<T>::setPoint(Point3D<K> const& p) {
                point = p;
            }

            template <class T>
            template <class K, class L>
            constexpr void Plane<T>::setNormalAndPoint(Vector4D<K> const& n, Point4D<L> const& p) {
                setNormal(n);
                setPoint(p);
            }

            template <class T>
            template <class K, class L>
            constexpr void Plane<T>::setNormalAndPoint(Vector3D<K> const& n, Point3D<L> const& p) {
                setNormal(n);
                setPoint(p);
            }

            template <class T>
            template <class K>
            constexpr std::common_type_t<T, K> Plane<T>::distance(Point4D<K> const& p) const {
                return distance(Point3D<K>(p / p.getW()));
            }

            template <class T>
            template <class K>
            constexpr std::common_type_t<T, K> Plane<T>::distance(Point3D<K> const& p) const {
                return (normal | p) + static_cast <std::common_type_t<T, K>> ((-normal) | point);
            }
            
            template <class T>
            template <class K>
            constexpr Plane<T>& Plane<T>::operator=(Plane<K> const& p) {
                normal = p.getNormal();
                point = p.getPoint();
                return *this;
            }
    
            template <class T>
            template <class K>
            constexpr Plane<T>& Plane<T>::operator=(Plane<K> && p) {
                normal = p.getNormal();
                point = p.getPoint();
                return *this;
            }

            template <class T>
            template <class K>
            constexpr bool Plane<T>::operator ==(Plane<K> const& u) const {
                return normal == u.normal && equal(distance(u.point), 0);
            }

            template <class T>
            template <class K>
            constexpr bool Plane<T>::operator !=(Plane<K> const& u) const {
                return !(*this == u);
            }

            template <class T>
            inline Utility::String Plane<T>::toString() const {
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
            inline void Plane<T>::computeNormalFrom3Points(Point3D<K> const& p1, Point3D<L> const& p2, Point3D<N> const& p3) {
                auto u = p2 - p1;
                auto v = p3 - p1;
                setPoint(p1);
                setNormal(u ^ v);
                normal.normalize();
            }
        }
    }
