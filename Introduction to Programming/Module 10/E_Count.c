#include<stdio.h>


int main() 
{
    char S[1000001];
    scanf("%s", S);

    int summation = 0;

    for(int i = 0; i < strlen(S); i++)
    {
        summation += (S[i] - '0');
    }

    printf("%d\n", summation);

    return 0;
}