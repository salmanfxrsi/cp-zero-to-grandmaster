#include<stdio.h>

void fun(int* p) // receives the address
{
    *p = 20; // modify the original value
}

int main() 
{
    int x = 10; // declared a variable
    fun(&x); // passing the address of x to the function
    printf("%d", x); // output --> 20

    return 0;
}