#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
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
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;

        if (l == -1)
        {
            myLeft = NULL;
        }
        else
        {
            myLeft = new Node(l);
        }

        if (r == -1)
        {
            myRight = NULL;
        }
        else
        {
            myRight = new Node(r);
        }

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
        {
            q.push(p->left);
        }

        if (p->right)
        {
            q.push(p->right);
        }
    }

    return root;
}

void collect_leaf_nodes(Node *root, vector<int> &leaves)
{
    vector<int> l;
    if (root == NULL)
    {
        return;
    }

    if (root->left == NULL && root->right == NULL)
    {
        leaves.push_back(root->val);
    }

    collect_leaf_nodes(root->left, leaves);
    collect_leaf_nodes(root->right, leaves);
}

int main()
{

    Node *root = input_tree();
    vector<int> leaves;
    collect_leaf_nodes(root, leaves);

    sort(leaves.rbegin(), leaves.rend());

    for (int val : leaves)
    {
        cout << val << " ";
    }

    return 0;
}