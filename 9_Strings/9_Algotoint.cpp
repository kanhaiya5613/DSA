#include<bits/stdc++.h>
using namespace std;
int myAtoi(string s) {
        int n = s.size();
        long long ans = 0;
        int i = 0;
        
        while(i<n && s[i]==' '){
            i++;
        }
        int sign = 1;
        if (s[i] == '+') {
            i++;
        } else if (s[i] == '-') {
            sign = -1;
            i++;
        }
            
        while(s[i]>='0' && s[i]<='9'){
                ans = ans*10 + (s[i]-'0');
                i++;
                 if(ans*sign > INT_MAX) return INT_MAX;
                 if(ans*sign<INT_MIN) return INT_MIN;
        }
       
        return sign*ans;
    }
int main(){
    string s;
    cout << "Enter a String : ";
    getline(cin,s);
    int ans = myAtoi(s);
    cout << "Integer Found From String : " << ans;
}