#include <bits/stdc++.h>

using namespace std;

class student
{
public:
    string nm;
    int cls;
    string s;
    int id;
    int math_marks;
    int eng_marks;
    int totalMarks;
};

bool cmp(student l, student r)
{
    return (l.totalMarks == r.totalMarks) ? l.id < r.id : l.totalMarks > r.totalMarks;
};

int main()
{

    int n;

    cin >> n;

    student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
        a[i].totalMarks = a[i].math_marks + a[i].eng_marks;
    };

    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
    }

    return 0;
}