#include<stdio.h>

void sum (int a, int b) 
{
    printf("%d", a + b);
}

int main() 
{
    int x, y;
    scanf("%d %d", &x, &y);

    sum(x, y);

    return 0;
}