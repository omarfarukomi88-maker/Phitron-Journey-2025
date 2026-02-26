#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int e=0;
    int g=0;
    int y=0;
    int p=0;
    int t=0;
    

    for(int i=0;i<s.size();i++)
    {
        if(s[i] == 'E' || s[i]== 'e')
        {
           e+=1;
        }
        else if(s[i] == 'G' || s[i]== 'g')
        {
           g+=1;
        }
        else if(s[i] == 'Y' || s[i]== 'y')
        {
           y+=1;
        }
       else if(s[i] == 'P' || s[i]== 'p')
        {
           p+=1;
        }
        else if(s[i] == 'T' || s[i]== 't')
        {
           t+=1;
        }
    }
   //cout << max({e,g,y}) <<endl;

    cout << min({e,g,y,p,t}) <<endl;
    return 0;
}