#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a[n];
    cin.getline(a,n);
    sort(a,a+n);
    cout<<a;
    return 0;
}