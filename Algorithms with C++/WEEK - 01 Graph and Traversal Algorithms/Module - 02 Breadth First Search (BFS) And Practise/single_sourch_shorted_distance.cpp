#include <bits/stdc++.h>
using namespace std;
vector<int> abs_list[1005];
bool visit[1005];
int level[1005];
void BFS(int src)
{
    queue<int> q;
    q.push(src);
    visit[src] = true;
    level[src] = 0;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        for (int child : abs_list[parent])
        {
            if (visit[child] == false)
            {
                q.push(child);
                visit[child] = true;
                level[child] = level[parent] + 1;
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
        abs_list[a].push_back(b);
        abs_list[b].push_back(a);
    }
    memset(visit, false, sizeof(visit));
    memset(level, -1, sizeof(level));
    int src, dist;
    cin >> src >> dist;
    BFS(src);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << i << "->" << level[i] << endl;
    // }

    cout << level[dist] << endl;

    return 0;
}