#include<stdio.h>

int main() 
{
    int X, P;
    scanf("%d %d", &X, &P);

    float original_price = P / (1 - (X / 100.00));
    
    printf("%.2f\n", original_price);

    return 0;
}