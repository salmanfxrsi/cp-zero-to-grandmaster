// Take a number from user and check if its a even number or odd number

#include<stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    
    if(num % 2 == 0)
    {
        printf("Number is even\n");
    }
    else
    {
        printf("Number is odd\n");
    }
}