#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }


   // sort(ar, ar + n);
    int flag = 0;


    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (ar[i] == ar[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            break;
        }
    }


    if (flag == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}