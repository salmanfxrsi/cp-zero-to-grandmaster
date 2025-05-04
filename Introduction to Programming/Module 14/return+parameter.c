#include<stdio.h>

int sum (int num1,int num2) 
{
    return num1 + num2;
}

int sub (int num1,int num2) 
{
    return num1 - num2;
}

int main() 
{
    int x = 10, y = 20;
    int data_sum = sum(x, y);
    int data_sub = sub(x, y);
    printf("%d %d", data_sum, data_sub);

    return 0;
}