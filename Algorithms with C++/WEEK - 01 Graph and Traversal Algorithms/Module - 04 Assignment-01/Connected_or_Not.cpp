#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool visited[1005];
void DFS(int src)
{
    // cout << src << " ";
    visited[src] = true;
    for (int child : adj_list[src])
    {
        if (visited[child] == false)
            DFS(child);
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
        // adj_list[b].push_back(a);
    }
    memset(visited, false, sizeof(visited));
    int q;
    cin >> q;
    while (q--)
    {
        int sr, ds;
        cin >> sr >> ds;
        int flag = 0;
        if (sr == ds)
        {
            cout << "YES\n";
        }
        else
        {
            for (int x : adj_list[sr])
            {
                if (x == ds)
                {
                    flag = 1;
                    cout << "YES\n";
                }
            }
            if (flag == 0)
                cout << "NO\n";
        }
    }

    return 0;
}