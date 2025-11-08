#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

bool isPalindrome(Node *head, Node *tail)
{

    while (head != NULL && tail != NULL && head != tail && head->prev != tail)
    {
        if (head->val != tail->val)
        {
            return false;
        }

        head = head->next;
        tail = tail->prev;
    }

    return true;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;

    while (cin >> val && val != -1)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    isPalindrome(head, tail) ? cout << "YES" : cout << "NO";

    return 0;
}