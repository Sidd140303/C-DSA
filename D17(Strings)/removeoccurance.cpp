#include <iostream>
using namespace std;

string removeoccurances(string s, string part)
{
    while (s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}

int main()
{
    string s = "daabcbaabcbc";
    cout << "Result : " << removeoccurances(s, "abc");
    return 0;
}