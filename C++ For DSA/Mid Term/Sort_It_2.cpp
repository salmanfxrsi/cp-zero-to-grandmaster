#include <bits/stdc++.h>
using namespace std;

int *sort_it(int N)
{
    int *A = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (A[i] < A[j])
                swap(A[i], A[j]);
        }
    }

    return A;
}

int main()
{
    int N;
    cin >> N;

    int *arr = sort_it(N);
    for(int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}