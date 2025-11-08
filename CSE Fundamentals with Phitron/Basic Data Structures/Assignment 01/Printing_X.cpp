#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int gapLeft = 0;
    int gapMiddle = N - 2;

    for (int i = 1; i <= (N / 2); i++)
    {
        if (gapLeft != 0)
        {
            for (int j = 1; j <= gapLeft; j++)
            {
                cout << " ";
            }
        }

        cout << "\\";

        for (int j = 1; j <= gapMiddle; j++)
        {
            cout << " ";
        }

        cout << "/" << endl;

        gapLeft++;
        gapMiddle -= 2;
    }

    for (int i = 1; i <= gapLeft; i++)
    {
        cout << " ";
    }
    cout << "X" << endl;
    gapLeft--;
    gapMiddle += 2;

    for (int i = 1; i <= (N / 2); i++)
    {
        if (gapLeft != 0)
        {
            for (int j = 1; j <= gapLeft; j++)
            {
                cout << " ";
            }
        }

        cout << "/";

        for (int j = 1; j <= gapMiddle; j++)
        {
            cout << " ";
        }

        cout << "\\" << endl;

        gapLeft--;
        gapMiddle += 2;
    }

    return 0;
}