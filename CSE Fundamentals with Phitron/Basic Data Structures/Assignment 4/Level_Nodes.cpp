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

void print_level_l(Node *root, int l)
{
    if (!root)
    {
        cout << "Invalid" << endl;
    }

    queue<pair<Node *, int>> q;
    q.push({root, 0});
    bool found = false;

    while (!q.empty())
    {
        Node *cur = q.front().first;
        int level = q.front().second;
        q.pop();

        if (level == l)
        {
            cout << cur->val << " ";
            found = true;
        }

        if (level > l)
        {
            break;
        }

        if (cur->left)
        {
            q.push({cur->left, level + 1});
        }

        if (cur->right)
        {
            q.push({cur->right, level + 1});
        }
    }

    if (!found)
    {
        cout << "Invalid";
    }
}

int main()
{

    Node *root = input_tree();

    int l;
    cin >> l;

    print_level_l(root, l);

    return 0;
}