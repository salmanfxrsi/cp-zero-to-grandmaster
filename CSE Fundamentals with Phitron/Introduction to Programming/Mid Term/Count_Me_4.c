#include<stdio.h>

int main() 
{
    char S[10000];
    scanf("%s", &S);

    for(char c = 'a'; c <= 'z'; c++)
    {
        int count = 0;

        for(int j = 0; S[j] != '\0'; j++)
        {
            if(S[j] == c) count++;
        }

        if(count > 0) printf("%c - %d\n", c, count);
    }


    return 0;
}
