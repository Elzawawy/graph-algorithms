#include <iostream>
#include "Graph.h"
#define randomVertix 0
using namespace std;
int main() {
    int numberOfVertices;
    cout<<"Enter number of vertices : ";
    cin>>numberOfVertices;
    cout<<"enter the adjacency matrix"<<endl;
    vector<vector<int>> matrix((unsigned long) numberOfVertices);
    int x;
    for (int i = 0; i < numberOfVertices; ++i)
        for (int j = 0; j < numberOfVertices; ++j){
            cin>>x;
            matrix.at((unsigned long) i).push_back(x);
        }
    Graph graph(numberOfVertices,matrix);
    vector<GraphEdge>*vector1=graph.primAlgorithm(graph.getVertices().at(randomVertix));

    int sum=0;
    for (auto &&  item:*vector1 ) {
        cout<<item.getNode1()->getNodeIndex()<<","<<item.getNode2()->getNodeIndex()<<","<<item.getWeight()<<endl;
        sum+=item.getWeight();
    }
    cout<<"minimum spanning tree's total weight is "<<sum<<endl;
    cout<<"enter the source vertix's index"<<endl;
    unsigned long src;
    cin>>src;
    vector<GraphEdge>* dist= graph.dijkstraAlgorithm(graph.getVertices().at(src));

    return 0;
}