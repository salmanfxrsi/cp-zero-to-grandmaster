#include<stdio.h>

int main() 
{
    int N;
    scanf("%d\n", &N);
    int arr[N];

    for(int counter = 0; counter < N; counter++)
    {
        scanf("%d", &arr[counter]);
    }

    for(int counter = N - 1; counter >= 0; counter--)
    {
        if(counter % 2 != 0)
        {
            printf("%d ", arr[counter]);
        }
    }

    return 0;
}