#include<stdio.h>

int sum () 
{
    int x, y;
    scanf("%d %d", &x, &y);

    return x + y;
}

int main() 
{
    int ans = sum();
    printf("%d", ans);

    return 0;
}