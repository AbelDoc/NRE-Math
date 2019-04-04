
    /**
     * @file NRE_Segment4D.hpp
     * @brief Implmentation of Math's API's Object : Segment4D
     * @author Louis ABEL
     * @date 04/04/2019
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace Math {

            template <class T>
            Segment4D<T>::Segment4D() : start(0, 0, 0, 1), end(0, 0, 0, 1) {
            }

            template <class T>
            Segment4D<T>::Segment4D(Point4D<T> const& s, Point4D<T> const& e) : start(s), end(e) {
            }

            template <class T>
            Segment4D<T>::Segment4D(Point3D<T> const& s, Point3D<T> const& e) : start(Point4D<T>(s, 1)), end(Point4D<T>(e, 1)) {
            }

            template <class T>
            Segment4D<T>::Segment4D(T sX, T sY, T sZ, T eX, T eY, T eZ) : start(sX, sY, sZ, 1), end(eX, eY, eZ, 1) {
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
                return end - start;
            }

            template <class T>
            template <class K>
            inline bool Segment4D<T>::operator ==(Segment4D<K> const& u) const {
                return start == u.start && end == u.end;
            }

            template <class T>
            template <class K>
            inline bool Segment4D<T>::operator !=(Segment4D<K> const& u) const {
                return !(*this == u);
            }

            template <class T>
            std::string Segment4D<T>::toString() const {
                std::string res(start.toString());
                res += " - ";
                res += end.toString();
                return res;
            }

            template <class T>
            std::ostream& operator <<(std::ostream& stream, Segment4D<T> const& o) {
                return stream << o.toString();
            }

        }
    }
