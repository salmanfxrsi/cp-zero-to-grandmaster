#include<iostream>
using namespace std;

int main()
{
    int n; 
    cin >> n;
    int ans = n * (n + 1) / 2;
    cout << "sum: " << ans; // O(1)

    return 0;
}