#include <cassert>
#include "FiniteDifferenceGrid.hpp"
#include "Node.hpp"

//initialise the number of nodes and  the min/max points on the interval; x_min < x < x_max
FiniteDifferenceGrid::FiniteDifferenceGrid(int numNodes, double xMin, double xMax)
{
   //size/difference between each node a long the interval
   double stepsize = (xMax-xMin)/((double)(numNodes-1));
  
   for (int i=0; i<numNodes; i++)
   {
      //create node instance
      Node node;
      //coordinates for nodes on interval
      node.coordinate = xMin+i*stepsize;
      //add nodes
      mNodes.push_back(node);
   }
  
   //check number of nodes
   assert(mNodes.size() == numNodes);
}
