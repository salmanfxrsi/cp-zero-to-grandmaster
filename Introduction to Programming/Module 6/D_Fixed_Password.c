#include<stdio.h>

int main() 
{
    int n = 0, X;
    int password = 1999;

    for(int counter = 1; counter <= 10000000; counter ++)
    {
        scanf("%d\n", &X);
        if(X == password){
            printf("Correct\n");
            break;
        }else{
            printf("Wrong\n");
        }
    }

    return 0;
}