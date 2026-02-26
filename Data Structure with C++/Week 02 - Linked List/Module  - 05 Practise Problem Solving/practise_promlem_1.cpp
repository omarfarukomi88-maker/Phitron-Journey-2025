#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
void count_list(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    cout << count << endl;
}
int main()
{
    // Node *head = new Node(2);
    // Node *a = new Node(1);
    // Node *b = new Node(5);
    // Node *c = new Node(3);
    // Node *d = new Node(4);
    // Node *e = new Node(8);
    // Node *f = new Node(9);

    Node *head = new Node(5);
    Node *a = new Node(1);
    Node *b = new Node(4);
    Node *c = new Node(5);
    // head->next = a;
    // a->next = b;
    // b->next = c;
    // c->next = d;
    // d->next = e;
    // e->next = f;
    head->next = a;
    a->next = b;
    b->next = c;
    count_list(head);

    return 0;
}
