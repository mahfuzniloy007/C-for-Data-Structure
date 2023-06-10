#include<bits/stdc++.h>
using namespace std;
namespace Abul
{
    int age=20;
    void fun()
    {
        cout<<"Abul Namespaces"<<endl;
    }
}
namespace Babul
{
    int age2=30;
    void fun()
    {
        cout<<"Babul Namespaces"<<endl;
    }
}
using namespace Abul;
int main()
{
    cout<<age<<endl;
    cout<<Babul::age2<<endl;
    fun();
    Babul::fun();
    return 0;
}