// find no. of connected component..
#include <bits/stdc++.h>
using namespace std;

int get_comp(int idx, vector<bool> &visited, vector<vector<int>> adj)
{
    if (visited[idx])
    {
        return 0;
    }
    visited[idx] = true;
    int ans = 1;
    for (auto i : adj[idx])
    {
        if (!visited[i])
        {
            ans += get_comp(i, visited, adj);
            visited[i] = true;
        }
    }
    return ans;
}

int main()
{
    int n, m;
    cout << "Enter the total No. of nodes and edges : ";
    cin >> n >> m;
    vector<vector<int>> adj(n);
    vector<bool> visited(n, false);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> components;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            components.push_back(get_comp(i, visited, adj));
        }
    }

    for (auto i : components)
    {
        cout << i << " ";
    }
    return 0;
}