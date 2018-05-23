#ifndef GRAPHALGORITHMS_GRAPHEDGE_H
#define GRAPHALGORITHMS_GRAPHEDGE_H

#include <array>
#include "GraphNode.h"

using namespace std;
class GraphEdge {
private:
    //weight of the edge.
    int weight;
    // Node 1 is the output node.
    // Node 2 is the input node.
    GraphNode *Node1,*Node2;
public:
    GraphEdge( int weight,  GraphNode *Node1,  GraphNode *Node2);
    //Simple Getter methods for variables.
    int getWeight() ;
    GraphNode *getNode1();
    GraphNode *getNode2();
    //Operator Over-ride in order to check if 2 edges are equal we check all the possible combinations of nodes.
    bool operator ==(GraphEdge *edge);
};
#endif //GRAPHALGORITHMS_GRAPHEDGE_H
