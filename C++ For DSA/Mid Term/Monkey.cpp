#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    while (getline(cin, str))
    {
        sort(str.begin(), str.end());
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] != ' ')
                cout << str[i];
        }
        cout << endl;
    }

    return 0;
}