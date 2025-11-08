#include<stdio.h>

int main() 
{
    char S[1001];
    scanf("%s", &S);

    int length = 0;

    for(int i = 0; S[i] != '\0'; i++)
    {
        length++;
    }

    for(int i = 0, j = length - 1; i < j; i++, j--)
    {
        if(S[i] != S[j])
        {
            printf("NO\n");
            return 0;
        }        
    }

    printf("YES\n");

    return 0;
}