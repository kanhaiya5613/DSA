#include <bits/stdc++.h>
using namespace std;
bool isAlphaNumeric(char ch){
        if((ch >= '0' && ch <= '9')||(tolower(ch)>='a' && tolower(ch)<='z')){
            return true;
        }
        else return false;
    }
bool isPalindrome(string s)
{
    int start = 0;
    int end = s.length() - 1;
    while (start < end)
    {
        if (!isAlphaNumeric(s[start]))
        {
            start++;
            continue;
        }
        if (!isAlphaNumeric(s[end]))
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