#include <bits/stdc++.h>
using namespace std;

// at is the current position, g is the adjacency list and visited is a boolean array with all false
// Call from the starting node
void dfs(int at, vector<int> g[], vector<bool> &visited)
{
    if (visited[at])
        return;
    visited[at] = true;

    cout << "DFS AT NODE #" << at << "\n";
    auto neighbours = g[at];
    for (auto next : neighbours)
        dfs(next, g, visited);
}