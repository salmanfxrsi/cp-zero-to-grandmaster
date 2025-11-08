#include<stdio.h>

int main() 
{
    int N;
    scanf("%d", &N);

    int A[N];
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    for(int i = 0; i < N; i++)
    {
        printf("%d\n", A[i]);
    }

    return 0;
}