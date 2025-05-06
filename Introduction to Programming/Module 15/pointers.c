// pointer is a variable who store the address of another variable;

#include<stdio.h>

int main() 
{
    int x;
    scanf("%d", &x);
    printf("%d\n", x);
    printf("%p\n", &x);

    int* ptr;
    ptr = &x;
    *ptr = 20; // dereferencing pointer
    printf("%d\n", x);
    printf("%p\n", ptr);
    printf("%p\n", &ptr);
    
    return 0;
}