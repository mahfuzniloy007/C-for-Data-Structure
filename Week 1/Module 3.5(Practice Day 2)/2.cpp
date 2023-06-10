#include<bits/stdc++.h>
using namespace std;
class Cricketer
{
	public:
        int jersey_no;
        char country[100];
};
int main()
{
    Cricketer *dhoni = new Cricketer;
    char name[100]="India";
    (*dhoni).jersey_no=18;
    strcpy((*dhoni).country,name);
    cout<<dhoni->jersey_no<<endl;
    
    delete dhoni;
    Cricketer *kohli = dhoni;
    cout<<kohli->jersey_no<<endl;
    return 0;
}