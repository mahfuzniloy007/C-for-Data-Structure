#include<bits/stdc++.h>
using namespace std;
int main()
{
    // string a="Hello";
    // string b="World";
    // a+=b;
    // a.append(b);
    // a="HelloA";
    // a.push_back('a');
    // a.pop_back();
    // a.pop_back();
    // a.assign("Gelo");
    string a="HelloWorld";
    // a.erase(5,2); ->(string index,how much want to remove)
    // a.replace(5,2,"BO");
    a.insert(5,"Mahfuz");
    cout<<a<<endl;
    return 0;
}

// 1. s+= -> append another string.
// 2. s.append() -> append another string.
// 3. s.push_back() -> add character to the last of the string.
// 4. s.pop_back() -> remove the last character of the string.
// 5. s= -> assign string.
// 6. s.assign() -> assign string.
// 7. s.erase() -> erase characters from the string.
// 8. s.replace() -> replace a portion of the string.
// 9. s.insert() -> insert a portion to a specific position.