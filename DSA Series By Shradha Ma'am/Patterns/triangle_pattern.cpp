#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, counter; 
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        counter = i;
        for(int j = 1; j <= i; j++)
        {
            cout << counter << " ";
        }

        cout << endl;
    }

    return 0;
}