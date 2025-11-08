#include<stdio.h>

int main() 
{
    int N;
    scanf("%d", &N);
    int arr[N];

    for(int counter = 0; counter < N; counter++)
    {
        scanf("%d", &arr[counter]);
    }


    int X, V;
    scanf("%d %d", &X, &V);

    arr[X] = V;

    for(int counter = N - 1; counter >= 0; counter--)
    {
        printf("%d ", arr[counter]);
    }
    

    return 0;
}