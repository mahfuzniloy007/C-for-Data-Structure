#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;
};
int main()
{
    Student rahim, karim;
    rahim.cls = 8;
    rahim.roll = 20;
    rahim.section = 'A';
    char nm1[100] = "Rahim Uddin";
    strcpy(rahim.name, nm1);


    karim.cls = 11;
    karim.roll = 110;
    karim.section = 'C';
    char nm2[100] = "Karim Khan";
    strcpy(karim.name, nm2);

    
    cout << rahim.section << endl
         << karim.name;
    return 0;
}