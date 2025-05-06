#include<stdio.h>

int main() 
{
    int n; 
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    *arr = 100;
    *(arr + 1) = 200;

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("%p\n", arr);

    return 0;
}