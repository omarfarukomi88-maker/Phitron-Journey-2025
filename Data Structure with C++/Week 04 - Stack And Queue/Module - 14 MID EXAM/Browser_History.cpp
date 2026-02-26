#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<string> l;
    while (true)
    {
        string s;
        cin >> s;
        if (s == "end")
        {
            break;
        }
        l.push_back(s);
    }
    auto track = l.begin();
    int t;
    cin >> t;
    while (t--)
    {
        string cmd;
        cin >> cmd;

        if (cmd == "visit")
        {
            string cmd2;
            cin >> cmd2;
            int flag = 0;
            for (auto it = l.begin(); it != l.end(); it++)
            {
                if (*it == cmd2)
                {
                    track = it;
                    flag = 1;
                    cout << *it << endl;
                    break;
                }
            }
            if (flag == 0)
                cout << "Not Available" << endl;
        }
        else if (cmd == "next")
        {
           auto tmp= track;
           tmp++;
            if (tmp != l.end())
            {
                
                cout << *tmp << endl;
                track =tmp;
            }
            else
                cout << "Not Available" << endl;
        }
        else if (cmd == "prev")
        {

            if (track != l.begin())
            {
                track--;
                cout << *track << endl;
            }
            else
                cout << "Not Available" << endl;
        }
    }

    return 0;
}