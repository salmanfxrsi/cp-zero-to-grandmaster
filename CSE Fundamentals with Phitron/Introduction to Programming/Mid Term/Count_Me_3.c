#include<stdio.h>

int main() 
{
    int T;
    scanf("%d", &T);

    char str[10000];

    for(int i = 0; i < T; i++)
    {
        scanf("%s", &str);

        int C = 0, S = 0, D = 0;

        for(int j = 0; str[j] != '\0'; j++)
        {
            if(str[j] >= 'A' && str[j] <= 'Z') C++;
            else if(str[j] >= 'a' && str[j] <= 'z') S++;
            else if(str[j] >= '0' && str[j] <= '9') D++;
        }

        printf("%d %d %d\n", C, S, D);
    }

    return 0;
}