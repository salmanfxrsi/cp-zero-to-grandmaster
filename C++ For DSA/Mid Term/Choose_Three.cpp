#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int N, S;
        cin >> N >> S;

        int A[N];
        for (int j = 0; j < N; j++)
        {
            cin >> A[j];
        }

        sort(A, A + N);

        bool found = false;

        for (int j = 0; j < N - 2; j++)
        {
            for (int k = j + 1; k < N - 1; k++)
            {
                for (int l = k + 1; l < N; l++)
                {
                    if (A[j] + A[k] + A[l] == S)
                    {
                        found = true;
                    }
                }
            }
        }
        
        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}