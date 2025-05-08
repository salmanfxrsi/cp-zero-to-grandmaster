#include<stdio.h>

int main() 
{
    int N;
    scanf("%d", &N);

    int gap = N - 1, number = 1;

    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= gap; j++)
        {
            printf(" ");
        }
        gap--;
        
        for(int i = number; i >= 1; i--)
        {
            printf("%d", i);
        }
        number ++;

        printf("\n");
    }

    return 0;
}