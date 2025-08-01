#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; i++)
            cin >> A[i];

        int smallDigit = 0;
        bool isSorted = true;

        for (int i = 0; i < N; i++)
        {
            if (smallDigit < A[i] || smallDigit == A[i])
            {
                smallDigit = A[i];
            }
            if (smallDigit > A[i])
            {
                isSorted = false;
            }
        }

        if (isSorted)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}