#include<stdio.h>

int main() 
{
    char str1[11], str2[11];
    scanf("%s %s", &str1, &str2);

    int str1_length = 0;
    int str2_length = 0;

    for(int i = 0; str1[i] != '\0'; i++) str1_length++;
    for(int i = 0; str2[i] != '\0'; i++) str2_length++;

    printf("%d %d\n", str1_length, str2_length);
    printf("%s%s\n", str1, str2);

    int temp = str1[0];
    str1[0] = str2[0];
    str2[0] = temp;

    printf("%s %s\n", str1, str2);

    return 0;
}