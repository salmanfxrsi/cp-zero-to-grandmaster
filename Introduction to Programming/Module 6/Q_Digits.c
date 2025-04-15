#include<stdio.h>

int main() 
{
    int T;
    scanf("%d\n", &T);
    
    for(int counter = 1; counter <= T; counter++)
    {
        int N;
        scanf("%d\n", &N);
        
        do
        {
            printf("%d ", N%10);
            N /= 10; 
        }while(N != 0);

        printf("\n");
    }


    return 0;
}