#include <iostream>

using namespace std;

const int MAX_VERTICES = 100;

typedef struct {
    int numVertices;
    int adjMatrix[MAX_VERTICES][MAX_VERTICES];
} Graph;

void initGraph(Graph* graph, int vertices) {
    graph->numVertices = vertices;
    for (int i = 0; i < graph->numVertices; i++) {
        for (int j = 0; j < graph->numVertices; j++) {
            graph->adjMatrix[i][j] = 0;
        }
    }
}

void addEdge(Graph* graph, int src, int dest) {
    graph->adjMatrix[src][dest] = 1;
}

void printGraph(const Graph* graph) {
    for (int i = 0; i < graph->numVertices; i++) {
        cout << "Outgoing edges from vertex " << i << ": ";
        for (int j = 0; j < graph->numVertices; j++) {
            if (graph->adjMatrix[i][j] == 1) {
                cout << j << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int numVertices = 5;
    Graph graph;

    initGraph(&graph, numVertices);

    addEdge(&graph, 0, 1);
    addEdge(&graph, 0, 4);
    addEdge(&graph, 1, 2);
    addEdge(&graph, 1, 3);
    addEdge(&graph, 1, 4);
    addEdge(&graph, 2, 3);
    addEdge(&graph, 3, 4);

    printGraph(&graph);

    return 0;
}
