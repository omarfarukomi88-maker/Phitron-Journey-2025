#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int flag = 0;
        int count = 2;

        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (s[i] != s[j])
                {
                    flag = 0;
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                count += 2;
            }
            else if (flag == 1)
            {
                count += 1;
            }
        }
        cout << count <<endl;
    }

    return 0;
}