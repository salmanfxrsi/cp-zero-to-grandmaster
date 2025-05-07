#include <stdio.h>
#include <ctype.h> 

int main() 
{
    char s[101];
    scanf("%s", s);
    
    int uppercase = 0, lowercase = 0;

    for(int i = 0; s[i] != '\0'; i++)
    {
        if(islower(s[i])) lowercase++;
        else if(isupper(s[i])) uppercase++;
    }

    for(int i = 0; s[i] != '\0'; i++)
    {
        if(uppercase > lowercase)
            s[i] = toupper(s[i]);
        else
            s[i] = tolower(s[i]);
    }

    printf("%s\n", s);
    return 0;
}