#include<stdio.h>

int main() 
{
    long long N;
    scanf("%lld", &N);

    long long sum = N * (N + 1) / 2;

    printf("%lld\n", sum);

    return 0;
}