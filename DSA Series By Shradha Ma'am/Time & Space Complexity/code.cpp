#include <iostream>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> vec_square;
    for (int i = 0; i < vec.size(); i++)
    {
        vec_square.push_back(vec[i] * 2);
    }

    for (int val : vec_square)
    {
        cout << val << " ";
    }

    return 0;
}