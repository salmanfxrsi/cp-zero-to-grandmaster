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

void problem_two()
{
}

int main()
{
    cout << isPowerOfTwo(6);
    problem_two();
    return 0;
}