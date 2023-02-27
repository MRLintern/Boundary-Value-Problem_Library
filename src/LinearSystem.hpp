/*
Linear system of algebraic equations can take the form:
a11*x1 + a12*x2 + ... + a1n*xn = b1
a21*x1 + a22*x2 + ... + a2n*xn = b2
 .                 .
 .                 .
 .                 .
am1*x1 + am2*x2 + ... + amn*xn = bm
This is general linear system of m equations with n unknowns and coefficients
amn are the coefficients, xn are the unknows/solutions to be found and bm are constants/known values
As a matrix equation, this system takes the form:
A*x = b
*/





//linear algebra system class

#pragma once

#include "Vector.hpp"
#include "Matrix.hpp"

class LinearSystem
{
private:
   int mSize; // size of linear system
   Matrix* mpA;  // matrix for linear system
   Vector* mpb;  // vector for linear system

   // Only allow constructor that specifies matrix and 
   // vector to be used.  Copy constructor is private.
   LinearSystem(const LinearSystem& otherLinearSystem){};
public:
   LinearSystem(const Matrix& A, const Vector& b);

   // destructor frees memory allocated
   ~LinearSystem();

   // Method for solving system
   virtual Vector Solve();
};

