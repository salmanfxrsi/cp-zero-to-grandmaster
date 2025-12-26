#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    // total subarray of arr
    int subarray = (n * (n + 1)) / 2;
    cout << "Total Subarray: " << subarray;

    return 0;
}