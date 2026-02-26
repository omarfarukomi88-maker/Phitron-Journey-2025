#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int h, x, y;
        cin >> h >> x >> y;
        int count1 = h * x;
        int count2 = 0;
        if (h % 2 == 0)
        {
            count2 = (h / 2) * y;
        }
        else
        {
            count2=((h/2)*y)+x;
        }
        cout << max(count1,count2) <<endl;
    }

    return 0;
}