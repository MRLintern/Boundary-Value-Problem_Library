//class for finite differences of intervals

#pragma once

#include <vector>
#include "Node.hpp"

class FiniteDifferenceGrid
{
public:
   // The boundary value class is able to
   // access the nodes
   friend class BvpOde;
   
private:
   
   //vector for storing nodes
   std::vector<Node> mNodes;
   
public:
   
   //constructor for nodes and min/max coordinates for nodes
   FiniteDifferenceGrid(int numNodes, double xMin, double xMax);
};

