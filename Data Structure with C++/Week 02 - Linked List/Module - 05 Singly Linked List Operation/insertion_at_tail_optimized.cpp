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
void insert_tail(Node *&head, Node *&tail, int val)
{

    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    tail->next = new_node;
    tail = new_node;
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
    Node *tail = new Node(30);

    // Node *head = NULL;
    // Node *tail = NULL;
    head->next = a;
    a->next = tail;

    insert_tail(head, tail, 4040);
    insert_tail(head, tail, 2025);
    insert_tail(head, tail, 2050);
    print_node(head);
    cout << "Tail = " << tail->val << endl;
    return 0;
}