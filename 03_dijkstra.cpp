#include <iostream>
using namespace std;

int main() {
    const int n = 5;
    const int INF = 9999;

    int g[n][n] = {
        {0, 10, 0, 0, 5},
        {0, 0, 1, 0, 2},
        {0, 0, 0, 4, 0},
        {7, 0, 6, 0, 0},
        {0, 3, 9, 2, 0}
    };

    int dist[n], visited[n] = {0};
    int source = 0;

    for (int i = 0; i < n; i++)
        dist[i] = INF;
    dist[source] = 0;

    for (int i = 0; i < n; i++) {
        int u = -1;

        for (int j = 0; j < n; j++) {
            if (!visited[j] && (u == -1 || dist[j] < dist[u]))
                u = j;
        }

        if (u == -1 || dist[u] == INF)
            break;

        visited[u] = 1;

        for (int v = 0; v < n; v++) {
            if (g[u][v] != 0 && !visited[v] &&
                dist[u] + g[u][v] < dist[v]) {
                dist[v] = dist[u] + g[u][v];
            }
        }
    }

    for (int i = 0; i < n; i++)
        cout << "Distance to " << i << " = " << dist[i] << endl;

    return 0;
}
