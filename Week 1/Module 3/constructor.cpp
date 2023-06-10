#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;
    Student(int c,int s,char *n,int r)
    {
        cls=c;
        section=s;
        strcpy(name,n);
        roll=r;
    }
};
int main()
{
    Student rahim(8,'C',"Rahim Ullah",765);
    Student karim(10,'B',"Karim Ullah",755);
    cout << rahim.name<<endl<<rahim.cls<<endl<<rahim.section<<endl<<rahim.roll;
    return 0;
}