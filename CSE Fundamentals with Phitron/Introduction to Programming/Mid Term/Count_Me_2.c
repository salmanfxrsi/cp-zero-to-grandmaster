#include<stdio.h>

int main() 
{
    char str[100000];
    scanf("%s", str);

    int consonants = 0;
    
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str [i] != 'a' && str [i] != 'e' && str [i] != 'i' && str [i] != 'o' && str [i] != 'u') consonants++;
    }

    printf("%d\n", consonants);

    return 0;
}