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

int total_nodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return 1 + total_nodes(root->left) + total_nodes(root->right);
}

int depth(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return 1 + max(depth(root->left), depth(root->right));
}

bool is_perfectTree(Node *root)
{
    int dep = depth(root);
    int nodes = total_nodes(root);

    int expected_nodes = pow(2, dep) - 1;

    return expected_nodes == nodes;
}

int main()
{

    Node *root = input_tree();

    is_perfectTree(root) ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}