#include<stdio.h>

int main() 
{
    int N;
    scanf("%d", &N);

    if(N > 0){
        for(int counter = 1; counter <= N; counter++)
        {
            printf("%d ", counter);
        }
    }
    else
    {
        for(int counter = N; counter <= 0; counter++)
        {
            printf("%d ", counter);
        }
    }

    return 0;
}