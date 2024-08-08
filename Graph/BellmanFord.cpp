#include <bits/stdc++.h>
using namespace std;
const int INF = 1e7;
int main()
{
    int n, m;
    cout << "Enter the total No. of nodes and edges : ";
    cin >> n >> m;
    vector<vector<int>> edges;

    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back({u, v, w});
    }

    int src;
    cout << "Enter the source : ";
    cin >> src;
    vector<int> dist(n, INF);
    dist[src] = 0;

    for (int iter = 0; iter < n - 1; iter++)
    {
        for (auto i : edges)
        {
            int u = i[0];
            int v = i[1];
            int w = i[2];

            dist[v] = min(dist[v], w + dist[u]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << src << " - " << i << " => " << dist[i] << endl;
    }
}