#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        // (*this).roll = roll; // perameter er name akoi rakhte amra this pointer use kori
        // (*this).cls = cls;  //this akta pointer .. erjonno dereference kore roll cls gpa er valu acces kori
        // (*this).gpa = gpa;

        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;

        // cout << this<<endl; this er modde object name er addrasse store thake
    }
};

int main()
{
    Student rahim(10, 8, 4.59);
    Student karim(4, 10, 5.00);

    // cout << &rahim <<endl; //this and rahim karim er addrase name akoi
    // cout << &karim <<endl;

    cout << "Class:" << rahim.cls << " " << "Roll:" << rahim.roll << " " << "GPA:" << rahim.gpa << endl;
    cout << "Class:" << karim.cls << " " << "Roll:" << karim.roll << " " << "GPA:" << karim.gpa << endl;
    return 0;
}