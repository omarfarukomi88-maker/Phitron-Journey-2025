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
void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
}

void sort_list(Node *tmp)
{
    for (Node *i = tmp; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->value < j->value)
            {
                swap(i->value, j->value);
            }
        }
    }
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
    sort_list(head);
    print_list(head);

    return 0;
}