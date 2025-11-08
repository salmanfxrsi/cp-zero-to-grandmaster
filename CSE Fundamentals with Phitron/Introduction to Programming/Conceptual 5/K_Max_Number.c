#include<stdio.h>

void findMax(int A[], int N, int idx) 
{
    
}

int main() 
{
    int N;
    scanf("%d", &N);

    int A[N];
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int max_num = A[0];

    printf("%d", max_num);

    return 0;
}