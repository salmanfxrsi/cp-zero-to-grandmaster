#include<stdio.h>
#include<math.h>

int main() 
{
    int value_ceil = ceil(4.3);
    printf("%d\n", value_ceil);

    int value_floor = floor(4.3);
    printf("%d\n", value_floor);

    int value_round = round(4.3);
    printf("%d\n", value_round);

    int value_square_root = sqrt(25);
    printf("%d\n", value_square_root);

    int value_power = pow(2, 2);
    printf("%d\n", value_power);

    int value_absolute = abs(-10);
    printf("%d\n", value_absolute);

    return 0;
}