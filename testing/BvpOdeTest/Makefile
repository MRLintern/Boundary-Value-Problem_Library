all: LibTest

%TestSuite.cpp: %TestSuite.hpp
	cxxtestgen --have-eh --error-printer -o $@ $<

LibTest: 	BvpOdeTestSuite.cpp BoundaryConditions.o BvpOde.o FiniteDifferenceGrid.o Vector.o Matrix.o LinearSystem.o
  g++ -g -o BvpOdeTestSuiteRunner $^\
  && ./BvpOdeTestSuiteRunner -v
  
  %.o:	%.cpp %.hpp
	g++ -g -c $<
  
  rm -f *.o *TestSuite.cpp
