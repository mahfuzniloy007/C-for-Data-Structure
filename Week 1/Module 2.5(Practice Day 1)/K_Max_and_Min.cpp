#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int m=min(a,b);
    int mn=min(m,c);
    int n=max(a,b);
    int mx=max(n,c);
    cout<<mn<<" "<<mx;
    return 0;
}