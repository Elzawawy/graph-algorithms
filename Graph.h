#ifndef GRAPHALGORITHMS_GRAPH_H
#define GRAPHALGORITHMS_GRAPH_H
#include <vector>
#include <unordered_map>
#include "GraphNode.h"
#include "GraphEdge.h"
using namespace std;
//Un-implemented yet AdjacencyList Representation. Need to build conversion to the underlying Edge representation.
typedef unordered_map<GraphNode* ,vector<GraphEdge*>> AdjacencyList;
//Implemented Conversion from AdjacencyMatrix required representation to the underlying Edge Representation.
typedef vector<vector<int>> AdjacencyMatrix;
class Graph {
    AdjacencyMatrix adjacencyMatrix;
    int numberOfVertices;
    vector<GraphEdge*> edges;
    vector<GraphNode*> vertices;
public:

    virtual ~Graph();
    Graph(int numberOfVertices,AdjacencyMatrix adjacencyMatrix);
    void createNodes();
    void createEdges();
    const vector<GraphNode *> &getVertices() const;
    GraphNode* addNode(int index);
    GraphEdge addEdge(GraphNode *node1,GraphNode *node2,int weight);
    vector<GraphEdge>* primAlgorithm(GraphNode* node);
    vector<GraphEdge>* dijkstraAlgorithm(GraphNode* node);
private:
    void printParents(int index,int sourceIndex,int *parentVertices);
    // To compare two edges
    class myComparator
    {
    public:
        int operator() (GraphEdge& edge1, GraphEdge& edge2);

    };
};
#endif //GRAPHALGORITHMS_GRAPH_H
