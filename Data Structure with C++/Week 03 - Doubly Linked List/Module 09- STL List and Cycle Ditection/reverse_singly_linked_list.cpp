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

void reverse_list(Node *&head,Node *& tail, Node *tmp)
{
    if (tmp->next == NULL)
    {
        head = tmp;
        return;
    }
    reverse_list(head,tail, tmp->next);
    tmp->next->next = tmp;
    tmp->next = NULL;
    tail=tmp;

}

void print_list(Node *head)
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

    reverse_list(head,tail, head);

    print_list(head);
    // cout << head->val;
    //  cout << tail->val;
    return 0;
}