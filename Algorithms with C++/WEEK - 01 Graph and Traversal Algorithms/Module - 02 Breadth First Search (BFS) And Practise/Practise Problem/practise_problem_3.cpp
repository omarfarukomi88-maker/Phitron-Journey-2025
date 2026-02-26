#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool visited[1005];
int parent[1005];
void BFS(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();

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

    int q;
    cin >> q;
    while (q--)
    {
        int s, d;
        cin >> s >> d;
        memset(visited, false, sizeof(visited));
        memset(parent, -1, sizeof(parent));
        BFS(s);
        if (visited[d])
        {
            vector<int> path;
            int node = d;
            while (node != s)
            {
                path.push_back(node);
                node = parent[node];
            }

            cout << path.size() << endl;
        }
        else
            cout << -1 << endl;
    }

    return 0;
}