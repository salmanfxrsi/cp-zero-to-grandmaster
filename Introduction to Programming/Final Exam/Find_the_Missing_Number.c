#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int arr[4];

        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &arr[j]);
        }

        int M = arr[0];
        int A = arr[1];
        int B = arr[2];
        int C = arr[3];

        if (M % (A * B * C) == 0)
            printf("%d", M / (A * B * C));
        else printf("%d", -1);

        printf("\n");
    }

    return 0;
}