#include<stdio.h>

int main() 
{
    int N;
    scanf("%d", &N);
    
    int star = 1, gap = 5 + (3 / 2);

    for(int i = 1; i <= 5 + N; i++)
    {
        for(int j = gap; j > 1; j--)
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

    return 0;
}