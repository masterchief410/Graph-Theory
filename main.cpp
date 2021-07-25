#include <bits/stdc++.h>
using namespace std;

#include "dfs.cpp"
#include "connected_components.cpp"
#include "bfs.cpp"

/*
    GRAPH:
            0           5
        /       \       |   
        1       2       6
        |       |  
        3       4
*/

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int number_of_nodes = 7;
    vector<int> adjacency_list[] = {{1, 2}, {0, 3}, {0, 4}, {1}, {2}, {6}, {5}};

    /* -------------- DFS -------------- */
    vector<bool> visited(number_of_nodes, false);
    dfs(0, adjacency_list, visited);

    /* -------------- CONNECTED COMPONENTS -------------- */
    //connected_components(number_of_nodes, adjacency_list);

    /* -------------- BFS -------------- */
    vector<bool> visit(number_of_nodes, false);
    bfs(0, adjacency_list, visit);

    return 0;
}