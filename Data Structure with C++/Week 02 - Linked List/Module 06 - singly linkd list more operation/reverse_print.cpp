#include <bits/stdc++.h>
using namespace std;
void recursion(int x, int idx)
{
    if (idx > 5)
    {
        return;
    }
    recursion(x, idx + 1);
    cout << idx << endl;
}
int main()
{
    int x = 10;
    recursion(x, 1);
    return 0;
}