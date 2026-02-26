#include <bits/stdc++.h>
using namespace std;
int n, m, x;
char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}
void dfs(int si, int sj)
{
    vis[si][sj] = true;
    x++;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (!vis[ci][cj] && valid(ci, cj) && grid[ci][cj] == '.')
        {
            vis[ci][cj] = true;
            dfs(ci, cj);
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    memset(vis, false, sizeof(vis));
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == '.' && !vis[i][j])
            {
                dfs(i, j);
                ans.push_back(x);
                x = 0;
            }
        }
    }
    if (ans.empty())
        cout << "-1";
    else
        cout << min(ans.front(), ans.back());

    return 0;
}