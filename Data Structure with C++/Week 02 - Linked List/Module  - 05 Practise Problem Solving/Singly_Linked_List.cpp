#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
};
int main()
{
    Node a, b, c;
    a.value = 100;
    b.value = 200;
    c.value = 300;

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    cout << a.value << " " << a.next->value << " " << a.next->next->value;

    return 0;
}