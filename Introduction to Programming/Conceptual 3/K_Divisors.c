#include<stdio.h>

int main() 
{
    int n;
    scanf("%lld", &n);

    for(int counter = 1; counter <= 10000; counter++)
    {
        int x;

        if(n % counter == 0)
        {
            printf("%d\n", counter);
        }
    }

    return 0;
}