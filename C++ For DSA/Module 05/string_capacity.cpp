// a. s.size() -> returns the size of the string.
// b. s.max_size() -> returns the maximum size that string can hold.
// c. s.capacity() -> returns current available capacity of the string.
// d. s.clear() -> clear the string.
// e. s.empty() -> return true/false if the string is empty.
// f. s.resize() -> change the size of the string.


#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Hello, World!";
    str.resize(20, 'x');
    // str.clear();
    str.empty() ? cout << "Empty" << endl : cout << "Not Empty" << endl;
    cout << str.capacity() << endl;
    cout << str.max_size() << endl;
    cout << str.size() << endl;
    cout << str << endl;

    return 0;
}