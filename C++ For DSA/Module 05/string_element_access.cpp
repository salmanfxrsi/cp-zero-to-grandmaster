// a. S[i] -> access the ith index of the string.
// b. s.at(i) -> access the ith index of the string.
// c. s.back() -> access the last element of the string.
// d. s.front() -> access the first element of the string.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Hello, World!";
    cout << str.front() << endl;
    cout << str.back() << endl;
    cout << str.at(1) << endl;
    cout << str[0] << endl;

    return 0;
}