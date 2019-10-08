
    /**
     * @file NRE_Segment3D.hpp
     * @brief Implmentation of Math's API's Object : Segment3D
     * @author Louis ABEL
     * @date 04/04/2019
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace Math {

            template <class T>
            Segment3D<T>::Segment3D() : start(0, 0, 1), end(0, 0, 1) {
            }

            template <class T>
            template <class K, class L>
            Segment3D<T>::Segment3D(Point3D<K> const& s, Point3D<L> const& e) : start(s), end(e) {
            }

            template <class T>
            template <class K, class L>
            Segment3D<T>::Segment3D(Point2D<K> const& s, Point2D<L> const& e) : start(Point3D<T>(s, 1)), end(Point3D<T>(e, 1)) {
            }

            template <class T>
            template <class K, class L, class N, class M>
            Segment3D<T>::Segment3D(K sX, L sY, N eX, M eY) : start(sX, sY, 1), end(eX, eY, 1) {
            }

            template <class T>
            Point3D<T> const& Segment3D<T>::getStart() const {
                return start;
            }

            template <class T>
            Point3D<T> const& Segment3D<T>::getEnd() const {
                return end;
            }

            template <class T>
            Vector3D<T> Segment3D<T>::getVector() const {
                return end - start;
            }

            template <class T>
            template <class K>
            inline bool Segment3D<T>::operator ==(Segment3D<K> const& u) const {
                return start == u.start && end == u.end;
            }

            template <class T>
            template <class K>
            inline bool Segment3D<T>::operator !=(Segment3D<K> const& u) const {
                return !(*this == u);
            }

            template <class T>
            Utility::String Segment3D<T>::toString() const {
                Utility::String res;
                res.reserve(30);
                res << start;
                res << " - ";
                res << end;
                return res;
            }

            template <class T>
            std::ostream& operator <<(std::ostream& stream, Segment3D<T> const& o) {
                return stream << o.toString();
            }

        }
    }
