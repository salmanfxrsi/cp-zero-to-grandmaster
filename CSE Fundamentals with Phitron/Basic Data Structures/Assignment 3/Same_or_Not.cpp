#include <bits/stdc++.h>
using namespace std;

int main()
{

    stack<int> st;
    queue<int> q;
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
        while (!q.empty())
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