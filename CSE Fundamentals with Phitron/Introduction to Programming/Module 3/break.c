#include<stdio.h>

int main() 
{
    for(int counter = 1; counter <= 10; counter++)
    {
        printf("%d\n", counter);
        if(counter == 5){
            break;
        }
    }

    return 0;
}