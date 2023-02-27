/*

Initialise BCs 

Note: if using Dirichlet BCs we can't use Neumann
      if Neumann BCs are sued, we can't use Dirchlet


#include <cassert>
#include "BoundaryConditions.hpp"

//Initially BCs are not true; values will be set

BoundaryConditions::BoundaryConditions()
{
   mLhsBcIsDirichlet = false;
   mRhsBcIsDirichlet = false;
   mLhsBcIsNeumann = false;
   mRhsBcIsNeumann = false;
}

//Initialise LHS and RHS Dirichlet BCs

void BoundaryConditions::SetLhsDirichletBc(double lhsValue)
{
   assert(!mLhsBcIsNeumann);
   mLhsBcIsDirichlet = true;
   mLhsBcValue = lhsValue;
}

void BoundaryConditions::SetRhsDirichletBc(double rhsValue)
{
   assert(!mRhsBcIsNeumann);
   mRhsBcIsDirichlet = true;
   mRhsBcValue = rhsValue;
}

//Initial LHS and RHS Neumann BCs

void BoundaryConditions::SetLhsNeumannBc(double lhsDerivValue)
{
   assert(!mLhsBcIsDirichlet);
   mLhsBcIsNeumann = true;
   mLhsBcValue = lhsDerivValue;
}

void BoundaryConditions::SetRhsNeumannBc(double rhsDerivValue)
{
   assert(!mRhsBcIsDirichlet);
   mRhsBcIsNeumann = true;
   mRhsBcValue = rhsDerivValue;
}
