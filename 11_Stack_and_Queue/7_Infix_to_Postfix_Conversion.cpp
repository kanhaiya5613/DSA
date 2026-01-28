#include <bits/stdc++.h>
using namespace std;
int priority(char ch)
{
    if (ch == '^')
        return 3;
    else if (ch == '*' || ch == '/')
        return 2;
    else if (ch == '+' || ch == '-')
        return 1;
    return -1;
}

string infixToPostfix(string s)
{
    stack<char> st;
    string ans = "";

    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];

        if (isalnum(c))
        {
            ans += c;
        }
        else if (c == '(')
        {
            st.push(c);
        }
        else if (c == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while (!st.empty() &&
                   (priority(c) < priority(st.top()) ||
                    (priority(c) == priority(st.top()) && c != '^')))
            {
                ans += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }

    return ans;
}
int main(){
    string s;
    cout << "Enter Infix Expression :";
    getline(cin,s);
    string Postfix = infixToPostfix(s);
    cout << "Postfix Expression : "<<Postfix;
}

