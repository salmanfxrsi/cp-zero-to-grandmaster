#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 2};

    // vector<int> v2 = { 100, 200, 300 };

    // v.insert(v.begin() + 2, v2.begin(), v2.end());

    // v.erase(v.begin() + 2);
    // v.erase(v.begin() + 1, v.begin() + 5);

    // replace(v.begin(), v.end(), 2, 100);
    // auto it = find(v.begin(), v.end(), 5);
    // if (it == v.end())
    // {
    //     cout << "Not Found" << endl;
    // }
    // else
    // {
    //     cout << "Found" << endl;
    // }

    // for (int x : v)
    //     cout << x << " ";

    cout << v[3] << endl;
    cout << v.back() << endl;
    cout << v.front() << endl;
    cout << v.at(2) << endl;

    return 0;
}