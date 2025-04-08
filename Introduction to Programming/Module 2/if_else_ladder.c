#include <stdio.h>

int main()
{
    int taka;
    scanf("%d", &taka);

    if (taka >= 100)
    {
        printf("I eat burger\n");
    }
    else if (taka >= 50)
    {
        printf("I eat sandwich\n");
    }
    else
    {
        printf("Don't eat burger\n");
    }

    return 0;
}