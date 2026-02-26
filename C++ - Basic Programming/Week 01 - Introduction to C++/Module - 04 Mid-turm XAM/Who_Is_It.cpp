#include <bits/stdc++.h>
using namespace std;
class Std
{
public:
    int roll;
    char name[101];
    char sec;
    int total;
};
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        Std s1;
        cin >> s1.roll >> s1.name >> s1.sec >> s1.total;
        Std s2;
        cin >> s2.roll >> s2.name >> s2.sec >> s2.total;
        Std s3;
        cin >> s3.roll >> s3.name >> s3.sec >> s3.total;

        if (s1.total > s2.total && s1.total > s3.total)
        {
            cout << s1.roll << " " << s1.name << " " << s1.sec << " " << s1.total << endl;
        }

        else if (s2.total > s1.total && s2.total > s3.total)
        {
            cout << s2.roll << " " << s2.name << " " << s2.sec << " " << s2.total << endl;
        }

        else if (s3.total > s2.total && s3.total > s1.total)
        {
            cout << s3.roll << " " << s3.name << " " << s3.sec << " " << s3.total << endl;
        }

        else if (s1.total == s2.total)
        {
            if (s1.roll < s2.roll)
            {
                cout << s1.roll << " " << s1.name << " " << s1.sec << " " << s1.total << endl;
            }
            else
            {
                cout << s2.roll << " " << s2.name << " " << s2.sec << " " << s2.total << endl;
            }
        }
        else if (s1.total == s3.total)
        {
            if (s1.roll < s3.roll)
            {
                cout << s1.roll << " " << s1.name << " " << s1.sec << " " << s1.total << endl;
            }
            else
            {
                cout << s3.roll << " " << s3.name << " " << s3.sec << " " << s3.total << endl;
            }
        }
        else if (s2.total == s3.total)
        {
            if (s2.roll < s3.roll)
            {
                cout << s2.roll << " " << s2.name << " " << s2.sec << " " << s2.total << endl;
            }
            else
            {
                cout << s3.roll << " " << s3.name << " " << s3.sec << " " << s3.total << endl;
            }
        }
    }

    return 0;
}