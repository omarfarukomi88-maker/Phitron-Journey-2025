#include <bits/stdc++.h>
using namespace std;
int grid[10][10];
bool visited[10][10];
int level[10][10];
vector<pair<int, int>> d = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {-1, -2}, {1, -2}, {1, 2}, {-1, 2}};
bool valid(int i, int j)
{
    if (i < 1 || i > 8 || j < 1 || j > 8)
        return false;
    return true;
}
void bfs(int si, int sj)
{

    queue<pair<int, int>> q;
    q.push({si, sj});
    visited[si][sj] = true;
    level[si][sj]=0;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;
        for (int i = 0; i < 8; i++)
        {
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;

            if (!visited[ci][cj] && valid(ci, cj))
            {
                q.push({ci, cj});
                visited[ci][cj] = true;
                level[ci][cj] = level[par_i][par_j] + 1;
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        memset(visited, false, sizeof(visited));
        memset(level, -1, sizeof(level));
        int src_i = a[0] - 'a' + 1;
        int src_j = a[1] - '0';
        int ds_i = b[0] - 'a' + 1;
        int ds_j = b[1] - '0';
        bfs(src_i, src_j);
        cout << level[ds_i][ds_j] << endl;
    }

    return 0;
}