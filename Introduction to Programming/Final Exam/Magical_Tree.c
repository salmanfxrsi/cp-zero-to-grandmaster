#include<stdio.h>

int main() 
{
    int N;
    scanf("%d", &N);
    
    int gap = 5 + (N / 2) , star = 1;

    for(int i = 1; i <= 6 + (N / 2); i++)
    {
        for(int j = 1; j <= gap; j++)
        {
            printf(" ");
        }
        gap--;

        for(int j = 1; j <= star; j++)
        {
            printf("*");
        }
        star += 2;

        printf("\n");
    }

    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= 5; j++)
        {
            printf(" ");
        }

        for(int j = 1; j <= N; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}