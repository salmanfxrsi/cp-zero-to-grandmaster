#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;

    int A[N];
    for(int i = 0; i < N; i++) // O(N)
    {
        cin >> A[i];
    }

    for(int i = 0; i < Q; i++) // O(Q * N) 
    {
        int X;
        cin >> X;

        bool isFound = false; 

        for(int i = 0; i < N; i++)
        {
            if(A[i] == X) isFound = true;
        }

        if(isFound) cout << "found" << endl;
        else cout << "not found" << endl;
    }

    return 0;
}