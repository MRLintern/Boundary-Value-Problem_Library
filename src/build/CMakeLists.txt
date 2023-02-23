cmake_minimum_required(VERSION 3.16.3 FATAL_ERROR)

project(BvpOde LANGUAGES CXX)

#generate library

add_library(BvpOdeLib

	STATIC

		BoundaryConditions.hpp
		BvpOde.hpp
		FiniteDifferenceGrid.hpp
		LinearSystem.hpp
		Matrix.hpp
		Node.hpp
		SecondOrderOde.hpp
		Vector.hpp
		BoundaryConditions.cpp
		BvpOde.cpp
		FiniteDifferenceGrid.cpp
		LinearSystem.cpp
		Matrix.cpp
		Vector.cpp

	)

add_executable(Driver Driver.cpp)

target_link_libraries(Driver BvpOdeLib)
