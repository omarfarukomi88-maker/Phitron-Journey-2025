#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    string sec;
    int id;
};
int main()
{
    int n;
    cin >> n;
    Student ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i].name >> ar[i].cls >> ar[i].sec >> ar[i].id;
    }
    string tmp;
    for (int i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        tmp = ar[i].sec;
        ar[i].sec = ar[j].sec;
        ar[j].sec = tmp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << ar[i].name << " " << ar[i].cls << " " << ar[i].sec << " " << ar[i].id << endl;
    }
    return 0;
}