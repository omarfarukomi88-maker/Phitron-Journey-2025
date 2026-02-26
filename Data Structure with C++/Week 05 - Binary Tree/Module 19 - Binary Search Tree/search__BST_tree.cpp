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
        root == NULL;
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
bool search_bst(Node *root, int val)
{
    if (root == NULL)
        return false;
    if (root->value == val)
        return true;

    if (root->value > val)
        return search_bst(root->left, val);
    else
        return search_bst(root->right, val);
}
int main()
{
    Node *root = input_tree();
    int num;
    cin >> num;

    if (search_bst(root, num))
        cout << "FOUND\n";
    else
        cout << "NOT FOUND \n";

    return 0;
}