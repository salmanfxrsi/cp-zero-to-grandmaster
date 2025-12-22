/*
1. WAF to calculate sum and products of all numbers in an array.
2. WAF to swap the min and max number of an array.
3. WAF to print all the unique values in an array.
4. WAF to print intersection of 2 arrays.
*/

#include <iostream>
using namespace std;

int problem_1(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int problem_2(int arr[], int size)
{
    int large_num_idx = 0;
    int small_num_idx = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < arr[small_num_idx])
            small_num_idx = i;
        if (arr[i] > arr[large_num_idx])
            large_num_idx = i;
    }

    swap(arr[small_num_idx], arr[large_num_idx]);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {10, 17, 56, 78, 98, 45, 35};
    int size = 7;

    cout << "Problem 1 Output:" << endl
         << problem_1(arr, size) << endl;

    cout << "Problem 2 Output:" << endl
         << problem_2(arr, size) << endl;

    return 0;
}