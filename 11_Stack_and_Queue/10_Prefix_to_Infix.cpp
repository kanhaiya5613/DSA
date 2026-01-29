#include<bits/stdc++.h>
using namespace std;
string PrefixToInfix(string s){
    stack<string>st;
    int i = s.size()-1;
    while(i>=0){
        if((s[i]>='0' && s[i]<='9' ) || (s[i]>='a' && s[i]<='z') || (s[i] >='A' && s[i]<='Z') ){
           st.push(string(1, s[i]));

        }
        else{
            string t1 = st.top();
            st.pop();
            string t2 = st.top();
            st.pop();
            string con = "("+t1+s[i]+t2+")";
            st.push(con);
        }
        i--;
    }
    return st.top();
}
int main(){
    string s;
    cout << "Enter Prefix Expression : ";
    getline(cin,s);

    string Infix = PrefixToInfix(s);

    cout << "Infix Expression : " << Infix;
}