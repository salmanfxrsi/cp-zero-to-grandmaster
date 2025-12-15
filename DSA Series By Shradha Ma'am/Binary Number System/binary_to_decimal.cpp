#include <iostream>
using namespace std;

int binaryToDec(int binaryNum)
{
    int ans = 0, pow = 1;

    while (binaryNum > 0)
    {
        int rem = binaryNum % 10;
        ans += (rem * pow);

        binaryNum /= 10;
        pow *= 2;
    }

    return ans;
}

int main()
{
    int binaryNum = 1100101;

    cout << binaryToDec(binaryNum);
    return 0;
}