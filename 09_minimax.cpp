#include <iostream>
#include <algorithm>
using namespace std;

// A full binary game tree with 4 leaf values (depth = 2).
int minimax(int depth, int node, bool isMax, int values[]) {
    if (depth == 2)
        return values[node];

    if (isMax) {
        return max(
            minimax(depth + 1, node * 2, false, values),
            minimax(depth + 1, node * 2 + 1, false, values)
        );
    }

    return min(
        minimax(depth + 1, node * 2, true, values),
        minimax(depth + 1, node * 2 + 1, true, values)
    );
}

int main() {
    int values[] = {3, 5, 2, 9};

    cout << "Best value: " << minimax(0, 0, true, values);
    return 0;
}
