#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;
                                    // contstactor is a special type function
    Student(int r, int c, double g) // constractor deckare in class
    {                               // constractor name same as class name
        roll = r;
        cls = c;
        gpa = g;
    }
};

int main()
{
    // Student rahim;
    //     rahim.roll=10;
    //     rahim.cls=5;
    //     rahim.gpa=3.56;
    //     cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    // Student karim;
    //     karim.roll=15;
    //     karim.cls=5;
    //     karim.gpa=4.00;
    //     cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;

    Student rahim(1, 5, 3.56); // constractor call with object
    Student a(2, 4, 4.25);     // constractor call with object
    Student b(15, 6, 3.86);    // constractor call with object
    Student c(16, 8, 4.56);    // constractor call with object
    Student d(11, 10, 5.00);    // constractor call with object
    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << a.roll << " " << a.cls << " " << a.gpa << endl;
    cout << b.roll << " " << b.cls << " " << b.gpa << endl;
    cout << c.roll << " " << c.cls << " " << c.gpa << endl;
    cout << d.roll << " " << d.cls << " " << d.gpa << endl;

    // Student rahim;
    // cin >> rahim.roll >> rahim.cls >> rahim.gpa;
    // cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;

    return 0;
}