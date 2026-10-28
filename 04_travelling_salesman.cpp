#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int cost[4][4] = {
        {0, 10, 15, 20},
        {10, 0, 35, 25},
        {15, 35, 0, 30},
        {20, 25, 30, 0}
    };

    int path[] = {1, 2, 3};
    int minCost = 999999;

    do {
        int total = cost[0][path[0]]
                  + cost[path[0]][path[1]]
                  + cost[path[1]][path[2]]
                  + cost[path[2]][0];

        if (total < minCost)
            minCost = total;
    } while (next_permutation(path, path + 3));

    cout << "Minimum cost: " << minCost;
    return 0;
}
