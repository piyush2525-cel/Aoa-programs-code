#include <iostream>
using namespace std;

const int N = 5;

int graph[N][N] = {
    {0, 1, 1, 0, 0},
    {1, 0, 0, 1, 1},
    {1, 0, 0, 0, 1},
    {0, 1, 0, 0, 0},
    {0, 1, 1, 0, 0}
};

int visited[N] = {0};

void DFS(int v) {
    cout << v << " ";
    visited[v] = 1;

    for (int i = 0; i < N; i++) {
        if (graph[v][i] == 1 && !visited[i])
            DFS(i);
    }
}

int main() {
    cout << "DFS Traversal: ";
    DFS(0);
    return 0;
}
