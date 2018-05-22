#include <iostream>
#include "Graph.h"
#define randomVertix 0
using namespace std;
int main() {
    int numberOfVertices;
    unsigned long src;
    int sum=0;
    cout<<"Enter number of vertices : ";
    cin>>numberOfVertices;
    cout<<"Enter the adjacency matrix"<<endl;
    vector<vector<int>> matrix((unsigned long) numberOfVertices);
    int x;
    for (int i = 0; i < numberOfVertices; ++i)
        for (int j = 0; j < numberOfVertices; ++j){
            cin>>x;
            matrix.at((unsigned long) i).push_back(x);
        }
    //Instantiate a Graph object with adjacency matrix
    Graph graph(numberOfVertices,matrix);
    vector<GraphEdge>*vector1=graph.primAlgorithm(graph.getVertices().at(randomVertix));
    for (auto &&  item:*vector1 ) {
        cout<<item.getNode1()->getNodeIndex()<<","<<item.getNode2()->getNodeIndex()<<","<<item.getWeight()<<endl;
        sum+=item.getWeight();
    }
    cout<<"Minimum spanning tree's total weight is "<<sum<<endl;
    cout<<"Enter the source vertix's index"<<endl;
    cin>>src;
    vector<GraphEdge>* dist= graph.dijkstraAlgorithm(graph.getVertices().at(src));

    return 0;
}