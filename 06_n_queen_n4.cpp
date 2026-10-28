#include <iostream>
#include <cmath>
using namespace std;

const int N = 4;
int queen[N];

bool safe(int row, int col) {
    for (int i = 0; i < row; i++) {
        if (queen[i] == col ||
            abs(queen[i] - col) == abs(i - row))
            return false;
    }
    return true;
}

bool solve(int row) {
    if (row == N)
        return true;

    for (int col = 0; col < N; col++) {
        if (safe(row, col)) {
            queen[row] = col;
            if (solve(row + 1))
                return true;
        }
    }
    return false;
}

int main() {
    if (solve(0)) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++)
                cout << (queen[i] == j ? "Q " : ". ");
            cout << endl;
        }
    } else {
        cout << "No solution found.";
    }

    return 0;
}
