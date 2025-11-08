#include<stdio.h>

int main() 
{
    int N;  
    scanf("%d", &N);

    int star = 1, gap = N - 1;

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < gap; j++)
        {
            printf(" ");
        }
        gap--;

        for(int k = 0; k < star; k++)
        {
            printf("*");
        }
        star += 2;

        printf("\n");
    }

    star -= 2;

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < i; j++)
        {
            printf(" ");
        }
        gap--;

        for(int k = 0; k < star; k++)
        {
            printf("*");
        }
        star -= 2;

        printf("\n");
    }

    return 0;
}