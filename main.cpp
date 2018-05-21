#include <iostream>
#include "Graph.h"

using namespace std;
int main() {
    Graph graph(4);
    GraphNode* node1= graph.addNode(0);
    GraphNode* node2= graph.addNode(1);
    GraphNode* node3= graph.addNode(2);
    GraphNode* node4= graph.addNode(3);
    graph.addEdge(node1,node2,7);
    graph.addEdge(node1,node3,2);
    graph.addEdge(node1,node4,5);
    graph.addEdge(node2,node1,7);
    graph.addEdge(node2,node4,3);
    graph.addEdge(node3,node1,2);
    graph.addEdge(node3,node4,6);
    graph.addEdge(node4,node2,3);
    graph.addEdge(node4,node1,5);
    graph.addEdge(node4,node3,6);
    vector<GraphEdge>*vector1=graph.primAlgorithm(node1);
    for (auto &&  item:*vector1 ) {
        cout<<item.getWeight()<<","<<item.getNode1()->getNodeIndex()<<","<<item.getNode2()->getNodeIndex()<<endl;

}
    return 0;
}