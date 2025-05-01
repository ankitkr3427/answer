#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

#define N 6  

void bfs(int graph[N][N], int start) {
    int visited[N] = {0};
    int queue[N], front = 0, rear = 0;
    
    queue[rear++] = start;
    visited[start] = 1;

    printf("BFS Traversal: ");
    
    while (front < rear) {
        int node = queue[front++];
        printf("%d ", node);

        #pragma omp parallel for
        for (int i = 0; i < N; i++) {
            if (graph[node][i] == 1 && !visited[i]) {
                visited[i] = 1;
                queue[rear++] = i;
            }
        }
    }
    printf("\n");
}

int main() {
    int graph[N][N] = {
        {0, 1, 1, 0, 0, 0},
        {1, 0, 1, 1, 0, 0},
        {1, 1, 0, 1, 1, 0},
        {0, 1, 1, 0, 1, 1},
        {0, 0, 1, 1, 0, 1},
        {0, 0, 0, 1, 1, 0}
    };

    bfs(graph, 0);

    return 0;
}
