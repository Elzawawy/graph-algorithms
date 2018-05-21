//
// Created by omar_swidan on 19/05/18.
//

#ifndef GRAPHALGORITHMS_GRAPH_H
#define GRAPHALGORITHMS_GRAPH_H

#include <vector>
#include <unordered_map>
#include "GraphNode.h"
#include "GraphEdge.h"

using namespace std;
typedef unordered_map<GraphNode* ,vector<GraphEdge*>> AdjacencyList;
class Graph {

    AdjacencyList adjacencyList;
    int numberOfVertices;
    vector<GraphEdge*> edges;
    vector<GraphNode*> vertices;
    void createEdges();

public:
    int getNumberOfVertices() ;

    Graph(int numberOfVertices);
    GraphNode* addNode(int index);
    GraphEdge addEdge(GraphNode *node1,GraphNode *node2,int weight);
    void printGraph();
    vector<GraphEdge>* primAlgorithm(GraphNode* node);
    int* dijkstraAlgorithm(GraphNode* node);
private:
    // To compare two edges
    class myComparator
    {
    public:
        int operator() (GraphEdge& edge1, GraphEdge& edge2);

    };

};


#endif //GRAPHALGORITHMS_GRAPH_H
