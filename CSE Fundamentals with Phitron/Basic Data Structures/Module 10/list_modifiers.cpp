#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10, 20, 20, 30};

    // l.push_front(100);
    // l.push_back(40);
    // l.pop_back();
    // l.pop_front();
    l.insert(next(l.begin(), 2), 100);
    // l.erase(next(l.begin(), 2));
    replace(l.begin(), l.end(), 20, 100);
    auto it = find(l.begin(), l.end(), 100);
    if(it == l.end())
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }

    // cout << *next(l.begin(), 2) << endl << endl;

    for (int val : l)
    {
        cout << val << endl;
    }

    return 0;
}