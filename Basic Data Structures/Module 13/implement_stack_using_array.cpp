#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> v;

    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
    }
};

int main()
{
    myStack v;

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int val;
        cin >> val;
        v.push(val);
    }

    cout << v.top();

    return 0;
}