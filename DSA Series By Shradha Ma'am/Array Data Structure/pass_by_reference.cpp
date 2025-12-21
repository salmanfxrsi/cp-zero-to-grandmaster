#include <iostream>
using namespace std;

void multiply_arr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2 * arr[i];
    }
}

int main()
{
    int arr[] = {1, 2, 3};

    multiply_arr(arr, 3);

    cout << "In main function:" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}