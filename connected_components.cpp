#include <bits/stdc++.h>
using namespace std;

void _dfs(int at, int count, vector<int> &components, vector<int> g[], vector<bool> &visited)
{
    if (visited[at])
        return;

    visited[at] = true;
    components[at] = count;

    //cout << "DFS AT NODE #" << at << "\n";
    auto neighbours = g[at];
    for (auto next : neighbours)
        _dfs(next, count, components, g, visited);
}

// n is the number of nodes and g is adjacency list
vector<int> connected_components(int n, vector<int> g[])
{
    vector<bool> visited(n, false);
    vector<int> components(n, -1);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            _dfs(i, count, components, g, visited);
            count++;
        }
    }
    cout << "THE CONNECTED COMPONENTS ARE: \n";
    for (auto component : components)
        cout << component << " ";
    cout << "\n";
    return components;
}
