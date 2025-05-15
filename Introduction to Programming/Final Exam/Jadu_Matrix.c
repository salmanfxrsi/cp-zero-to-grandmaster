#include <stdio.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    if (N != M)
    {
        printf("NO\n");
        return 0;
    }

    int matrix[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0, j = M - 1; i < N && j >= 0; i++, j--)
    {
        if(matrix[i][i] != 1 || matrix[i][j] != 1)
        {
            printf("NO\n");
            return 0;
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < M - 1; j++)
        {
            if (matrix[i][j] != 0)
            {
                printf("NO\n");
                return 0;
            }
        }
    }

    printf("YES\n");

    return 0;
}