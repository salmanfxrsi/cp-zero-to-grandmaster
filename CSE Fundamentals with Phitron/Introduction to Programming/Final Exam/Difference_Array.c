#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int N;
        scanf("%d", &N);

        int A[N];
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &A[j]);
        }

        int B[N];
        for (int j = 0; j < N; j++)
        {
            B[j] = A[j];
        }

        for (int j = 0; j < N; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                if (B[j] > B[k])
                {
                    int temp = B[j];
                    B[j] = B[k];
                    B[k] = temp;
                }
            }
        }

        int C[N];
        for(int j = 0; j < N; j++)
        {
            C[j] = abs(A[j] - B[j]); 
        }

        for (int j = 0; j < N; j++)
        {
            printf("%d ", C[j]);
        }
        
        printf("\n");
    }

    return 0;
}