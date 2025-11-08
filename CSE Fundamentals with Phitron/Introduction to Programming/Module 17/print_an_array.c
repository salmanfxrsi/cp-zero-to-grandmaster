#include<stdio.h>

void print_array(int A[], int N, int i)
{
    if(i > N - 1) return;
    
    printf("%d ", A[i]);
    print_array(A, N, i + 1);
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

    print_array(A, N, 0);

    return 0;
}