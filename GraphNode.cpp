#include "GraphNode.h"
GraphNode::GraphNode(int nodeIndex) {
    this->nodeIndex=nodeIndex;
}

vector<GraphEdge *> &GraphNode::getEdges()  {
    return edges;
}

void GraphNode::setEdges(const vector<GraphEdge *> &edges) {
    GraphNode::edges = edges;
}

int GraphNode::getNodeIndex()  {
    return nodeIndex;
}




