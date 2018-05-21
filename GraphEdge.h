//
// Created by omar_swidan on 19/05/18.
//

#ifndef GRAPHALGORITHMS_GRAPHEDGE_H
#define GRAPHALGORITHMS_GRAPHEDGE_H

#include <array>
#include "GraphNode.h"

using namespace std;
class GraphEdge {
private:
    int weight;
    int direction;
    GraphNode *Node1,*Node2;

public:
    int getWeight() ;

    GraphNode *getNode1();

    GraphNode *getNode2();

public:
    GraphEdge( int weight,  GraphNode *Node1,  GraphNode *Node2);
    bool operator ==(GraphEdge *edge);

};


#endif //GRAPHALGORITHMS_GRAPHEDGE_H
