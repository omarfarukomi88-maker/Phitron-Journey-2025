#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *left;
    Node *right;
    Node(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root != NULL)
        q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
        Node *myL;
        Node *myR;
        int l, r;
        cin >> l >> r;
        if (l == -1)
            myL = NULL;
        else
            myL = new Node(l);
        if (r == -1)
            myR = NULL;
        else
            myR = new Node(r);
        p->left = myL;
        p->right = myR;
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
void print_level(Node *root)
{
    queue<Node *> q;
    if (root != NULL)
        q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        cout << p->value << " ";

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
}
void insert_bst(Node *&root, int val)
{
    if (root == NULL)
        root = new Node(val);
    if (root->value > val)
    {
        if (root->left)
            insert_bst(root->left, val);
        else
            root->left = new Node(val);
    }
    else
    {
          if (root->right)
            insert_bst(root->right, val);
        else
            root->right = new Node(val);
    }
}
int main()
{
    Node *root = input_tree();
    int val;
    cin >> val;
    insert_bst(root, val);
    print_level(root);
}