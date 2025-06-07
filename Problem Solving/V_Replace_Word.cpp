#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    while (true)
    {
        int index = S.find("EGYPT");
        if (index == -1)
            break;
        S.replace(index, 5, " ");
    }

    cout << S << endl;

    return 0;
}