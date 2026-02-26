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

void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
void remove_dup(Node *&head, Node *&tail)
{
    for (Node *i = head; i != NULL; i = i->next)
    {
        Node *tmp = i;
        for (Node *j = i->next; j != NULL;)
        {
            if (i->val == j->val)
            {

                tmp->next = j->next;
                j = tmp->next;
            }
            else
            {
                tmp = tmp->next;
                j = j->next;
            }
        }
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int num;
    while (true)
    {
        cin >> num;
        if (num == -1)
        {
            break;
        }
        insert_tail(head, tail, num);
    }

    remove_dup(head, tail);

    print_list(head);

    return 0;
}