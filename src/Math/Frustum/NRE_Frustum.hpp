
    /**
     * @file NRE_Frustum.hpp
     * @brief Declaration of Math's API's Object : Frustum
     * @author Louis ABEL
     * @date 05/04/2019
     * @copyright CC-BY-NC-SA
     */

    #pragma once


    #include <Core/Array/NRE_Array.hpp>
    #include <Core/Interfaces/Stringable/NRE_Stringable.hpp>
    #include "../NRE_Unit.hpp"
    #include "../Plane/NRE_Plane.hpp"
    #include "../Vector/2D/NRE_Vector2D.hpp"
    #include "../Vector/3D/NRE_Vector3D.hpp"
    #include "../Matrix/4D/NRE_Matrix4x4.hpp"

    /**
     * @namespace NRE
     * @brief The NearlyRealEngine's global namespace
     */
    namespace NRE {
        /**
         * @namespace Math
         * @brief Math's API
         */
        namespace Math {

            /**
             * @class Frustum
             * @brief A view frustum used with camera
             */
            class Frustum : public Core::Stringable<Frustum> {
                private:    //Fields
                    Core::Array<Plane<float>, 6> planes; /**< The frustum's planes */
                    Vector2D<float> near;                   /**< The near plane's width and height */
                    Vector2D<float> far;                    /**< The far plane's width and height */
                    Vector2D<float> dist;                   /**< The near and far clipping distance */
                    float ratio;                            /**< The frustum's ratio */
                    Angle fov;                              /**< The frustum's field of view */

                public:    // Methods
                    //## Constructor ##//
                        /**
                         * No default constructor
                         */
                        Frustum() = delete;
                        /**
                         * Construct a frustum with his fov, his ratio and the distance vector
                         * @param fieldOfView the frustum's fov
                         * @param r           the frustum's ratio
                         * @param d           the frustum's distance
                         */
                        Frustum(Angle fieldOfView, float r, Vector2D<float> const& d);

                    //## Copy-Constructor ##//
                        /**
                         * Copy f into this
                         * @param f the object to copy
                         */
                        Frustum(Frustum const& f) = default;

                    //## Move-Constructor ##//
                        /**
                         * Move f into this
                         * @param f the object to move
                         */
                        Frustum(Frustum && f) = default;

                    //## Deconstructor ##//
                        /**
                         * Frustum Deconstructor
                         */
                        ~Frustum() = default;
    
                    //## Getter ##//
                        /**
                         * Query a specific plane
                         * @param index the plane index
                         * @return      the corresponding plane
                         */
                        Plane<float> const& getPlane(std::size_t index) const;

                    //## Setter ##//
                        /**
                         * Set the frustum field of view
                         * @param fieldOfView the new fov
                         */
                        void setFov(Angle fieldOfView);

                    //## Methods ##//
                        /**
                         * Compute the frustum's planes according to the given vectors
                         * @param eye     the eye's position
                         * @param forward the forward vector
                         * @param left    the left vector
                         * @param up      the up vector
                         */
                        void computePlane(Point3D<float> const& eye, Vector3D<float> const& forward, Vector3D<float> const& left, Vector3D<float> const& up);
                        /**
                         * Perform a perspective projection on m
                         * @param m the matrix to transform
                         */
                        void computeProjectionMatrix(Matrix4x4<float>& m);
                        /**
                         * Resize the frustum according to the given vector
                         * @param size    the screen's size
                         * @param eye     the eye's position
                         * @param forward the forward vector
                         * @param left    the left vector
                         * @param up      the up vector
                         */
                        void resize(Vector2D<std::size_t> const& size, Point3D<float> const& eye, Vector3D<float> const& forward, Vector3D<float> const& left, Vector3D<float> const& up);

                    //## Assignment Operator ##//
                        /**
                         * Copy f into this
                         * @param f the object to copy into this
                         * @return  the reference of himself
                         */
                        Frustum& operator =(Frustum const& f) = default;
                        /**
                         * Move f into this
                         * @param f the object to move into this
                         * @return  the reference of himself
                         */
                        Frustum& operator =(Frustum && f) = default;

                    //## Stream Operator ##//
                        /**
                         * Convert the frustum into a string
                         * @return the converted frustum
                         */
                        Core::String toString() const;

                private:
                    /**
                     * Compute the near and far vector from the frustum members
                     */
                    void computeNearAndFar();
            };
        }
    }

    #include "NRE_Frustum.tpp"
