//
// Created by omar_swidan on 19/05/18.
//

#ifndef GRAPHALGORITHMS_GRAPHNODE_H
#define GRAPHALGORITHMS_GRAPHNODE_H

#include <vector>
//resloving a circular dependency.
class GraphEdge;

using namespace std;
class GraphNode {
    vector<GraphEdge*> edges;
    int nodeIndex;
public:
     vector<GraphEdge *> &getEdges() ;

    int getNodeIndex() ;

    void setEdges(const vector<GraphEdge *> &edges);

public:
    GraphNode(int nodeIndex);
};


#endif //GRAPHALGORITHMS_GRAPHNODE_H
