#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool visit[1005];
// int level[1005];
int parent[1005];
void BFS(int src)
{
    queue<int> q;
    q.push(src);
    visit[src] = true;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        for (int child : adj_list[par])
        {
            if (visit[child] == false)
            {
                q.push(child);
                visit[child] = true;
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
    memset(visit, false, sizeof(visit));
    memset(parent, -1, sizeof(parent));
    int src, dist;
    cin >> src >> dist;
    BFS(src);
    // for(int i=0;i<n;i++) //printing parent
    // {
    //     cout<< i  << " parent -> " << parent[i] <<endl;
    // }
    vector<int> path;
    int node = dist;
    while (node != -1)
    {
        // cout << node << " ";
        path.push_back(node);
        node = parent[node];
    }
    reverse(path.begin(), path.end());
    for (int x : path)
    {
        cout << x << " ";
    }
    return 0;
}