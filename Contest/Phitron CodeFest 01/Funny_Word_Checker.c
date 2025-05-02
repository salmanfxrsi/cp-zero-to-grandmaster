#include<stdio.h>
#include<string.h>

int main() 
{
    char word[101];
    scanf("%s", word);

    int length = strlen(word);
    
    if (word[0] == word[length -1]) printf("Yes\n");
    else printf("No\n");

    return 0;
}