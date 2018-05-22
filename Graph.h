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
typedef vector<vector<int>> AdjacencyMatrix;
class Graph {

    AdjacencyList adjacencyList;
    AdjacencyMatrix adjacencyMatrix;
    int numberOfVertices;
    int numberOfEdges;
    vector<GraphEdge*> edges;
    vector<GraphNode*> vertices;

public:
    const vector<GraphNode *> &getVertices() const;

public:
    int getNumberOfVertices() ;


    Graph(int numberOfVertices,AdjacencyMatrix adjacencyMatrix);
    void createNodes(int numberOfVertices);
    void createEdges(vector<vector<int>> matrix);

    GraphNode* addNode(int index);
    GraphEdge addEdge(GraphNode *node1,GraphNode *node2,int weight);
    void printGraph();
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
