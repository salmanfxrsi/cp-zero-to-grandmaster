#include<stdio.h>
#include<string.h>

int main() 
{
    char str[101];
    scanf("%s", str);

    int length = 0;

    // manually calculate the length of the string
    for(int i = 0; str[i] != '\0'; i++) length++;

    printf("%d\n", length);

    //  use the built-in function to calculate the length of the string
    printf("%d\n", strlen(str));

    return 0;
}