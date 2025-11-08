#include<stdio.h>

void printValue(int n)
{
    if(n == 4) return;
    printValue(n + 1);
    printf("%d\n", n);
}

int main() 
{
    printValue(1);
    return 0;
}