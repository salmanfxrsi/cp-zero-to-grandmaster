#include<stdio.h>

int main() 
{
    int x;
    scanf("%d", &x);
    printf("%d\n", x);
    printf("%p\n", &x);

    int* ptr;
    ptr = &x;
    *ptr = 20;
    printf("%d\n", x);
    printf("%p\n", ptr);
    printf("%p\n", &ptr);
    
    return 0;
}