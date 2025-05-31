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

Student fun()
{
    Student karim(6, 12);
    return karim;
}

int main() 
{
    Student salman(1, 12, 5.00);
    Student obj = fun();
    cout << salman.roll << " " << salman.cls << " " << salman.gpa << endl;
    cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;
    return 0;
}