#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    string name;
    char section;
    int total_marks;
};

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        Student topper;

        for (int j = 0; j < 3; j++)
        {
            Student temp;
            cin >> temp.id >> temp.name >> temp.section >> temp.total_marks;

            if (j == 0)
                topper = temp;

            else
            { 
                if (temp.total_marks > topper.total_marks)
                    topper = temp;

                else if (temp.total_marks == topper.total_marks)
                {
                    if (temp.id < topper.id)
                        topper = temp;
                }
            }
        }

        cout << topper.id << " " << topper.name << " " << topper.section << " " << topper.total_marks << endl;
    }

    return 0;
}