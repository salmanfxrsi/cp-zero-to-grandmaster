#include<stdio.h>

int main() 
{
    int T;
    scanf("%d", &T);

    for(int count = 1; count <= T; count++)
    {
        int N;
        scanf("%d", &N);

        long long factorial = 1;
        
        for(int count = 1; count <= N; count++)
        {
            factorial *= count;
        }

        printf("%lld\n", factorial);
    }

    return 0;
}