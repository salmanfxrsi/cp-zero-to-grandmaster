#include<iostream>
using namespace std;

int main() 
{
    int num;
    cin >> num;

    switch(num % 2)
    {
        case 0: 
            cout << "Even\n";
            break;

        default: 
            cout << "Odd\n";
    }
}