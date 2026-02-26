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
int max_list(Node *head)
{
    Node *tmp = head;
    int max = INT_MIN;
    while (tmp != NULL)
    {
        if (max < tmp->val)
        {
            max = tmp->val;
        }
        tmp = tmp->next;
    }
    return max;
}
int min_list(Node *head)
{
    Node *tmp = head;
    int max = INT_MAX;
    while (tmp != NULL)
    {
        if (max > tmp->val)
        {
            max = tmp->val;
        }
        tmp = tmp->next;
    }
    return max;
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
    int maximum = max_list(head);
    int minimum = min_list(head);
    cout << maximum - minimum << endl;
    return 0;
}