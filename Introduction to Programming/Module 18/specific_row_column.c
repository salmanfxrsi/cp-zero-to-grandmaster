#include<stdio.h>

int main() 
{
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int res_col;
    scanf("%d", &res_col);

    for(int j = 0; j < r; j++)
        {
            printf("%d ", a[j][res_col - 1]);
        }
    return 0;
}