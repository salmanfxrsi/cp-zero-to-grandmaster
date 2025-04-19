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

    long long sum = 0;

    for(int count = 0; count < N; count++)
    {
        sum += A[count];
    }  
    
    if(sum  < 0)
    {
        printf("%lld", -1 * sum);
    }
    else 
    {
        printf("%lld", sum);
    }

    return 0;
}