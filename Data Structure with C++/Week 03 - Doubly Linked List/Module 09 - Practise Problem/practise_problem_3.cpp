#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 6;
    while (t--)
    {
        list<int> l;
        int x;
        while (true)
        {
            cin >> x;
            if (x == -1)
                break;
            l.push_back(x);
        }
        int flag = 0;
        int s = l.size() / 2;
        while (s--)
        {
            if (l.front() != l.back())
            {
                flag = 1;
                break;
            }
            l.pop_back();
            l.pop_front();
        }
        if (flag == 1)
            cout << "Not palindrom" << endl;
        else
            cout << "pelindrome" << endl;
    }

    return 0;
}