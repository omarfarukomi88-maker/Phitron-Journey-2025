#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> adj_list[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    int src = 0;
    int dist = 2;
    bool visited[n];
    memset(visited, false, sizeof(visited));
    int parent[n];
    memset(parent, -1, sizeof(parent));

    queue<int> q;
    q.push(src);
    visited[src] = true;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        for (int child : adj_list[par])
        {
            if (!visited[child])
            {
                q.push(child);
                visited[child] = true;
                parent[child] = par;
            }
        }
    }

    int node = dist;
    vector<int> path;
    while (node != -1)
    {
        path.push_back(node);
        node = parent[node];
    }
    cout << path.size() << endl;
    for (int x : path)
        cout << x << " ";
    return 0;
}