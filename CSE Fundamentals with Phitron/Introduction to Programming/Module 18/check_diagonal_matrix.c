#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];

    if (r != c)
    {
        printf("Not Diagonal Matrix\n");
        return 0;
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i != j && a[i][j] != 0)
            {
                printf("Not Diagonal Matrix\n");
                return 0;
            }
        }
    }

    printf("Diagonal Matrix\n");

    return 0;
}