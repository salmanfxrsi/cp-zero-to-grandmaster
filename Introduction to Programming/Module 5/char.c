#include <stdio.h>

int main()
{
    char X;
    scanf("%c", &X);

    if (X > 64 && X < 91)
    {
        printf("%c", X + 32);
    }
    else if (X > 96 && X < 123)
    {
        printf("%c", X - 32);
    }

    return 0;
}