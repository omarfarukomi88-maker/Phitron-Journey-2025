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

        int l, r;
        cin >> l >> r;
        Node *myL, *myR;
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
int count_leaf(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    int l = count_leaf(root->left);
    int r = count_leaf(root->right);
    return l + r;
}
int main()
{
    Node *root = input_tree();
    int leafNodes = count_leaf(root);
    cout << leafNodes ;
    return 0;
}