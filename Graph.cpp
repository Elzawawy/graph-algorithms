//
// Created by omar_swidan on 19/05/18.
//

#include <queue>
#include <algorithm>
#include <iostream>
#include "Graph.h"

#define  INF 99999

Graph::Graph(int numberOfVertices) {
    this->numberOfVertices = numberOfVertices;
    this->numberOfEdges=0;
}

GraphNode *Graph::addNode(int index) {

    GraphNode *node = new GraphNode(index);
    vertices.push_back(node);
    vector<GraphEdge *> *edges = new vector<GraphEdge *>;
    node->setEdges(*edges);
    return node;
}

GraphEdge Graph::addEdge(GraphNode *node1, GraphNode *node2, int weight) {
    GraphEdge *edge = new GraphEdge(weight, node1, node2);
    numberOfEdges++;
    edges.push_back(edge);
    node1->getEdges().push_back(edge);
    adjacencyList.insert({node1, node1->getEdges()});
    return *edge;

}

vector<GraphEdge> *Graph::primAlgorithm(GraphNode *node) {
    int distance[numberOfVertices];
    priority_queue<GraphEdge, vector<GraphEdge>, myComparator> priorityQueue;
    vector<GraphEdge> *MST = new vector<GraphEdge>;
    distance[0] = 0;
    for (int i = 1; i < numberOfVertices; ++i) {
        distance[i] = INF;
    }
    for (auto &&edge :node->getEdges())
        priorityQueue.push(*edge);
    while (!priorityQueue.empty()) {
        GraphEdge minEdge = priorityQueue.top();
        priorityQueue.pop();
        if (minEdge.getWeight() < distance[minEdge.getNode2()->getNodeIndex()]) {
            distance[minEdge.getNode2()->getNodeIndex()] = minEdge.getWeight();
            for (auto &&edge: minEdge.getNode2()->getEdges()) {
                if (!(minEdge == edge)) {
                    priorityQueue.push(*edge);
                }
            }
            MST->push_back(minEdge);
        }


    }
    return MST;
}

void Graph::printGraph() {
    for (auto &&vertix : vertices) {
        cout << vertix;
    }
}

vector<GraphEdge> *Graph::dijkstraAlgorithm(GraphNode *node) {
    int *distanceFromSource= new int[numberOfVertices];
    int *parentVertices = new int[numberOfVertices];
    vector<GraphEdge>* edgesShortestPath= new vector<GraphEdge>;
    priority_queue<GraphEdge, vector<GraphEdge>, myComparator> priorityQueue;
    distanceFromSource[node->getNodeIndex()] = 0;
    for (int i = 0; i < numberOfVertices; ++i) {
        if(i !=node->getNodeIndex())
            distanceFromSource[i] = INF;
    }
    for (auto &&edge :node->getEdges()) {
        priorityQueue.push(*edge);
    }

    while (!priorityQueue.empty()) {
        GraphEdge minEdge = priorityQueue.top();
        priorityQueue.pop();
        int sum = minEdge.getWeight()+distanceFromSource[minEdge.getNode1()->getNodeIndex()];
        if (sum < distanceFromSource[minEdge.getNode2()->getNodeIndex()]) {
            distanceFromSource[minEdge.getNode2()->getNodeIndex()] = sum;

            for (auto &&edge: minEdge.getNode2()->getEdges()) {
                if (!(minEdge == edge)) {
                    priorityQueue.push(*edge);
                    parentVertices[minEdge.getNode2()->getNodeIndex()] = minEdge.getNode1()->getNodeIndex();
                }
            }

        }
    }
    return edgesShortestPath;
}



int Graph::getNumberOfVertices()  {
    return numberOfVertices;
}


/*void Graph::createEdges() {
    for (auto &&iterator  :adjacencyList) {


        GraphNode *currentNode = iterator.first;

        for (auto &&pairNodeAndWeight:iterator.second) {
            GraphEdge *tempEdge = new GraphEdge(pairNodeAndWeight.second, currentNode, pairNodeAndWeight.first);
            vector<GraphEdge *>::iterator it = find(edges.begin(), edges.end(), tempEdge);

            if (it == edges.end()) {
                edges.push_back(tempEdge);
                pairNodeAndWeight.first->addEdge(tempEdge);

            } else {

                pairNodeAndWeight.first->addEdge(tempEdge);


            }

        }


    }
}*/

/*
vector<GraphNode> *Graph::getPrimMST() {
    vector<GraphNode> *MST = new vector<GraphNode>;
    unordered_map<GraphNode *, int> cost;
    // Creates a Min heap of edges (order by weight)


    for (auto &&vertix :vertices) {
        if (vertix == vertices.at(0))
            cost.insert({vertix, 0});
        else cost.insert({vertix, INF});
    }

    for (auto &&edge :vertices.at(0)->getEdges())
        priorityQueue.push(*edge);


    while (!priorityQueue.empty()) {
        GraphEdge graphEdge = priorityQueue.top();
        priorityQueue.pop();
        MST->push_back(*graphEdge.getNode1());
        if (cost[graphEdge.getNode2()] > graphEdge.getWeight())
            cost[graphEdge.getNode2()] = graphEdge.getWeight();

        for (auto &&edge :graphEdge.getNode2()->getEdges()) {

            priorityQueue.push(*edge);
            if (cost[edge->getNode2()] > edge->getWeight())
                cost[edge->getNode2()] = edge->getWeight();
        }


    }

    return MST;
}
*/

/*int Graph::myComparator::operator()(GraphEdge &edge1,GraphEdge &edge2) {
    return edge1.getWeight() > edge2.getWeight();
}*/

int Graph::myComparator::operator()(GraphEdge &edge1, GraphEdge &edge2) {
    return edge1.getWeight() > edge2.getWeight();
}
