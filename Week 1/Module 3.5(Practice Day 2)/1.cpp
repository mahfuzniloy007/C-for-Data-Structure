#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        char section;
        int math_marks;
        int cls;
        Student(char *n,int r,char s,int m,int c)
        {
            strcpy(name,n);
            roll=r;
            section=s;
            math_marks=m;
            cls=c;
        }
};
int main()
{
    Student rahim("Rahim Uddin",01,'A',90,10);
    Student karim("Karim Ahmed",02,'B',94,11);
    Student abul("Abul Khan",03,'C',85,12);
    int m=max(rahim.math_marks,karim.math_marks);
    int mx=max(m,abul.math_marks);
    cout<<mx<<endl;
    if (rahim.math_marks>=karim.math_marks&&abul.math_marks)
    {
        cout<<rahim.name;
    }
    else if (karim.math_marks>=rahim.math_marks&&abul.math_marks)
    {
        cout<<karim.name;
    }
    else if(abul.math_marks>=rahim.math_marks&&karim.math_marks)
    {
        cout<<abul.math_marks;
    }
    return 0;
}