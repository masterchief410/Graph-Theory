#include <bits/stdc++.h>
using namespace std;

// at is the current position, g is the adjacency list and visited is a boolean array with all false
// Call from the starting node
void bfs(int at, vector<int> g[], vector<bool> &visited)
{
    queue<int> q;
    q.push(at);

    visited[at] = true;

    while (!q.empty())
    {
        auto node = q.front();
        q.pop();

        cout << "BFS AT NODE #" << node << "\n";
        auto neighbours = g[node];
        for (auto next : neighbours)
        {
            if (!visited[next])
            {
                q.push(next);
                visited[next] = true;
            }
        }
    }
}