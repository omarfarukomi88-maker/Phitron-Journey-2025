#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    string sec;
    int id;
    int math;
    int english;
    int total;
};
bool cmp(Student l, Student r)
{
    return l.total == r.total ? l.id < r.id : l.total > r.total;
}
int main()
{
    int n;
    cin >> n;
    Student ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i].name >> ar[i].cls >> ar[i].sec >> ar[i].id >> ar[i].math >> ar[i].english;
    }
    for (int i = 0; i < n; i++)
    {
        ar[i].total = ar[i].english + ar[i].math;
    }

    sort(ar, ar + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << ar[i].name << " " << ar[i].cls << " " << ar[i].sec << " " << ar[i].id << " " << ar[i].math << " " << ar[i].english << endl;
    }
    return 0;
}