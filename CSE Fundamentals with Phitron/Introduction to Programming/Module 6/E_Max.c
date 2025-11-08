#include<stdio.h>

int main() 
{
    int total_numbers;
    int number;
    int max = 0;
    scanf("%d\n", &total_numbers);

    for(int counter = 1; counter <= total_numbers; counter++)
    {
        scanf("%d", &number);
        if(number > max){
            max = number;
        }
        
    }

    printf("%d\n", max);

    return 0;
}