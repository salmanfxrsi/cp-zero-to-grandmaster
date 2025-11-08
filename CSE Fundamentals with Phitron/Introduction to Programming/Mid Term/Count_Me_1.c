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

    int d2 = 0, d3 = 0;

    for(int i = 0; i < N; i++)
    {
        if(A[i] % 2 == 0)
        {
            d2++;
        }
        else if(A[i] % 3 == 0)
        {
            d3++;
        }
    }

    printf("%d %d\n", d2, d3);

    return 0;
}