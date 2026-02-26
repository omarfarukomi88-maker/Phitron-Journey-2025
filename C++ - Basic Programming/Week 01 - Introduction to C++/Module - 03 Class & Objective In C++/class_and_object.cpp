#include <bits/stdc++.h>
using namespace std;
class Student // user define class
{
public:
    char name[100];
    int roll;
    double gpa;
};
int main()
{
    // int a =10; build in  varriable

    // Student a;  //user define object varriable
    // a.roll = 10;
    // a.gpa = 4.50;
    // char tmp[100] = "OmarFaruk";
    // strcpy(a.name, tmp);

    // cout << a.name << " " << a.roll << " " << a.gpa << endl;

    Student a, b;
    a.name;
    a.roll;
    a.gpa;
    cin.getline(a.name, 100); //cin.getline for input space 
    cin >> a.roll >> a.gpa;
    cout << a.name << " " << a.roll << " " << a.gpa << endl;

    cin.ignore(); //ignor bcz previous enter key input by getline 
    cin.getline(b.name,100);
    cin >> b.roll >> b.gpa;
    cout << b.name << " " << b.roll << " " << b.gpa << endl;

    return 0;
}