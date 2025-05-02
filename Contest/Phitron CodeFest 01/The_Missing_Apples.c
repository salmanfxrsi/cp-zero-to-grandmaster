#include<stdio.h>

int main() 
{
    int initial, given, bought;
    scanf("%d %d %d", &initial, &given, &bought);

    int total = initial - given + bought;
    printf("%d\n", total);

    return 0;
}