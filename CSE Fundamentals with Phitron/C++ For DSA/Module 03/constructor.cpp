#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int r = 0, int c = 0, double g = 0.00)
    {
        roll = r;
        cls = c;
        gpa = g;
    }
};

int main()
{
    Student salman(1, 12, 5.00);
    Student karim(6, 12);

    cout << salman.roll << " " << salman.cls << " " << salman.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;
    return 0;
}