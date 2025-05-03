#include<stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);

    int star = 1, gap = n - 1;

    for(int i = 1; i <= n; i++)
    {
        for(int j = gap; j >= 1; j--)
        {
            printf(" ");
        }
        gap--;

        for(int k = 1; k <= star; k++)
        {
            printf("*");
        }
        star += 2;
        printf("\n");    
    }

    return 0;
}