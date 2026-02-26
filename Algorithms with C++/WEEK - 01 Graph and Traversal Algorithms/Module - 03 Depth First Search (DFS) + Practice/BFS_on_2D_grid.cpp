#include <bits/stdc++.h>
using namespace std;
int r, c;
char grid[105][105];
bool visited[105][105];
vector<pair<int,int>> travel = {{0,1},{0,-1},{-1,0},{1,0}};
int level [105][105];
bool valid(int i, int j)
{
    if (i < 0 || i >= r || j < 0 || j >= c)
    {
        return false;
    }
    else
    {
        return true;
    }
}
void BFS(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    visited[si][sj] = true;
    level[si][sj]=0;
    while (!q.empty())
    {
        pair<int, int> parent = q.front();
        q.pop();

        int par_i = parent.first;
        int par_j = parent.second;
        // cout << par_i << " " << par_j << endl;
        for (int i =0 ;i<4 ;i++)
        {
            int ci = par_i+travel[i].first;
            int cj = par_j+travel[i].second;
            if(valid(ci,cj) && !visited[ci][cj] && grid[ci][cj]=='.')
            {
                q.push({ci,cj});
                visited[ci][cj]=true;
                level[ci][cj]=level[par_i][par_j]+1;
            }
        }
    }
}
int main()
{
    cin >> r >> c;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> grid[i][j];
    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));
    int si, sj;
    cin >> si >> sj;
    BFS(si, sj);
    int dist_i,dist_j;
    cin >> dist_i >> dist_j;
    cout << level[dist_i][dist_j] << endl;
    return 0;
}