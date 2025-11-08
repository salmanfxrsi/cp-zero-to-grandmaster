#include<stdio.h>

int main() 
{
    char c;
    scanf("%c", &c);
    if(c >= 'a' && c < 'z')
    {
        printf("%c", c + 1);
    }
    else
    {
        printf("%c", c - 25);
    }

    return 0;
}