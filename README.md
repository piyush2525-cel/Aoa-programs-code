# DAA Practicals in C++

This repository contains the 9 Design and Analysis of Algorithms practical programs.

## Programs

1. Selection Sort
2. Merge Sort
3. Dijkstra's Single-Source Shortest Path
4. Travelling Salesman Problem (brute force)
5. Depth First Search (DFS)
6. N-Queen Problem (N = 4)
7. Travelling Salesman Problem using Branch and Bound
8. Naive String Matching
9. Min-Max Algorithm

## How to run

Each practical is a separate `.cpp` file.

### Using a C++ compiler
For example, to compile and run Selection Sort:

```bash
g++ 01_selection_sort.cpp -o selection_sort
./selection_sort
```

On Windows, run the generated program as:

```bash
selection_sort.exe
```

You can also open a `.cpp` file in Code::Blocks, Visual Studio, or another C++ IDE and run it.

## Complexity summary

| No. | Practical | Time Complexity | Space Complexity |
|---:|---|---|---|
| 1 | Selection Sort | O(n^2) | O(1) |
| 2 | Merge Sort | O(n log n) | O(n) |
| 3 | Dijkstra (adjacency matrix) | O(V^2) | O(V^2) |
| 4 | Travelling Salesman (brute force) | O(n!) | O(n) |
| 5 | DFS (adjacency matrix) | O(V^2) | O(V) |
| 6 | N-Queen (backtracking) | O(N!) upper-bound estimate | O(N) |
| 7 | TSP with branch-and-bound pruning | O(n!) worst case | O(n) |
| 8 | Naive String Matching | O(nm) | O(1), excluding input strings |
| 9 | Min-Max | O(b^d) | O(d) |

Here, `n` is the number of items/cities, `V` is the number of graph vertices, `N` is the chessboard size, `m` is the pattern length, `b` is the branching factor, and `d` is the game-tree depth.

## Notes

- Dijkstra's algorithm requires non-negative edge weights.
- The TSP examples use a fixed 4-city cost matrix.
- The N-Queen program prints one valid solution for N = 4.
- The Min-Max program uses four leaf values to demonstrate a small game tree.
