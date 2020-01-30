cmake_minimum_required(VERSION 3.15)
project(NRE_Math)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static -static-libgcc -static-libstdc++")
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pedantic -Wno-virtual-move-assign -Wall -Wextra -Wfatal-errors -Wfloat-equal -Wstrict-overflow -Wshadow -Wconversion -Wunreachable-code -Wuninitialized -Winit-self -Werror -fstrict-overflow -O3 -std=c++17")

include_directories(C:/Users/abell/Documents/GitHub/NRE-Utility/src)
include_directories(C:/Users/abell/Documents/GitHub/NRE-Tester/src)
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

set(COMPILE_LIST
        src/Header/NRE_Math.hpp
        src/Math/Curve/Bezier/3D/NRE_BezierCurve3D.tpp
        src/Math/Curve/Bezier/3D/NRE_BezierCurve3D.hpp
        src/Math/Curve/Bezier/4D/NRE_BezierCurve4D.tpp
        src/Math/Curve/Bezier/4D/NRE_BezierCurve4D.hpp
        src/Math/Frustum/NRE_Frustum.hpp
        src/Math/Frustum/NRE_Frustum.tpp
        src/Math/Matrix/3D/NRE_Matrix3x3.hpp
        src/Math/Matrix/3D/NRE_Matrix3x3.tpp
        src/Math/Matrix/4D/NRE_Matrix4x4.hpp
        src/Math/Matrix/4D/NRE_Matrix4x4.tpp
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
        src/Math/NRE_Unit.hpp)

set(EXEC_LIST
        ${COMPILE_LIST}
        src/NRE_Main.cpp)

set(TEST_LIST
        test/NRE_Main.cpp)

add_executable(NRE_Math ${EXEC_LIST})
add_executable(NRE_Math_Test ${TEST_LIST})

target_link_libraries(NRE_Math_Test "C:/lib/NRE/libNRE-Tester.a")