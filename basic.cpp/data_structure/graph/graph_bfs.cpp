#include <bits/stdc++.h>
#include <queue>
#include <vector>
#include <list>

using namespace std;

// Node structure for the adjacency list
struct Node {
  int dest;
  int weight; // For weighted graphs

  Node(int d, int w = 1) : dest(d), weight(w) {}
};

class Graph {
public:
  int numVertices;
  vector<list<Node>> adjList;
  bool directed = false;

  Graph(int V) : numVertices(V), adjList(V) {}

  void addEdge(int src, int dest, int weight = 1) {
    adjList[src].push_back(Node(dest, weight));
    if (!directed) { // Add edge in reverse for undirected graphs
      adjList[dest].push_back(Node(src, weight));
    }
  }

  void bfs(int startVertex) {
    vector<bool> visited(numVertices, false);
    queue<int> q;

    visited[startVertex] = true;
    q.push(startVertex);

    while (!q.empty()) {
      int current = q.front();
      q.pop();

      cout << current << " "; // Process the node

      for (Node node : adjList[current]) {
        if (!visited[node.dest]) {
          visited[node.dest] = true;
          q.push(node.dest);
        }
      }
    }
  }
};

int main() {
  Graph graph(5); // Graph with 5 vertices

  // Add edges (modify as needed for your graph)
  graph.addEdge(0, 1);
  graph.addEdge(0, 4);
  graph.addEdge(1, 2);
  graph.addEdge(1, 3);
  graph.addEdge(1, 4);
  graph.addEdge(2, 3);
  graph.addEdge(3, 4);

  int startNode = 2;

  cout << "BFS Traversal starting from vertex " << startNode << ": ";
  graph.bfs(startNode);
  cout << endl;

  return 0;
}
