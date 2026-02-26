#include <bits/stdc++.h>
using namespace std;
int r, c;
char grid[105][105];
bool visited[105][105];
vector<pair<int, int>> travel = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
bool valid(int i, int j)
{
    if (i < 0 || i >= r || j < 0 || j >= c)
        return false;
    else
        return true;
}
void DFS(int si, int sj)
{
    cout << si << " " << sj << endl;
    visited[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci, cj;
        ci = si + travel[i].first;
        cj = sj + travel[i].second;
        if (visited[ci][cj] == false && valid(ci,cj) == true)
        {
            DFS(ci, cj);
        }
    }
}
int main()
{
    cin >> r >> c;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> grid[i][j];
    int si, sj;
    cin >> si >> sj;
    memset(visited, false, sizeof(visited));
    DFS(si, sj);
    return 0;
}