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

    long long sum = 0;

    vector<long long> sumArray(N);
    for (int i = 0; i < N; i++)
    {
        sum += A[i];
        sumArray[i] = sum;
    }

    reverse(sumArray.begin(), sumArray.end());

    for (long long val : sumArray)
    {
        cout << val << " ";
    }

    return 0;
}