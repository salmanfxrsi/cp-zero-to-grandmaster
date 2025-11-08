#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        long long arr[4];

        for (int j = 0; j < 4; j++)
        {
            scanf("%lld", &arr[j]);
        }

        long long M = arr[0];
        long long A = arr[1];
        long long B = arr[2];
        long long C = arr[3];

        if (M % (A * B * C) == 0)
            printf("%lld", M / (A * B * C));
        else printf("%d", -1);

        printf("\n");
    }

    return 0;
}