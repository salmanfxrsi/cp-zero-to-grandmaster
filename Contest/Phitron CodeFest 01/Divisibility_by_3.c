#include<stdio.h>

int main() 
{
    int N, M;
    scanf("%d %d", &N, &M);

    int tempM = M;

    int sum = 0;
    for(int i = 0; i < N; i++)  
    {
        sum += M % 10;
        M /= 10;
    }

    if (sum % 3 == 0 && tempM % 3 == 0) printf("YES\n");
    else printf("NO\n");

    return 0;
}