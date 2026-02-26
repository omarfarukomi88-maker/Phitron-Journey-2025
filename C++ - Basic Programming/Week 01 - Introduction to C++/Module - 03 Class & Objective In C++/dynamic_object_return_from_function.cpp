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
    Student *rahim = new Student(1, 8, 4.99); //dynamic object store in a pointer 
    return rahim; //pointer return
}
int main()
{
    Student *obj = fun(); 
    cout << obj->roll << " " << obj->cls << " " << obj->gpa << endl; //print from heep memory using pointer
    return 0;
}