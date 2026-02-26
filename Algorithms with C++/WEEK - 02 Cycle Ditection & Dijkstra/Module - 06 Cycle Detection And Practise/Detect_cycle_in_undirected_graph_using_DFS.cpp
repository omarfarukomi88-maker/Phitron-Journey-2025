#include <bits/stdc++.h>
using namespace std;
bool cycle;
vector<int> adj_list[105];
bool visited[105];
int parent[105];
void dfs(int src)
{

    visited[src] = true;
    for (int child : adj_list[src])
    {
        if (visited[child] && parent[src] != child)
            cycle = true;
        if (!visited[child])
        {
            parent[child] = src;
            dfs(child);
            //parent[child] = src; // dfs call er por hobe na taile wrong ans ashbe
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(visited, false, sizeof(visited));
    memset(parent, -1, sizeof(parent));
    cycle = false;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            dfs(i);
        }
    }
    // for(int i=0;i<n;i++)
    // {
    //     cout << i << " par -> " << parent[i] << endl;
    // }
    if (cycle)
        cout << "Detected Cycle";
    else
        cout << "No Cycle";
    return 0;
}