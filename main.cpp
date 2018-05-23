#include <iostream>
#include "Graph.h"
#define randomVertix 0
using namespace std;
int main() {
    int numberOfVertices;
    unsigned long src;
    int sum=0;
    int x;
    cout<<"------------------------Prim Algorithm Test--------------------"<<endl;
    cout<<"Enter number of vertices of the graph : ";
    cin>>numberOfVertices;
    cout<<"Enter the adjacency matrix to find the MST from"<<endl;
    vector<vector<int>> matrix((unsigned long) numberOfVertices);
    for (int i = 0; i < numberOfVertices; ++i)
        for (int j = 0; j < numberOfVertices; ++j){
            cin>>x;
            matrix.at((unsigned long) i).push_back(x);
        }
    //Instantiate a Graph object with adjacency matrix
    Graph graph(numberOfVertices,matrix);
    vector<GraphEdge>*vector1=graph.primAlgorithm(graph.getVertices().at(randomVertix));
    cout<<"------------------------Prim Algorithm Results--------------------"<<endl;
    for (auto &&  item:*vector1 ) {
        cout<<item.getNode1()->getNodeIndex()<<","<<item.getNode2()->getNodeIndex()<<","<<item.getWeight()<<endl;
        sum+=item.getWeight();
    }
    cout<<"Minimum spanning tree's total weight is "<<sum<<endl;
    cout<<"------------------------Dijkstra Algorithm Test--------------------"<<endl;
    cout<<"Enter number of vertices of the graph : ";
    cin>>numberOfVertices;
    cout<<"Enter the adjacency matrix to find the shortest path from"<<endl;
    matrix.clear();
    for (int i = 0; i < numberOfVertices; ++i)
        for (int j = 0; j < numberOfVertices; ++j){
            cin>>x;
            matrix.at((unsigned long) i).push_back(x);
        }
    //Instantiate a Graph object with adjacency matrix
    Graph graph2(numberOfVertices,matrix);
    cout<<"Enter the source vertex's index"<<endl;
    cin>>src;
    cout<<"------------------------Dijkstra Algorithm Results--------------------"<<endl;
    graph2.dijkstraAlgorithm(graph2.getVertices().at(src));
    return 0;
}