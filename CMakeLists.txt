cmake_minimum_required(VERSION 3.15)
project(NRE_Math)

set(CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pedantic -Wno-virtual-move-assign -Wall -Wextra -Wfatal-errors -Wfloat-equal -Wstrict-overflow -Wshadow -Wconversion -Wunreachable-code -Wuninitialized -Winit-self -Werror -fstrict-overflow")

include_directories(C:/Users/abell/Documents/GitHub/NRE-Utility/src)
include_directories(.)
include_directories(src)
include_directories(src/Header)
include_directories(src/Math)
include_directories(src/Math/Curve)
include_directories(src/Math/Curve/Bezier)
include_directories(src/Math/Curve/Bezier/3D)
include_directories(src/Math/Curve/Bezier/4D)
include_directories(src/Math/Frustum)
include_directories(src/Math/Matrix)
include_directories(src/Math/Matrix/3D)
include_directories(src/Math/Matrix/4D)
include_directories(src/Math/Plane)
include_directories(src/Math/Quaternion)
include_directories(src/Math/Segment)
include_directories(src/Math/Segment/3D)
include_directories(src/Math/Segment/4D)
include_directories(src/Math/Vector)
include_directories(src/Math/Vector/2D)
include_directories(src/Math/Vector/3D)
include_directories(src/Math/Vector/4D)

add_executable(NRE_Math
        src/Header/NRE_Math.hpp
        src/Math/Curve/Bezier/3D/NRE_BezierCurve3D.cpp
        src/Math/Curve/Bezier/3D/NRE_BezierCurve3D.hpp
        src/Math/Curve/Bezier/4D/NRE_BezierCurve4D.cpp
        src/Math/Curve/Bezier/4D/NRE_BezierCurve4D.hpp
        src/Math/Frustum/NRE_Frustum.cpp
        src/Math/Frustum/NRE_Frustum.hpp
        src/Math/Matrix/3D/NRE_Matrix3x3.hpp
        src/Math/Matrix/4D/NRE_Matrix4x4.hpp
        src/Math/Plane/NRE_Plane.hpp
        src/Math/Plane/NRE_Plane.tpp
        src/Math/Quaternion/NRE_Quaternion.hpp
        src/Math/Quaternion/NRE_Quaternion.tpp
        src/Math/Segment/3D/NRE_Segment3D.hpp
        src/Math/Segment/3D/NRE_Segment3D.tpp
        src/Math/Segment/4D/NRE_Segment4D.hpp
        src/Math/Segment/4D/NRE_Segment4D.tpp
        src/Math/Vector/2D/NRE_Vector2D.hpp
        src/Math/Vector/2D/NRE_Vector2D.tpp
        src/Math/Vector/3D/NRE_Vector3D.hpp
        src/Math/Vector/3D/NRE_Vector3D.tpp
        src/Math/Vector/4D/NRE_Vector4D.hpp
        src/Math/Vector/4D/NRE_Vector4D.tpp
        src/Math/NRE_Math.hpp
        src/Math/NRE_Unit.hpp
        src/NRE_Main.cpp)