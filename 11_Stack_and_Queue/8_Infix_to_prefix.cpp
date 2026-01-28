#include<bits/stdc++.h>
using namespace std;

int priority(char ch){
    if(ch=='^') return 3;
    if(ch=='*' || ch=='/') return 2;
    if(ch=='+' || ch=='-') return 1;
    return -1;
}

string infixToPrefix(const string& s) {

    string str = s;

    reverse(str.begin(), str.end());

    for(char &c : str){
        if(c=='(') c=')';
        else if(c==')') c='(';
    }

    stack<char> st;
    string ans="";

    for(char c : str){

        if(c==' ') continue;   // 👈 skip spaces

        if(isalnum((unsigned char)c)){
            ans += c;
        }
        else if(c=='('){
            st.push(c);
        }
        else if(c==')'){
            while(!st.empty() && st.top()!='('){
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() &&
                 (priority(c) < priority(st.top()) ||
                 (priority(c)==priority(st.top()) && c!='^'))){
                ans += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    while(!st.empty()){
        ans += st.top();
        st.pop();
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

int main(){
    string s;
    cout << "Enter Infix Expression : ";
    getline(cin,s);

    string Prefix = infixToPrefix(s);

    cout << "Prefix Expression : " << Prefix;
}
