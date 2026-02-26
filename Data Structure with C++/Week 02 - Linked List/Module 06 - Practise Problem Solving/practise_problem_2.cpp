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
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    tail->next = newnode;
    tail = newnode;
}
void print_reverse(Node *head)
{
    Node *tmp = head;
    while (tmp == NULL)
    {
        return;
    }
    print_reverse(tmp->next);
    cout << tmp->value << endl;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int x;
    while (true)
    {
        cin >> x;
        if (x == -1)
        {
            break;
        }
        insert_tail(head, tail, x);
    }
    print_reverse(head);

    return 0;
}