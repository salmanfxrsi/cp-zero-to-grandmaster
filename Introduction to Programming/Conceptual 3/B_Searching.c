#include<stdio.h>

int main() 
{
    int N;
    scanf("%d", &N);

    int A[N];

    for(int counter = 0; counter < N; counter++)
    {
        scanf("%d", &A[counter]);
    }

    int X;
    scanf("%d", &X);

    for(int counter = 0; counter < N; counter++)
    {
        if(A[counter] == X)
        {
            printf("%d\n", counter);
            return 0;
        }
    }

    printf("-1\n");

    return 0;
}