#include <bits/stdc++.h>
using namespace std;

class My_stack
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

    bool empty()
    {
        return v.empty();
    }
};

class my_queue
{
public:
    list<int> l;

    void push(int val)
    {
        l.push_back(val);
    }

    void pop()
    {
        l.pop_front();
    }

    int front()
    {
        return l.front();
    }
};

int main()
{

    My_stack st;
    my_queue q;

    int N, M;
    cin >> N >> M;

    int is_same = true;

    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    for (int i = 0; i < M; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    if (N != M)
    {
        is_same = false;
    }
    else
    {
        while (!st.empty())
        {
            if (q.front() != st.top())
            {
                is_same = false;
                break;
            }

            q.pop();
            st.pop();
        }
    }

    if (is_same)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}