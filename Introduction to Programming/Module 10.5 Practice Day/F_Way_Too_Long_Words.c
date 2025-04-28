#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    char S[101];
    for (int i = 0; i < T; i++)
    {
        scanf("%s", S);

        int number_between = 0;

        for (int j = 0; S[j] != '\0'; j++)
        {
            number_between++;
        }

        if (number_between <= 10)
        {
            for (int k = 0; S[k] != '\0'; k++)
            {
                printf("%c", S[k]);
            }
            printf("\n");
        }
        else if (number_between > 10)
        {
            printf("%c%d%c\n", S[0], number_between - 2, S[number_between - 1]);
        }
    }

    return 0;
}