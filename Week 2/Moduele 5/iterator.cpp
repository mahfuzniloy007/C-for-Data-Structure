#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    for (auto it = a.begin(); it < a.end(); it++)
    {
        cout<<*it<<endl;
    }
    return 0;
}

// s.begin() -> pointer to the first element.
// s.end() -> pointer to the next element after the last element of the string.
