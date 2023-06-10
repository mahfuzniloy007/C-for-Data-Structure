#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    getline(cin, a);
    stringstream ss(a);
    string b;
    int cnt = 0;
    while (ss >> b)
    {
        cnt++;
    }
    cout << cnt;
    return 0;
}