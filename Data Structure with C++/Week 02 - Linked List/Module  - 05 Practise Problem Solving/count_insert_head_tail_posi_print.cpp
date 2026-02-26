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
//_______________________________count list_________________________________
void count_list(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        tmp = tmp->next;
        count++;
    }
    cout << count << endl;
}
//_______________________________print list_________________________________
void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << endl;
        tmp = tmp->next;
    }
}
//_______________________________insert value in head_________________________________
void insert_head(Node *&head, int value)
{
    Node *new_node = new Node(value);
    if (head == NULL)
    {
        head = new_node;
    }
    new_node->next = head;
    head = new_node;
}
//_______________________________insert value in tail_________________________________
void insert_tail(Node *head, Node *&tail, int value)
{
    Node *new_node = new Node(value);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
    }
    tail->next = new_node;
    tail = new_node;
}
//_______________________________insert in specific position_________________________________
void insert_index(Node *head, int idx, int value)
{
    Node *new_node = new Node(value);
    Node *tmp = head;
    for (int i = 1; i < idx - 1; i++)
    {
        tmp = tmp->next;
    }
    new_node->next = tmp->next;
    tmp->next = new_node;
}
int main()
{
    Node *head = new Node(100);
    Node *a = new Node(200);
    Node *tail = new Node(300);

    head->next = a;
    a->next = tail;

    insert_head(head, 2023);
    // insert_head(head, 2024);
    // insert_head(head, 2025);
    insert_tail(head, tail, 2026);
    // insert_tail(head, tail, 2027);
    // insert_tail(head, tail, 2028);
    insert_index(head, 3, 49496090);
    count_list(head);
    print_list(head);

    return 0;
}