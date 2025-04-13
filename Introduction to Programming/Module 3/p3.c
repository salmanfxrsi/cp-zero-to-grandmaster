#include<stdio.h>

int main()
{
    int amount;
    scanf("%d", &amount);

    if(amount > 1000){
        printf("I will buy Punjabi \n");
        if(amount - 1000 >= 500){
            printf("I will buy new shoes \n");
            printf("Alisa will buy new shoes \n");
        }
    }else{
        printf("Bad luck! \n");
    }

    return 0;
}