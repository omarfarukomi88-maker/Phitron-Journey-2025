#include <bits/stdc++.h>
using namespace std;
int main()
{
    // char s[15]="omarfaruk";
    // strcpy(s,"mdomarfaruk");
    // char s2[15]="mdomarfaruk";
    // if(strcmp(s,s2)==0)
    // {
    //     cout << "same "<<endl;
    // }
    // else 
    // {
    //     cout << "Not "<< endl;
    // }

    string s = "omar faruk";
   // s = "md omar faruk omi";
    string s2="md omar faruk";
    if(s==s2)
    {
        cout << "same" << endl;
        cout << s << endl;
        
    }
    else
    {
        cout << "not same"<< endl;
        cout << s << endl;
        cout << s2 << endl;
    }
    
    return 0;
}