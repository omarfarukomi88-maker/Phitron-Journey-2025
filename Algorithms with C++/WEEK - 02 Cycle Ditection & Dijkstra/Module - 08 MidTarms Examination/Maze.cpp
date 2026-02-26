
#include <bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool visited[1005][1005];
int level[1005][1005];
int n, m;
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}
void bfs(int si, int sj)
{

    queue<pair<int, int>> q;
    q.push({si, sj});
    visited[si][sj] = true;
    level[si][sj] = 0;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;
        for (int i = 0; i < 4; i++)
        {
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;

            if (valid(ci, cj) && !visited[ci][cj] && (grid[ci][cj] == 'D' || grid[ci][cj] == '.'))
            {

                q.push({ci, cj});
                visited[ci][cj] = true;
                level[ci][cj] = level[par_i][par_j] + 1;
            }
        }
    }
}

void cng(int di, int dj)
{
    int ni = -1;
    int nj = -1;
    if (!visited[di][dj])
        return;
    int mn = INT_MAX;

    for (int i = 0; i < 4; i++)
    {
        int ci = di + d[i].first;
        int cj = dj + d[i].second;

        if (valid(ci, cj) && grid[ci][cj]=='.' && level[ci][cj] < level[di][dj])
        {
                ni = ci;
                nj = cj;
            
        }
    }
    if (ni == -1 && nj == -1)
        return;
    if (level[ni][nj] == 0)
        return;
    grid[ni][nj] = 'X';
    cng(ni, nj);
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 'R')
            {
                bfs(i, j);
                break;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 'D')
            {
                cng(i, j);
            }
            // cout << level[i][j] <<" ";
        }
        // cout << endl;
    }
    // cout << level[1][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << grid[i][j];
        }
        cout << endl;
    }
    return 0;
}