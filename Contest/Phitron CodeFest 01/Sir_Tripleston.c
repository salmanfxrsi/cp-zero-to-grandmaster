#include<stdio.h>
#include<string.h>

int main() 
{
    char word[77];
    scanf("%s", word);

    strlen(word);

    for(int i = 'a'; i <= 'z'; i++)
    {
        int count = 0;
        for(int j = 0; j < strlen(word); j++)
        {
            if(word[j] == i) count++;
        }
        if(count != 3) printf("%c", i);
    }

    return 0;
}