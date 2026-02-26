#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
int main()
{
    int n;
    cin >> n;
    Student ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i].name >> ar[i].roll >> ar[i].marks;
    }
    Student tmp;
    for (int i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        tmp = ar[i];
        ar[i] = ar[j];
        ar[j] = tmp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << ar[i].name << " " << ar[i].roll << " " << ar[i].marks << endl;
    }
    return 0;
}