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
        this->left = NULL;
        this->right = NULL;
        this->value = value;
    }
};
Node *convert(int ar[], int n, int l, int r)
{
    if (l > r)
        return NULL;
    int mid = (l + r) / 2;
    Node *root = new Node(ar[mid]);
    Node *left = convert(ar, n, l, r - mid);
    Node *right = convert(ar, n, l + mid, r);
    root->left = left;
    root->right = right;
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
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    Node *root = convert(ar, n, 0, n - 1);
    print_level(root);
}
