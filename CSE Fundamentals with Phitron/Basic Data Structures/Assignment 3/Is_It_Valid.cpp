#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    queue<string> q;

    while (n--)
    {
        int x;
        cin >> x;

        string s;

        if (x == 0)
        {
            cin >> s;
            q.push(s);
        }
        else
        {
            if (q.empty())
            {
                cout << "Invalid" << endl;
            }
            if (!q.empty())
            {
                cout << q.front() << endl;
                q.pop();
            }
        }
    }

    return 0;
}