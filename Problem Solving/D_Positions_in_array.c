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

    for(int count = 0; count < N; count++)
    {
        if(A[count] <= 10)
        {
            printf("A[%d] = %d\n", count, A[count]);
        }
    }

    return 0;
}