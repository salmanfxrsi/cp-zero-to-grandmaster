#include<stdio.h>

int main() 
{
    int a = 10;
    int b = 20;
    int tmp = 0;

    tmp = a;
    a = b;
    b = tmp;

    printf("%d %d", a, b);

    return 0;
}