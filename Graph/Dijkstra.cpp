#include <bits/stdc++.h>
using namespace std;
const int INF = 1e7;
int main()
{
    int n, m;
    cout << "Enter the total No. of nodes and edges : ";
    cin >> n >> m;

    vector<int> dist(n, INF);
    vector<vector<pair<int, int>>> graph(n);

    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }

    cout << "Enter the source : ";
    int src;
    cin >> src;
    dist[src] = 0;

    set<pair<int, int>> s;
    s.insert({0, src}); //({weight,vertex})
    while (!s.empty())
    {
        auto x = *(s.begin());
        s.erase(x);
        for (auto it : graph[x.second])
        {
            if (dist[it.first] > dist[x.second] + it.second)
            {
                dist[it.first] = dist[x.second] + it.second;
                s.insert({dist[it.first], it.first});
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (dist[i] < INF)
        {
            cout << src << " - " << i << " => " << dist[i] << endl;
        }
    }
}