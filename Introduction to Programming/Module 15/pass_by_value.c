#include<stdio.h>

void fun(int x)
{
    x = 20;
    printf("address of x in fun function --> %p\n", &x);
}

int main() 
{
    int x = 10;
    fun(x);
    printf("address of x in main function --> %p\n", &x);

    return 0;
}