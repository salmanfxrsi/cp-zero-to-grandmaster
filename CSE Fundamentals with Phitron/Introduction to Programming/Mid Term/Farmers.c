#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int A[3];

        for(int i = 0; i < 3; i++)
        {
            scanf("%d", &A[i]);
        }

        int M1 = A[0];
        int M2 = A[1];
        int D = A[2];

        int total_farmers = M1 + M2;
        
        int total_days = (M1 * D) / total_farmers;
        
        printf("%d\n", D - total_days);
    }

    
    return 0;
}