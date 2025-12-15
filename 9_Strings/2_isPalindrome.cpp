#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s)
{
    int start = 0;
    int end = s.length() - 1;
    while (start < end)
    {
        if (!isalnum(s[start]))
        {
            start++;
            continue;
        }
        if (!isalnum(s[end]))
        {
            end--;
            continue;
        }
        if (tolower(s[start]) == tolower(s[end]))
        {
            start++;
            end--;
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main(){
    string str;
    cout << "Enter String : ";
    getline(cin,str);
    bool ans = isPalindrome(str);
    if(ans){
        cout << "String is Palindrome ";
    }
    else{
        cout << "String is not palindrome ";
    }
}