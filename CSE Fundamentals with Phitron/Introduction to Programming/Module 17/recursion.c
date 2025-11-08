// Recursion is a programming technique where a function calls itself to solve smaller instances of the same problem.

#include<stdio.h>

void hello()
{
    printf("Hello");
    hello();
}

int main() 
{
    printf("Hi\n");
    hello();
    return 0;
}