#include <iostream>
using namespace std;

int binomial_coefficient(int totalItems, int selectedItems)
{
    int numeratorFactorial = 1;

    for (int i = totalItems; i >= 1; i--)
    {
        numeratorFactorial *= i;
    }

    int rFactorial = 1;
    int nMinusRFactorial = 1;

    for (int i = selectedItems; i >= 1; i--)
    {
        rFactorial *= i;
    }

    for (int i = totalItems - selectedItems; i >= 1; i--)
    {
        nMinusRFactorial *= i;
    }

    int combinationResult =
        numeratorFactorial / (rFactorial * nMinusRFactorial);

    return combinationResult;
}

int main()
{
    int totalItems, selectedItems;
    cin >> totalItems >> selectedItems;

    cout << binomial_coefficient(totalItems, selectedItems);
}
