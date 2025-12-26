#include<bits/stdc++.h>
using namespace std;
string reverseWords(string s) {
        reverse(s.begin(),s.end());

        
        string Ans="";
        for(int i=0;i<s.length();i++){
            string word = "";
        while(i<s.length() && s[i]!=' '){
                word += s[i];
                i++;
            }
        if(word.size()>0){
            reverse(word.begin(),word.end());
            Ans += " " + word;
        }
        }  
        return Ans.substr(1);
    }
    int main(){
        string str1;
    cout << "Enter the main string in which we have to search : ";
    getline(cin,str1);
    cout << "Revesed Word is : " << reverseWords(str1);
    }