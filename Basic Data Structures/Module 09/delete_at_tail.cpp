#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void delete_at_tail(Node *head, Node *&tail)
{
    Node *deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;

    if (tail == NULL)
    {
        head = NULL;
        return;
    }

    tail->next = NULL;
}

void print_forward(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_backward(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->data << " ";
        tmp = tmp->prev;
    }
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    delete_at_tail(head, tail);

    print_forward(head);

    return 0;
}