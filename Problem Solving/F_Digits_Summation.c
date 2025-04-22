#include<stdio.h>

int main() 
{
    long long N, M;
    scanf("%lld %lld", &N, &M);

    if(N == 0 || M == 0)
    {
        printf("0\n");
        return 0;
    }

    long long sum = (N % 10) + (M % 10);

    printf("%lld\n", sum);

    return 0;
}