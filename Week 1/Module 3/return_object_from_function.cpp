#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;
    Student(int c, char s, char *n, int r)
    {
        cls = c;
        section = s;
        strcpy(name, n);
        roll = r;
    }
};
Student fun()
{
    char name[100] = "Rahim Ullah";
    Student rahim(11, 'B', name, 132);
    return rahim;
}
int main()
{
    Student rahim = fun();
    cout << rahim.name << endl;
    cout << rahim.cls << endl;
    cout << rahim.section << endl;
    cout << rahim.roll << endl;
    return 0;
}