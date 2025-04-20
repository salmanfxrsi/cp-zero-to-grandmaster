#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    for (int count = 1; count <= T; count++)
    {
        int X, Y;
        scanf("%d %d", &X, &Y);

        int sum = 0;

        if (X < Y)
        {
            for (int count = X + 1; count < Y; count++)
            {
                if (count % 2 != 0)
                {
                    sum += count;
                }
            }
        }

        if (X > Y)
        {
            for (int count = Y + 1; count < X; count++)
                if (count % 2 != 0)
                {
                    {
                        sum += count;
                    }
                }
        }

        printf("%d\n", sum);
    }

    return 0;
}