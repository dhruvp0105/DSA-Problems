// cycle detection in undirected graph
#include <bits/stdc++.h>
using namespace std;

bool isCycle(int src, vector<vector<int>> &adj, vector<bool> &visited, int parent)
{
    visited[src] = true;
    for (auto i : adj[src])
    {
        if (i != parent)
        {
            if (visited[i])
            {
                return true;
            }
            if (!visited[i] && isCycle(i, adj, visited, src))
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int n, m;
    cout << "Enter the total No. of nodes and edges : ";
    cin >> n >> m;

    vector<vector<int>> adj(n);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bool cycle = false;
    for (int i = 0; i < n; i++)
    {
        vector<bool> visited(n, false);
        if (!visited[i] && isCycle(i, adj, visited, -1))
        {
            cycle = true;
        }
    }
    if (cycle)
    {
        cout << "Cycle is present" << endl;
    }
    else
    {
        cout << "Cycle is not present" << endl;
    }

    return 0;
}