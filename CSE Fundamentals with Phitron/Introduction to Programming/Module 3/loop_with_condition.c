#include<stdio.h>

int main() 
{
    int x = 0;
    scanf("%d", &x);

    for(int counter = 1; counter <= x; counter ++)
    {
        if(counter % 2 == 0)
        {
            printf("%d Even \n", counter);
        }
        else
        {
            printf("%d Odd \n", counter);
        }
    }

    return 0;
}