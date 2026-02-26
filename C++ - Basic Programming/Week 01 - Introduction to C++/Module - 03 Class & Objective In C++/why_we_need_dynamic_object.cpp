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
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
Student *fun()
{
    Student karim(1, 5, 5.00); //static object dellet after return
    Student *p = &karim;
    return p;
}
int main()
{
    Student *p = fun();
    cout << p->roll << " " << p->cls << " " << p->gpa << endl;
    return 0;
}