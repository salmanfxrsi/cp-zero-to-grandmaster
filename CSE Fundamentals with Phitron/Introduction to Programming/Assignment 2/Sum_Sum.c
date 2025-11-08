#include<stdio.h>

int main() 
{
    int X;
    scanf("%d\n", &X);

    int negative_sum = 0;
    int positive_sum = 0;

    for(int counter = 1; counter <= X; counter++)
    {
        int Y;
        scanf("%d", &Y);

        if(Y < 0)
        {
            negative_sum += Y;
        }
        else if(Y > 0)
        {
            positive_sum += Y;
        }
    }
    
    printf("%d %d", positive_sum, negative_sum);

    return 0;
}