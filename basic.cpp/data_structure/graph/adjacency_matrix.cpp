#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Graph{
public: 
    int numVertices;
    vector<vector<int>> adjMatrix;
    bool directed = true;    

    Graph(int v) : numVertices(v), adjMatrix(v, vector<int>(v, 0)) {}

    void addEdge(int src, int dest){
        adjMatrix[src][dest] = 1;
        if (!directed){
            adjMatrix[dest][src] = 1;
        }
    }
    void visualize(){
        cout << "  ";
        for (int i = 1; i < numVertices; i++){
            cout << i << " ";
        }
        cout << endl;

        for (int i = 0; i < numVertices; i++){
            cout << i << ": ";
            for (int j = 0; j < numVertices; j++){
                cout << adjMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main(){
    Graph graph(5);
    graph.addEdge(0, 1);
    graph.addEdge(0, 4);
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(1, 4);
    graph.addEdge(2, 3);
    graph.addEdge(3, 4);    

    cout << " Adjacency Matrix Representation\n";
    graph.visualize();

    return 0;
}
