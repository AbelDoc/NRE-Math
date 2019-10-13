
    /**
     * @file NRE_Segment4D.hpp
     * @brief Implementation of Math's API's Object : Segment4D
     * @author Louis ABEL
     * @date 04/04/2019
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace Math {
    
            template <class T>
            template <class K, class L>
            Segment4D<T>::Segment4D(Point4D<K> const& s, Point4D<L> const& e) : start(s), end(e) {
            }
    
            template <class T>
            template <class K, class L>
            Segment4D<T>::Segment4D(Point3D<K> const& s, Point3D<L> const& e) : start(Point4D<T>(s, 1)), end(Point4D<T>(e, 1)) {
            }

            template <class T>
            template <class K, class L, class N, class M, class O, class P>
            Segment4D<T>::Segment4D(K sX, L sY, N sZ, M eX, O eY, P eZ) : start(sX, sY, sZ, 1), end(eX, eY, eZ, 1) {
            }

            template <class T>
            Point4D<T> const& Segment4D<T>::getStart() const {
                return start;
            }

            template <class T>
            Point4D<T> const& Segment4D<T>::getEnd() const {
                return end;
            }

            template <class T>
            Vector4D<T> Segment4D<T>::getVector() const {
                return Vector4D<T>(end.getX() / end.getW() - start.getX() / start.getW(),
                                   end.getY() / end.getW() - start.getY() / start.getW(),
                                   end.getZ() / end.getW() - start.getZ() / start.getW(),
                                   0);
            }

            template <class T>
            template <class K>
            inline bool Segment4D<T>::operator ==(Segment4D<K> const& u) const {
                return (start == u.getStart() && end == u.getEnd())
                    || (start == u.getEnd()   && end == u.getStart());
            }

            template <class T>
            template <class K>
            inline bool Segment4D<T>::operator !=(Segment4D<K> const& u) const {
                return !(*this == u);
            }

            template <class T>
            Utility::String Segment4D<T>::toString() const {
                Utility::String res;
                res.reserve(20);
                res << start;
                res << " - ";
                res << end;
                return res;
            }

            template <class T>
            std::ostream& operator <<(std::ostream& stream, Segment4D<T> const& o) {
                return stream << o.toString();
            }

        }
    }
