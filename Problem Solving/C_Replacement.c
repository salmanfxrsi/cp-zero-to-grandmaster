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
        if(A[count] < 0)
        {
            printf("%d ", 2);
        }
        else if (A[count] > 0)
        {
            printf("%d ", 1);
        }
        else
        {
            printf("%d ", 0);
        }
    }

    return 0;
}