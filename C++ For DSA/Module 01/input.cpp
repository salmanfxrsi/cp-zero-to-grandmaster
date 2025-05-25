#include<iostream>
using namespace std;

int main() 
{
    int x;
    char c;
    double d;
    cin >> x >> c >> d;
    
    cout << "You entered: " << x << endl << "Character: " << c << endl << "Double: " << d << endl;

    // Type Casting
    cout << "ASCII value of character " << c << " " << "is: " << (int)c << endl;

    return 0;
}