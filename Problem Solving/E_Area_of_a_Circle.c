#include<stdio.h>

int main() 
{
    float R;
    scanf("%f", &R);

    double area = 3.141592653 * R * R;
    printf("%.9lf\n", area);

    return 0;
}