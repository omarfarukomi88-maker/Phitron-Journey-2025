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
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}
void dellet_tail(Node *head, Node *&tail)
{
    Node *tmp = head;
    while (tmp->next->next != NULL)
    {
        tmp = tmp->next;
    }
   
    tmp->next = NULL;
    delete (tail);
    tail = tmp;
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
    cout << "tail before delete : " << tail->val << endl;
    dellet_tail(head, tail);
    print_list(head);
    cout << "tail after delete : " << tail->val << endl;
    return 0;
}