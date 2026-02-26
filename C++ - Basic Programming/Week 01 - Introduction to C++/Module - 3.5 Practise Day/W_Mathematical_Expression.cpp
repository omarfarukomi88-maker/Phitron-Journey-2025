#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1;
    char c; // + - *
    int n2;
    char s; // =
    int r;
    cin >> n1 >> c >> n2 >> s >> r;

    if(c=='+')
    {
        if(n1+n2==r)
        {
            cout << "Yes";
        }
        else
        {
            cout << n1+n2;
        }
    }
    else if (c=='-')
    {
          if(n1-n2==r)
        {
            cout << "Yes";
        }
        else
        {
            cout << n1-n2;
        }
    }
    else if(c=='*')
    {
          if(n1*n2==r)
        {
            cout << "Yes";
        }
        else
        {
            cout << n1*n2;
        }
    }
    return 0;
}