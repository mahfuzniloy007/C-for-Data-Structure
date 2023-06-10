#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int flag=0;
    getline(cin,s);
    string word;
    stringstream ss(s);
    while (ss>>word)
    {
        if (word=="Ratul")
        {
            flag=1;
        }
    }
    if (flag==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}