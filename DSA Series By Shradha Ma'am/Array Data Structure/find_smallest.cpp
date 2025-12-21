#include <iostream>
using namespace std;

int main()
{
    int size = 6;
    int arr[] = {5, 15, 22, 1, -15, -24};
    int smallest = arr[0];
    int largest = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
            smallest = arr[i];
        if (arr[i] > largest)
            largest = arr[i];
    }

    cout << "Smallest: " << smallest << endl;
    cout << "Largest: " << largest << endl;

    return 0;
}