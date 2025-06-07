#include<stdio.h>
#include<string.h>

int main() 
{
    char str1[101], str2[101];
    scanf("%s %s", str1, str2);

    int result = strcmp(str1, str2);
    printf("%d", result);

    return 0;
}