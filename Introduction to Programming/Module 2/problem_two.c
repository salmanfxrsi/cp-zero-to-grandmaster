// Take a number from user and check if its a positive or negative number

#include<stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    if(num >= 0)
    {
        printf("Number is positive\n");
    }
    else
    {
        printf("Number is negative\n");
    }
}