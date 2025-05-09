#include <stdio.h>
#include <string.h>

int is_palindrome(char S[])
{
    int SLength = strlen(S);

    for (int i = 0, j = SLength - 1; i < j; i++, j--)
    {
        if (S[i] != S[j])
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    char S[1001];
    scanf("%s", S);

    int result = is_palindrome(S);

    if (result == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}