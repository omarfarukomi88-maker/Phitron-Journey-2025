#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_any_position(Node *head, int idx, int val)
{
    Node *new_node = new Node(val);
    Node *tmp = head;
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }
    new_node->next = tmp->next;
    tmp->next = new_node;
}
void print_node(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    head->next = a;
    a->next = b;
    b->next = c;

    insert_any_position(head, 3, 2025);
    insert_any_position(head, 3, 2026);
    insert_any_position(head, 3, 2027);
    print_node(head);
    return 0;
}