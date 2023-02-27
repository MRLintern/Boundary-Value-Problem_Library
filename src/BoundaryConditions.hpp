/*

Boundary conditions (BCs) class. Two types used here. 1) Dirichlet and 2) Neumann

1) Dirichlet: Dirichlet boundary conditions assume the solution to the variable
2) Neumann: Neumann boundary conditions, a solution is assumed for the derivative of the variable.

BC: both types are used on the left and right hand side of interval.

*/


#pragma once

class BoundaryConditions
{
public:

   // The boundary value class is able to
   // access the coefficients etc. of this equation
   friend class BvpOde;
   
private:

   //--Dirichlet BCs--//
   
   //LHS Dirichlert
   bool mLhsBcIsDirichlet;
   //RHS Dirichlet
   bool mRhsBcIsDirichlet;
   
   //--Neumann BCs--//
   
   //LHS Neumann
   bool mLhsBcIsNeumann;
   //RHS Neumann
   bool mRhsBcIsNeumann;
   
   //variables used to store values for BCs
   double mLhsBcValue;
   double mRhsBcValue;
   
public:
   
   //initialising 
   BoundaryConditions();
   
   //--set the BCs with values--//
   
   //Dirichlet
   void SetLhsDirichletBc(double lhsValue);
   void SetRhsDirichletBc(double rhsValue);
   
   //Neumann
   void SetLhsNeumannBc(double lhsDerivValue);
   void SetRhsNeumannBc(double rhsDerivValue);
};

