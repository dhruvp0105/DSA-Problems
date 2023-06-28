#include <bits/stdc++.h>
using namespace std;

const int N = 10;
bool vis[N];
vector<int> adj[N];

void dfs(int node)
{
    vis[node] = true;
    cout << node << " ";

    vector<int>::iterator it;
    for (it = adj[node].begin(); it != adj[node].end(); it++)
    {
        if (!vis[*it])
        {
            dfs(*it);
        }
    }
}

int main()
{
    for (int i = 0; i < N; i++)
    {
        vis[i] = false;
    }

    int n, m;
    cout << "Enter total No of nodes and Edges : ";
    cin >> n >> m;

    int x, y;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    dfs(1);

    return 0;
}