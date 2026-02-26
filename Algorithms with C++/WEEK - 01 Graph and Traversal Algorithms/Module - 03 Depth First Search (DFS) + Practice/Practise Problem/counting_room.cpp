#include <bits/stdc++.h>
using namespace std;
int n, m;
char grid[1005][1005];
bool visited[1005][1005];
vector<pair<int, int>> travel = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
    {
        return false;
    }
    else
    {
        return true;
    }     
}

void DFS(int si, int sj)
{
    visited[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + travel[i].first;
        int cj = sj + travel[i].second;
        if (valid(ci, cj) && !visited[ci][cj] && grid[ci][cj]=='.')
        {
            DFS(ci, cj);
        }
    }
}
int main()
{

    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];
    memset(visited, false, sizeof(visited));
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visited[i][j] && grid[i][j]=='.')
            {
                cnt++;
                DFS(i, j);
            }
        }
    }
    cout << cnt;
    return 0;
}