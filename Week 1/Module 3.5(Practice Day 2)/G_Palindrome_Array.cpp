#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int a[n];
    for (size_t i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int flag=0;
    int i=0,j=n-1;
    while (i<j)
    {
        if(a[i]==a[j])
        {
            flag=1;
        }
        i++;
        j--;
    }
    if (flag==0)
    {
        cout<<"NO";
    }
    else if (flag==1)
    {
        cout<<"YES";
    }
    return 0;
}