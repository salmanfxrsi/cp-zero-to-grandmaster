#include<stdio.h>

int main() 
{
    long long a, b, c;
    long long d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    
    if(a * b + c == d)
    {
        printf("YES\n");
    }
    else if (a * b - c == d)
    {
        printf("YES\n");
    }
    else if (a + b * c == d)
    {
        printf("YES\n");
    }
    else if (a - b * c == d)
    {
        printf("YES\n");
    }
    else if (a - b + c == d)
    {
        printf("YES\n");
    }
    else if (a + b - c == d)
    {
        printf("YES\n");
    }
    else 
    {
        printf("NO\n");
    }
    
    
    return 0;
}