#include<stdio.h>

int main() 
{
    int x;
    scanf("%d", &x);

    if(x % 5 == 0)
    {
        printf("%d", x / 5);
    }

    else if(x % 4 == 0)
    {
        printf("%d", x / 4);
    }
    else if(x % 3 == 0)
    {
        printf("%d", x / 3);
    }
    else if(x % 2 == 0)
    {
        printf("%d", x / 2);
    }
    else if(x % 1 == 0)
    {
        printf("%d", x / 1);
    }
    
    return 0;
}