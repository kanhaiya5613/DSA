#include <bits/stdc++.h>
using namespace std;
string removeOccurrences(string s, string part)
{
    while (s.length() > 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}
int main(){
    string str;
    cout << "Enter the string : ";
    getline(cin,str);
    string part;
    cout<< "Enter the strings thats occurances to be Removed : ";
    getline(cin,part);
    cout << "The strings becomes ofter removing occurances : " << removeOccurrences(str,part);

}