# NRE-Math
NRE-Math is the mathematical module used in NearlyRealEngine  
It regroup simple mathematical class and a generic implementation for international unit system.

## Features
- Header-only

- **Vector 2D, 3D, 4D** :  
    Vector regroup all methods to describe a cartesian 2D, 3D, 4D vector. 3D & 4D Vector represent 2D & 3D homogeneous Vector.  
    All bases operations are supported : +, -, \*, /, dot product (|), cross product (^), ==, !=, >, <, >=, <=  
    Normalisation, distance computation, individual elements access (getter or [ ]).

- **Point 2D, 3D, 4D** :  
    Simple aliases on Vector

- **Matrix 3x3, 4x4** :  
    Allow simple use to create transformation matrix.  
    All bases operations are supported : +, -, \*, /, ==, !=  
    Possible transformations :  
        * Translation  
        * Rotation  
        * Sheer  
        * Scale  
        * Squeeze  
        * Perspective  
        * Orthogonal    
    Transformations can be apply by multiplying the matrix with a supported object :  
        * Vector  
        * Point  
        * Plane  
        * Segment  
        * BezierCurve    

- **Segment 3D, 4D** :  
    Represent 2D & 3D homogeneous Segments

- **BezierCurve 3D, 4D** :  
    Represent 2D & 3D homogeneous Bezier Curves

- **Frustum** :  
    Represent a view frustum, used in collaboration with camera to set up a perspective camera

- **Plane** :  
    Represent a 3D plane, it's use 3D homogeneous coordinates to allow simple transformations with a matrix

- **Quaternion** :  
    Represent a simple quaternion, can be converted to a 4x4 matrix in order to represent a rotation matrix.

## Architecture

![UML](https://github.com/AbelDoc/NRE-Math/blob/master/uml/Math/NRE_Math.png)
