#include<stdio.h>

int main() 
{
    int n;
    int sum = 0;
    scanf("%d", &n);

    for(int counter = 1; counter <= n; counter ++)
    {
        sum = sum + counter;
    }

    printf("%d\n", sum);

    return 0;
}