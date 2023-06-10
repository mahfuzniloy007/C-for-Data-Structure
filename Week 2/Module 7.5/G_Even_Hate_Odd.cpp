#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        int ar[a];
        for (int i = 0; i < a; i++)
        {
            cin>>ar[i];
        }
        if (a%2!=0)
        {
            cout<<"-1";
        }
        
    }
    
    return 0;
}