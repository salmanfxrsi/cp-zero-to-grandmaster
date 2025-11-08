#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    list<int> l;

    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
};

int main()
{
    myStack l;

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int val;
        cin >> val;
        l.push(val);
    }

    l.pop();
    cout << l.top();

    return 0;
}