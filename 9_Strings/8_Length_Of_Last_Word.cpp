#include<bits/stdc++.h>
using namespace std;
int lengthOfLastWord(string s) {
        int i=s.size()-1;
        int ans = 0;
        while(i>=0 && s[i]==' '){
            i--;
        }
        while(i>=0 && s[i]!=' '){
            ans++;
            i--;
        }
        return ans;
    }
int main(){
    string s;
    cout<< "Enter a String : ";
    getline(cin,s);
    int Ans = lengthOfLastWord(s);
    cout << "Length of last String is : " << Ans;
}