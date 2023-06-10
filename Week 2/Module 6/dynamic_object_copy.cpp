#include <bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        Person(string name, int age)
        {
            this->name = name;
            this->age = age;
        }
};
int main()
{
    Person* abul=new Person("Abul Ahmed", 24);
    Person* babul=new Person("Babul Ahmed", 27);
    *abul=*babul;
    delete babul;
    cout << abul->age<<" "<<abul->name<< endl;
    return 0;
}