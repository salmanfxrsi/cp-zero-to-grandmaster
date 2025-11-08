#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    for (int i = 0; i < t; i++)
    {

        string s, x;

        cin >> s >> x;

        for (size_t i = 0; i < s.size(); i++)
        {
            if (s[i] == x[0])
            {
                if (s.substr(i, x.length()) == x)
                {
                    s.replace(i, x.length(), "#");
                }
            }
        }

        cout << s << endl;
    }

    return 0;
}
