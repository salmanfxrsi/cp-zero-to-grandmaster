#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    string S;

    for (int i = 0; i < T; i++)
    {
        cin >> S;

        if (S.find("101") != -1 || S.find("010") != -1)
        {
            cout << "Good" << endl;
        }
        else
        {
            cout << "Bad" << endl;
        }
    }

    return 0;
}