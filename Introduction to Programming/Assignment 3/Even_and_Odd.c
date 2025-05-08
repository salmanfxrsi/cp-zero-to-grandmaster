#include<stdio.h>

void odd_even(int A[], int N)
{
    int odd = 0, even = 0;

    for(int i = 0; i < N; i++)
    {
        if(A[i] % 2 == 0) even++;
        else odd++;
    }

    printf("%d %d", even, odd);
}

int main() 
{
    int N; 
    scanf("%d", &N);

    int A[N];
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    odd_even(A, N);

    return 0;
}