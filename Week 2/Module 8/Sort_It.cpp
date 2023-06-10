#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;
    int total_marks;
    
};
bool cmp(Student a,Student b)
{
    if (a.total_marks>b.total_marks) return true;
    else if(a.total_marks==b.total_marks)
    {
        if(a.id<b.id) return true;
        else return false;
    } 
    else return false;
}
int main()
{
    int n;
    cin >> n;
    Student srt[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> srt[i].name >> srt[i].cls >> srt[i].section >> srt[i].id >> srt[i].math_marks >> srt[i].eng_marks;
    }
    for (int i = 0; i < n; i++)
    {
        srt[i].total_marks=srt[i].math_marks+srt[i].eng_marks;
    }
    sort(srt,srt+n,cmp);
    for (int i = 0; i < n; i++)
    {
        cout << srt[i].name << " " << srt[i].cls << " " << srt[i].section << " "
             << srt[i].id << " " << srt[i].math_marks << " " << srt[i].eng_marks << endl;
    }
    return 0;
}




// class Student
// {
// public:
//     string name;
//     int cls;
//     char section;
//     int id;
//     int mathMarks;
//     int engMarks;
//     int totalMarks;

//     Student(string name, int cls, char section, int id, int mathMarks, int engMarks)
//     {
//         this->name = name;
//         this->cls = cls;
//         this->section = section;
//         this->id = id;
//         this->mathMarks = mathMarks;
//         this->engMarks = engMarks;
//         this->totalMarks = mathMarks + engMarks;
//     }
// };

// bool compareStudents(Student a, Student b)
// {
//     if (a.totalMarks != b.totalMarks)
//     {
//         return a.totalMarks > b.totalMarks; // Sort by total marks in descending order
//     }
//     return a.id < b.id; // Sort by ID in ascending order for ties
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<Student> students;
//     for (int i = 0; i < n; i++)
//     {
//         string name;
//         int cls, id, mathMarks, engMarks;
//         char section;
//         cin >> name >> cls >> section >> id >> mathMarks >> engMarks;
//         students.emplace_back(name, cls, section, id, mathMarks, engMarks);
//     }

//     sort(students.begin(), students.end(), compareStudents);

//     for (int i = 0; i < students.size(); i++)
//     {
//         cout << students[i].name << " " << students[i].cls << " " << students[i].section << " "
//              << students[i].id << " " << students[i].mathMarks << " " << students[i].engMarks << endl;
//     }
//     return 0;
// }

// Student(string nm,int cls,char s,int id,int math_marks,int eng_marks)
    // {
    //     nm=name;
    //     cls=clas;
    //     s=section;
    //     id=student_id;
    //     math_marks=mathMarks;
    //     eng_marks=engMarks;
    //     total_marks=math_marks+eng_marks;
    // }