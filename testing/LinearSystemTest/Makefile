all: LibTest

%TestSuite.cpp: %TestSuite.hpp
	cxxtestgen --have-eh --error-printer -o $@ $<

LibTest:	LinearSystemTestSuite.cpp Matrix.o Vector.o LinearSystem.o
	g++ -g -o LinearSystemTestSuiteRunner $^\
	&& ./LinearSystemTestSuiteRunner -v
	
#LibTest: 	BvpOdeTestSuite.cpp BoundaryConditions.o BvpOde.o FiniteDifferenceGrid.o Vector.o Matrix.o LinearSystem.o
#	g++ -g -o LibTest $^\
#	&& ./LibTest -v

	rm -f *.o *TestSuite.cpp

	
