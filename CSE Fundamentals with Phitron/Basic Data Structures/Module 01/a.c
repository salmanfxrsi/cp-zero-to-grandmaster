#include<stdio.h>
#include<math.h>

int main() {
    int sum = 0;
    int val = 2;
    int counter = 1;
    while (1)
    {
        sum = sum + (val * val);
        val = val + 3;
        counter = counter + 1;
        if (counter > 40)
        break;
    }
    printf("The sum is %d\n", sum);
    return 0;
}