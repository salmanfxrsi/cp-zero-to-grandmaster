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
    long long sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
}

void problem_2(int arr[], int size)
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
}

int problem_3(int arr[], int size)
{
    int unique_arr[] = {};
    for(int i = 0; i < sizeof(unique_arr); i++)
    {
        for(int j = 0; j < size; j++){
            
        }
    }
}

int problem_4(int arr1[], int arr2[], int arr1_sz, int arr2_sz)
{
    int two_array_intersection[arr1_sz + arr2_sz];
    for (int i = 0; i < arr1_sz; i++)
    {
        two_array_intersection[i] = arr1[i];
    }
    for (int i = 0; i < arr2_sz; i++)
    {
        two_array_intersection[arr1_sz + 1] = arr1[i];
    }
}

void print_an_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {10, 17, 56, 78, 98, 10, 78, 20, 45, 35};
    int size = 10;

    // cout << "Problem 1 Output:" << endl
    //      << problem_1(arr, size) << endl;

    // problem_2(arr, size);
    // cout << "Problem 2 Output:" << endl;
    // print_an_array(arr, size);

    int arr1[] = {1, 2, 4};
    int arr2[] = {5, 6, 7, 8};
    problem_4(arr1, arr2, 3, 4);

    return 0;
}