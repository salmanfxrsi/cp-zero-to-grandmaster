#include<stdio.h>

int main() 
{
    for(int counter = 1; counter <= 10; counter++)
    {
        if(counter == 5){
            continue;
        }
        printf("%d\n", counter);
    }

    return 0;
}