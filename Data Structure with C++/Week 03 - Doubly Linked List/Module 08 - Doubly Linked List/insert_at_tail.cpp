#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print_forward(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);

    while (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
int main()
{
    Node *head = new Node(101);
    Node *a = new Node(202);
    Node *tail = new Node(303);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    insert_tail(head, tail, 2025);
    insert_tail(head, tail, 2026);
    print_forward(head);

    return 0;
}