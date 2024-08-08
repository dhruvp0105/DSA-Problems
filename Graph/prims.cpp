#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> p;
const int N = 20;
vector<vector<p>> adj(N);
vector<bool> visited(N, false);

int prims(int source)
{
    int n = adj.size();
    int minWeight = 0;
    priority_queue<p, vector<p>, greater<p>> pq;

    pq.push(make_pair(0, source)); // start from the given vertex with weight 0
    while (!pq.empty())
    {
        int u = pq.top().second;
        int w = pq.top().first;
        pq.pop();

        if (visited[u])
        {
            continue;
        }
        visited[u] = true;
        minWeight += w;

        for (auto i : adj[u])
        {
            if (!visited[i.first])
            {
                pq.push(make_pair(i.second, i.first));
            }
        }
    }
    return minWeight;
}

int main()
{
    int n, m;
    cout << "Enter the total No. of nodes and edges : ";
    cin >> n >> m;
    // adj.resize(n);
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }

    int cost = prims(0);
    cout << "Cost is : " << cost << endl;
}