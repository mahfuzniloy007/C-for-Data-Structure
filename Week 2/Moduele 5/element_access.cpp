#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    cout<<s[0]<<endl;
    cout<<s.at(0)<<endl;
    cout<<s.back()<<endl;
    cout<<s.front()<<endl;
    return 0;
}

// 1. s[i] -> access the ith index of the string.
// 2. s.at(i) -> access the ith index of the string.
// 3. s.back() -> access the last element of the string.
// 4. s.front() -> access the first element of the string.
