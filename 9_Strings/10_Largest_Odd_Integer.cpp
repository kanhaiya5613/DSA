#include<bits/stdc++.h>
using namespace std;
string largestOddNumber(string num) {
        int i = num.size() - 1;
        while( i >= 0 && ( num[i]-'0')%2==0  ){
            i--;
        }
        return i>=0?num.substr(0,i+1):"";
    }
    int main(){
        string s;
        cout << "Enter a numbers of string : ";
        getline(cin,s);
        cout << "Largest odd Integer is : " << largestOddNumber(s);
    }