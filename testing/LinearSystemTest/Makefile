all: LibTest

%TestSuite.cpp: %TestSuite.hpp
	cxxtestgen --have-eh --error-printer -o $@ $<

LibTest:	LinearSystemTestSuite.cpp Matrix.o Vector.o LinearSystem.o
	g++ -g -o LinearSystemTestSuiteRunner $^\
	&& ./LinearSystemTestSuiteRunner -v
