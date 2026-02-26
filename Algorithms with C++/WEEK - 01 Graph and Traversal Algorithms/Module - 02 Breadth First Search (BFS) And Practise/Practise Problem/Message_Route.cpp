#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[100005];
bool visited[100005];
int parent[100005];
void BFS(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        // cout << par << " ";
        for (int child : adj_list[par])
        {
            if (visited[child] == false)
            {
                q.push(child);
                visited[child] = true;
                parent[child] = par;
            }
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
    BFS(1);
    vector<int> path;
    int node = n;
    while (node != -1)
    {
        path.push_back(node);
        node = parent[node];
    }
    if (visited[1] == visited[n])
    {
        cout << path.size() << endl;
        reverse(path.begin(), path.end());
        for (int x : path)
        {
            cout << x << " ";
        }
    }
    else
        cout << "IMPOSSIBLE";

    return 0;
}