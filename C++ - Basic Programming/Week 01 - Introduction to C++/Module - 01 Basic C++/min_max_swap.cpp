#include<iostream>
#include<algorithm>
using namespace std;
int main ()
{
    int a,b;
    cin >> a >> b;

    // if(a>b)
    // {
    //     cout << b << endl;
    // }
    // else
    // {
    //     cout << a << endl;
    // }
    cout << min(a,b) << endl;
    cout << max(a,b) << endl;
    
    cout << min({10,20,30,52,2,03,5,5,44,32,55}) << " ";
    cout << max({10,20,30,52,2,03,5,5,44,32,586})<<endl;
   
    // int tmp=a;
    // a=b;
    // b=tmp;
    swap(a,b);
    cout << a << " " << b <<endl;

    // cout << max(a,b) <<endl << min (a,b) <<endl;



    return 0;
}
