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

void insert_any_position(Node *head, int idx, int val)
{
    Node *newnode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }

    newnode->next = tmp->next;
    tmp->next->prev = newnode;
    newnode->prev = tmp;
    tmp->next = newnode;
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

    insert_any_position(head, 2, 2026);
    print_forward(head);

    return 0;
}