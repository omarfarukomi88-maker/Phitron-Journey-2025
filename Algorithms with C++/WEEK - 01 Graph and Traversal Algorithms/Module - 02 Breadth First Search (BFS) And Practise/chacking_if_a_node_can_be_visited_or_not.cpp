#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool visit[1005];
void BFS(int src)
{
    queue<int> q;
    q.push(src);
    visit[src] = true;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        // cout << parent << " ";
        for (int child : adj_list[parent])
        {
            if (visit[child] == false)
            {
                q.push(child);
                visit[child] = true;
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
    int src, dist;
    cin >> src >> dist;
    memset(visit, false, sizeof(visit));
    BFS(src);
    if (visit[dist] == true)
        cout << "VISITED_YES";
    else
        cout << "NO";

    return 0;
}