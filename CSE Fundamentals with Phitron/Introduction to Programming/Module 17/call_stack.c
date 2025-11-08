// Call Stack 
// main --> hello --> gello --> mello --> gello --> hello --> main (stack end)

#include<stdio.h>

void mello()
{
    printf("mello");
}

void gello()
{
    printf("gello");
    mello();
}

void hello()
{
    printf("Hello");
    gello();
}

int main() 
{
    printf("Hi\n");
    hello();
    return 0;
}