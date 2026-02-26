#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        string s, x;
        cin >> s >> x;

        int s_sz = s.size();
        int x_sz = x.size();
        int count = 1;
        for (int i = 0; i < s_sz; i++)
        {
            if (s[i] == x[0])
            {
                for (int j = i + 1, k = 1; k < x_sz; j++, k++)
                {
                    if (s[j] == x[k])
                    {
                        count++;
                    }
                }
                if (count == x_sz)
                {
                    s.replace(i, x_sz, "#");
                }
                count = 1;
            }
                
        }
        cout << s << endl;
    }

    return 0;
}