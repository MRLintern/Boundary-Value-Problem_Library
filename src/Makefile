all: Driver 

### Single executable from Chapter 12:
Driver:	Driver.cpp BoundaryConditions.o BvpOde.o FiniteDifferenceGrid.o Vector.o Matrix.o LinearSystem.o
	g++ -O -o Driver $^

%TestSuite.cpp: %TestSuite.hpp
	cxxtestgen --have-eh --error-printer -o $@ $<

### Instructions for building the classes						
%.o:	%.cpp %.hpp
	g++ -g -c $<

clean:
	rm -f *.o *TestSuite.cpp
