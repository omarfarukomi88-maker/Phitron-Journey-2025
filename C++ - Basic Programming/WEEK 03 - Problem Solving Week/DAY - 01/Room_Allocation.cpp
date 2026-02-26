#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int clg;
        cin >> clg;
        int std[clg];
        for (int i = 0; i < clg; i++)
        {
            cin >> std[i];
        }
        int room=0;
        for (int i = 0; i < clg; i++)
        {
            if(std[i] ==1)
            {
                room +=1;
            }
            else
            {
                if(std[i]%2==0)
                {
                    room+=std[i]/2;
                }
                else
                {
                    int val=std[i]/2;
                    room+=val+1;
                }
            }
            
        }
        cout << room <<endl;

    }
    return 0;
}