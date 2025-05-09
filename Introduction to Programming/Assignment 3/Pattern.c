#include<stdio.h>

int main() 
{
    int N;
    scanf("%d", &N);

    int symbol = 1;
    int gap = N - 1;

    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= gap; j++)
        {
            printf(" ");
        }
        gap--;

        if(i % 2 != 0)
        {
            for(int j = 1; j <= symbol; j++)
            {
                printf("#");
            }
        }
        else
        {
            for(int j = 1; j <= symbol; j++)
            {
                printf("-");
            }
        }
        symbol += 2;
        printf("\n");
    }

    gap = 1; symbol -= 4;

    for(int i = 1; i < N; i++)
    {
        for(int j = 1; j <= gap; j++)
        {
            printf(" ");
        }
        gap++;

        if(i % 2 != 0)
        {
            for(int j = 1; j <= symbol; j++)
            {
                printf("#");
            }
        }
        else
        {
            for(int j = 1; j <= symbol; j++)
            {
                printf("-");
            }
        }
        symbol -= 2;
        printf("\n");
    }

    return 0;
}