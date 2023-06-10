#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    char d, e;
    cin >> a  >> d >> b >> e >> c;
    int result;
    if (d == '+')
    {
        result = a + b;
    }
    else if (d == '-')
    {
        result = a - b;
    }
    else
    {
        result = a * b;
    }
    if (result == c)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << result << endl;
    }
    return 0;
}