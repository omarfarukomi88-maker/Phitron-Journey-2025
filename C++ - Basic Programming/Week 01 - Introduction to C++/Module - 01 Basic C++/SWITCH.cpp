#include<iostream>
using namespace std;
int main()
{

    int day;
    cin >> day;

    switch(day)
    {
        case 1:
        cout<< "Saturday"<<endl;
        return 0;
        case 2:
        cout<< "Sunday"<<endl;
        return 0;
        case 3:
        cout<< "Monday"<<endl;
        return 0;
        case 4:
        cout<< "thusday"<<endl;
        return 0;
        case 5:
        cout<< "wednesday"<<endl;
        return 0;
        case 6:
        cout<< "tharsday"<<endl;
        return 0;
        case 7:
        cout<< "Friday"<<endl;
        return 0;

        default :
         cout << "Wrong Input" << endl;
    }
    return 0;
}