// Lexicographical comparison is the process of comparing two strings based on the order of characters, similar to how words are arranged in a dictionary.

#include<stdio.h>

int main() 
{
    char a[101], b[101];
    scanf("%s %s", a, b);

    int i = 0;
    while (1)
    {
        if(a[i] == '\0' && b[i] == '\0') 
        {
            printf("Equal\n");
            break;
        }
        else if(a[i] == '\0')
        {
            printf("a is smaller");
            break;
        }
        else if(b[i] == '\0')
        {
            printf("b is smaller");
            break;
        }
        else if(a[i] < b[i])
        {
            printf("a is smaller");
            break;
        }
        else if(b[i] < a[i])
        {
            printf("b is smaller");
            break;
        }
        else if(a[i] == a[i])
        {
            i++;
        }

    }
    

    return 0;
}