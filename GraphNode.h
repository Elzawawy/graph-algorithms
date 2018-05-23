#ifndef GRAPHALGORITHMS_GRAPHNODE_H
#define GRAPHALGORITHMS_GRAPHNODE_H
#include <vector>
//resolving a circular dependency by calling class GraphEdge instead of include "GraphEdge.h"
class GraphEdge;
using namespace std;
class GraphNode {
    //Each GraphNode holds a vector of edges that it is connect with.
    vector<GraphEdge*> edges;
    //node index that recognizes the node.
    int nodeIndex;
public:
    GraphNode(int nodeIndex);
    vector<GraphEdge *> &getEdges() ;
    void setEdges(const vector<GraphEdge *> &edges);
    int getNodeIndex() ;
};
#endif //GRAPHALGORITHMS_GRAPHNODE_H
