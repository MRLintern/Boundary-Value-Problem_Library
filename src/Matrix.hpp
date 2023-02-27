/*

Matrix class

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

Here, we want to find the vector x. A is the matrix of coefficients and b is the solution vector

*/

#pragma once

#include "Vector.hpp"

class Matrix
{
private:
   
   double** mData; // entries of matrix
   int mNumRows, mNumCols; // dimensions
   
public:
   //constructor initialise
   Matrix(const Matrix& otherMatrix);
   
   //number of rows and colums for the matrix constructor
   Matrix(int numRows, int numCols);
   //release memory
   ~Matrix();
   
   //get the number of rows and colums of matrix
   int GetNumberOfRows() const;
   int GetNumberOfColumns() const;
   
   double& operator()(int i, int j); //1-based indexing
   
   //overloaded assignment operator
   Matrix& operator=(const Matrix& otherMatrix);
   Matrix operator+() const; // unary +
   Matrix operator-() const; // unary -
   Matrix operator+(const Matrix& m1) const; // binary +
   Matrix operator-(const Matrix& m1) const; // binary -
   
   // scalar multiplication
   Matrix operator*(double a) const;
   double CalculateDeterminant() const;
   // declare vector multiplication friendship
   friend Vector operator*(const Matrix& m, const Vector& v);
   friend Vector operator*(const Vector& v, const Matrix& m);
   
};

//prototype signatures for friend operators
Vector operator*(const Matrix& m, const Vector& v);
Vector operator*(const Vector& v, const Matrix& m);


