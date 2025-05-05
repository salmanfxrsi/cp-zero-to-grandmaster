#include<stdio.h>

int main() 
{
    char str[1001];
    scanf("%s", str);

    if(str[0] >= 'a' && str[0] <= 'z')
    {
        str[0] = str[0] - 32;
    }

    for(int i = 0; str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}