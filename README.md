## 1D Boundary Value Problem Library

An Object Oriented Designed Library to solve 1D Boundary Value Problems (BVP) called `bvplib.hpp`

The type of BVP is 1D and time independent.

The differential equation is discretized using a Finite Difference Method.
The resulting system of algebraic equations are solved via Gaussian elimination.

The typical form of a BVP:

    Au''(x) + Bu'(x) + Cu(x) = f(x), X_0 < x < X_1.

`A`, `B` and `C` are coefficients; specified by the user. 

`f(x)` is the source function.

`u''(x)` is the 2nd derivative w.r.t.x.

`u'(x)` is the 1st derivative w.r.t.x.

`u(x)` is the solution.

`X_0 < x < X_1` is the interval in which the differential equation is discretized.

Boundary conditions: `x = X_0` & `x = X_1`; specified by the user.

## Requirements

1. Compiler: `g++/gcc 9.4.0`
2. Tested on `Ubuntu 20.04`
3. Text editor: any will do; this project was developed using `Sublime Text`
4. For unit testing: [CxxTest](https://cxxtest.com/)
5. Build system: `CMake`

## Unit Testing

`CxxTest` is a unit testing framework which was used to test the `LinearSystems.hpp` class and the `BvpOde.hpp` class.

Instalation:

    $ sudo apt-get update -y
    $ sudo apt-get install -y cxxtest

## Example models

Two models are used.

Model 1:

    u''(x) = -1, 0 < x < 1,

with Dirichlet Conditions:

    u = 0 at x = 0 
    u = 0 at x = 1 

Model 2:

    u''(x) + 3*u'(x) - 4*u(x) = -34*sin*x, 0 < x < pi,

with Neumann conditions:

    u'(x) = -5, at x = 0
    u = 4, at x = pi

Two `.dat` files are generated, one each corresponding to one model problem. These can be used for plotting the solution.

## Instructions



NOTE:

The user has to specify the boundary/initial conditions for the problem. To do this go to `main/main.cpp`.
You'll see that these have already been applied for Model 1 and Model 2 listed above.

## Further Development

## TODO

Currently in development



