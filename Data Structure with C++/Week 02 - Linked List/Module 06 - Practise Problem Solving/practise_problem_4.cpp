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
int size_list(Node *tmp)
{
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
void insert_value(Node *&head, int idx, int val)
{

    Node *tmp = head;
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }
    Node *newnode = new Node(val);
    newnode->next = tmp->next;
    tmp->next = newnode;
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

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int idx, val;
        cin >> idx >> val;
        int size = size_list(head);
        if (idx <= size)
        {
            insert_value(head, idx, val);

            print_list(head);
            cout << endl;
        }
        else
        {
            cout << "invalid" << endl;
        }
    }

    return 0;
}