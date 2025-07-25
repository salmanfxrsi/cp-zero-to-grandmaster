#include<bits/stdc++.h>
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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->prev = tail;
    tail->next = newnode;
    tail = newnode;
} 

int main()
{
    Node *head = NULL;
    // Node *a = new Node(20);
    Node *tail = NULL;

    // head->next = a;
    // a->prev = head;

    // a->next = tail;
    // tail->prev = a;

    insert_at_tail(head, tail, 40);
    insert_at_tail(head, tail, 50);
    insert_at_tail(head, tail, 60);

    print_forward(head);
    return 0;
}