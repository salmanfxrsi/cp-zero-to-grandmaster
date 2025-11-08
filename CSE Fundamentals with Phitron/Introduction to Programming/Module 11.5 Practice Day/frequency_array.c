#include<stdio.h>

int main() 
{
    int N; 
    scanf("%d", &N);

    int arr[N];
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i <= 9; i++)
    {
        int count = 0;
        for(int j = 0; j < N; j++)
        {
            if(arr[j] == i)
            {
                count++;
            }
        }
        if(count != 0 || i <= 5)
        {
            printf("%d --> %d\n", i, count);
        }
    }
    
    return 0;
}