#include<stdio.h>

int main() 
{
    char S[1000001];
    fgets(S, 1000001, stdin);

    for(int i = 0; S[i] != '\\'; i++)
    {
        printf("%c", S[i]);

        if(S[i] == '\\') break;
    }

    return 0;
}