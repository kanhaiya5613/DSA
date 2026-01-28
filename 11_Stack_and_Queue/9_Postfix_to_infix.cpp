#include<bits/stdc++.h>
using namespace std;
string PostfixToInfix(string s){
    stack<string>st;
    int i = 0;
    while(i<s.size()){
        if((s[i]>='0' && s[i]<='9' ) || (s[i]>='a' && s[i]<='z') || (s[i] >='A' && s[i]<='Z') ){
           st.push(string(1, s[i]));

        }
        else{
            string t1 = st.top();
            st.pop();
            string t2 = st.top();
            st.pop();
            string con = '('+t2+s[i]+t1+')';
            st.push(con);
        }
        i++;
    }
    return st.top();
}
int main(){
    string s;
    cout << "Enter Postfix Expression : ";
    getline(cin,s);

    string Infix = PostfixToInfix(s);

    cout << "Infix Expression : " << Infix;
}