#include <iostream>
using namespace std;

#define V 7  // <-- Changed from 'v' to 'V'

class Graph {
public:
    int adjMatrix[V][V];

    Graph() {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                adjMatrix[i][j] = 0;
            }
        }
    }

    void addEdge(int u, int v) {  // Now 'v' here is a variable, no conflict
        if (u >= 0 && u < V && v >= 0 && v < V) {
            adjMatrix[u][v] = 1;
            adjMatrix[v][u] = 1;
        } else {
            cout << "Invalid edge: " << u << " - " << v << endl;
        }
    }

    void print() {
        cout << "Adjacency Matrix:\n";
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                cout << adjMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Graph g;
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 1);
    g.addEdge(2, 4);
    g.addEdge(3, 1);
    g.addEdge(3, 4);
    g.addEdge(4, 1);
    g.addEdge(4, 3);
    g.addEdge(4, 5);
    g.addEdge(4, 6);
    g.addEdge(5, 4);
    g.addEdge(6, 4);
    g.print();

    return 0;
}
