
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter the total No of Nodes and edges : ";
    cin >> n >> m;
    int count = 0;
    vector<vector<int> > adj(n);
    vector<int> indeg(n, 0);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        indeg[v]++;
    }

    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        if (indeg[i] == 0)
        {
            q.push(i);
        }
    }

    while (!q.empty())
    {
        count++;
        int x = q.front();
        q.pop();
        cout << x << " ";
        vector<int>::iterator it;
        for (it = adj[x].begin(); it != adj[x].end(); it++)
        {
            indeg[*it]--;
            if (indeg[*it] == 0)
            {
                q.push(*it);
            }
        }
    }

    return 0;
}