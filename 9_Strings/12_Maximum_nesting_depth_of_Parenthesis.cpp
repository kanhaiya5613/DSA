#include<bits/stdc++.h>
using namespace std;
int maxDepth(string s) {
        int depth = 0;
        int Ans=0;
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                depth++;
                Ans = max(Ans,depth);
            }
            else if(s[i]==')'){
                depth--;
            }
            else{
                continue;
            }
           
        }
        return Ans;

    }
int main(){
    string s;
    cout<< "Enter a String of paranthesis : ";
    getline(cin,s);
    int Ans = maxDepth(s);
    cout<< "Maximum depth of paranthesis is : "<<Ans;
}