#include<stdio.h>
#include<string.h>

int main() 
{
    char str1[101], str2[101];
    scanf("%s %s", str1, str2);

    for(int i = 0; i <= strlen(str2); i++)
    {
        str1[i + strlen(str1)] = str2[i];
    }
    

    printf("%s %s", str1, str2);
    
    return 0;
}