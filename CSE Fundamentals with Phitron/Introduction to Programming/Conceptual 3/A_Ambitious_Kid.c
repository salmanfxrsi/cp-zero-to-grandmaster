#include<stdio.h>

int main() 
{
    int n;
    scanf("%d\n", &n);

    int min_number = 100000 + 1;

    for(int counter = 1; counter <= n; counter++)
    {
        int x;
        scanf("%d", &x);

        if(x < 0)
        {
            x = x * (-1);
        }

        if(min_number > x)
        {
            min_number = x;
        }
    }

    printf("%d", min_number);

    return 0;
}