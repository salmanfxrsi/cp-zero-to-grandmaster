#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    bool isDuplicate = false;

    for (int i = 0; i < N - 1; i++)
    {
        int number = A[i];
        for (int j = i + 1; j < N; j++)
        {
            if (number == A[j])
            {
                isDuplicate = true;
            }
        }
    }

    if (isDuplicate)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}