#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10, 20, 30, 20, 40, 50, 60, 5};
    l.remove(5);
    l.sort();
    l.sort(greater<int>());
    l.unique();
    l.reverse();

    for(int val : l)
    {
        cout << val << " ";
    }

    return 0;
}