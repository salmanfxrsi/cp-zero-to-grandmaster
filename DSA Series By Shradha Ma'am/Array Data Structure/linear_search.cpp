#include <iostream>
using namespace std;

int linear_search(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

int main()
{
    int size = 7;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int target = 40;

    cout << linear_search(arr, size, target);

    return 0;
}