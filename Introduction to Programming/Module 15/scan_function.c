// We use & in scanf to give the address for storing input, but not in printf because it only reads and prints the value.

#include<stdio.h>

int main() 
{
    int x;
    scanf("%d", &x);
    printf("%d", x);

    return 0;
}