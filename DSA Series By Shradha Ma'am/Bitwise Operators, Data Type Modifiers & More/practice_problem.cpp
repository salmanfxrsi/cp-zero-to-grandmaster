#include <iostream>
using namespace std;

// 1. Figure out how to find if a number is power of 2 without any loop

bool isPowerOfTwo(int num)
{
    if (num == 0)
        return false;
    else if ((num & (num - 1)) == 0)
        return true;
    else
        return false;
}

// 2. WAF to reverse an Integer n

int reverseInt(int num)
{
    int reverse_num = 0;

    while (num != 0)
    {
        int lastDigit = num % 10;
        reverse_num = (reverse_num * 10) + lastDigit;
        num /= 10;
    }

    return reverse_num;
}

int main()
{
    cout << isPowerOfTwo(6) << endl;
    cout << reverseInt(521);
    return 0;
}