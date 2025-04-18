#include<stdio.h>

int main() 
{
    int N;
    scanf("%d", &N);
    
    int A[N];

    int lowest_number;
    int lowest_number_position;
    
    for(int counter = 0; counter < N; counter++)
    {
        scanf("%d", &A[counter]);
    }

    for(int counter = 0; counter < N; counter++)
    {
        if(A[counter] < lowest_number)
        {
            lowest_number = A[counter];
            lowest_number_position = counter + 1;
        }
    }

    printf("%d %d\n", lowest_number, lowest_number_position);

    return 0;
}