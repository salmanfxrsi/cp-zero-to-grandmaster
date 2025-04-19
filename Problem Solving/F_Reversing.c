#include<stdio.h>

int main() 
{
    int N;
    scanf("%d", &N);

    int A[N];

    for(int count = 0; count < N; count++)
    {
        scanf("%d", &A[count]);
    }

    for(int count = N -1; count >= 0; count--)
    {
        printf("%d ", A[count]);
    }

    return 0;
}