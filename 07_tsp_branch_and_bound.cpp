#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

const int N = 4;

int cost[N][N] = {
    {0, 10, 15, 20},
    {10, 0, 35, 25},
    {15, 35, 0, 30},
    {20, 25, 30, 0}
};

int best = INT_MAX;

void tsp(int city, int count, int totalCost, int visited) {
    // All edge costs are non-negative, so this safely prunes
    // paths that already cost at least as much as the best tour.
    if (totalCost >= best)
        return;

    if (count == N) {
        best = min(best, totalCost + cost[city][0]);
        return;
    }

    for (int next = 1; next < N; next++) {
        if (!(visited & (1 << next))) {
            tsp(next, count + 1, totalCost + cost[city][next],
                visited | (1 << next));
        }
    }
}

int main() {
    tsp(0, 1, 0, 1);
    cout << "Minimum cost: " << best;
    return 0;
}
