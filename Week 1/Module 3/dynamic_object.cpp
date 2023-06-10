#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;
    Student(int c, int s, char *n, int r)
    {
        cls = c;
        section = s;
        strcpy(name, n);
        roll = r;
    }
};
int main()
{
    char name[100] = "Rahim Ullah";
    Student *rahim = new Student(10, 'B', name, 69);
    // cout<<(*rahim).name<<endl;
    // cout<<(*rahim).cls<<endl;
    // cout<<(*rahim).section<<endl;
    // cout<<(*rahim).roll<<endl;

    // Shortcut Way('->' will only work for array pointer)
    cout << rahim->name << endl;
    cout << rahim->cls << endl;
    cout << rahim->section << endl;
    cout << rahim->roll << endl;
    
    // delete an object
    delete rahim;
    return 0;
}