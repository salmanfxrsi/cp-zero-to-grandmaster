#include<stdio.h>
#include<string.h>

int main() 
{
    char str1[101], str2[101];
    scanf("%s %s", str1, str2);

    strcat(str1, str2);

    printf("%s %s", str1, str2);
    
    return 0;
}