#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="Hello World";
    // cout<<s.size()<<endl;
    // cout<<s.capacity()<<endl;
    // s.clear();
    // cout<<s.size()<<endl;
    // if(s.empty()==true) cout<<"Empty";
    // else cout<<"Not Empty";
    s.resize(20,'X');
    // s.resize(8,'X');
    cout<<s<<endl;
    return 0;
}

// 1. s.size() -> returns the size of the string.
// 2. s.max_size() -> returns the maximum size that string can hold.
// 3. s.capacity() -> returns current available capacity of the string.
// 4. s.clear() -> clear the string.
// 5. s.empty() -> return true/false if the string is empty.
// 6. s.resize() -> change the size of the string.
