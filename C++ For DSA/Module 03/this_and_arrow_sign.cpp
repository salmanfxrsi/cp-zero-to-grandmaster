#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll = 0, int cls = 0, double gpa = 0.00)
    {
        // (*this).roll = roll;
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
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