#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10, 20, 30, 40, 50, 60};

    cout << l.back() << " ";
    cout << l.front() << " ";
    cout << *next(l.begin(), 2) << " ";

    return 0;
}