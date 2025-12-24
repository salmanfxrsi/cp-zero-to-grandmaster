#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    vec.push_back(-1);
    cout << "Size: " << vec.size() << endl;
    vec.pop_back();
    cout << "front val: " << vec.front() << endl;
    cout << "back val: " << vec.back() << endl;
    cout << "val at 8: " << vec.at(8) << endl;

    return 0;
}