#include <stdio.h>
#include <limits.h>
#include <omp.h>

#define V 6 

int minDistance(int dist[], int visited[]) {
    int min = INT_MAX, min_index = -1;
    #pragma omp parallel for
    for (int v = 0; v < V; v++) {
        if (!visited[v] && dist[v] < min) {
            #pragma omp critical
            {
                if (dist[v] < min) {
                    min = dist[v];
                    min_index = v;
                }
            }
        }
    }
    return min_index;
}

void dijkstra(int graph[V][V], int src) {
    int dist[V];
    int visited[V] = {0};

    for (int i = 0; i < V; i++)
        dist[i] = INT_MAX;
    dist[src] = 0;

    for (int count = 0; count < V - 1; count++) {
        int u = minDistance(dist, visited);
        visited[u] = 1;

        #pragma omp parallel for
        for (int v = 0; v < V; v++) {
            if (!visited[v] && graph[u][v] && dist[u] != INT_MAX &&
                dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    printf("Vertex   Distance from Source\n");
    for (int i = 0; i < V; i++)
        printf("%d \t\t %d\n", i, dist[i]);
}

int main() {
    int graph[V][V] = {
        {0, 10, 20, 0, 0, 0},
        {10, 0, 5, 16, 0, 0},
        {20, 5, 0, 20, 10, 0},
        {0, 16, 20, 0, 2, 6},
        {0, 0, 10, 2, 0, 3},
        {0, 0, 0, 6, 3, 0}
    };

    dijkstra(graph, 0);

    return 0;
}
