#include<stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);

    for(int counter = 1; counter <= 12; counter++)
    {
        printf("%d * %d = %d\n", n, counter, n * counter);
    }

    return 0;
}