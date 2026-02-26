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
//____________________assending order sorting________________________
void sort_linked_list(Node *head)
{

    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val > j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
}
//____________________desending order sorting________________________
// void sort_linked_list(Node *head)
// {
//     Node *tmp = head;
//     // for(Node *i=tmp;i->next!=NULL;i=i->next) //loop akbar kom hobe
//     for (Node *i = tmp; i != NULL; i = i->next) // loop akbar beshi hobr
//     {
//         for (Node *j = i->next; j != NULL; j = j->next)
//         {
//             if (i->val < j->val)
//             {
//                 swap(i->val, j->val);
//             }
//         }
//     }
// }
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
    sort_linked_list(head);
    print_list(head);

    return 0;
}