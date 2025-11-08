#include<stdio.h>

int main() 
{
    int N;
    scanf("%d", &N);
    for(int counter = 1; counter <= N; counter++)
    {
        if(counter % 2 == 0)
        {
            printf("%d \n", counter);
        }
        else if(N == 1)
        {
            printf("%d \n", -1);
        }
    }

    return 0;
}