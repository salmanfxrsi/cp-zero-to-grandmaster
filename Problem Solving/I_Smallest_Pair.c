#include<stdio.h>
#include<limits.h>

int main() 
{
    int N1;
    scanf("%d", &N1);

    int N2;
    scanf("%d", &N2);

    int arr[N2 + 1];
    for(int i = 1; i <= N2; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min = INT_MAX;

    for(int i = 1; i <= N2; i++)
    {
        for(int j = i+1; j <= N2; j++)
        {
            int result = arr[i] + arr[j] + j - i;

            if(result < min) min = result;
        }
    }

    printf("%d", min);

    return 0;
}