#include<bits/stdc++.h>
using namespace std;
int reverse(int x) {
        long long ans = 0;
        while(x!=0){
            long long temp = x % 10;
            x=x/10;
            ans = ans*10+temp;
        }
        if(ans<INT_MIN || ans>INT_MAX){
            return 0;
        }
        else{
            return ans;
        }
    }
int main(){
    int n;
    cout << "Enter the value of integer that you want to reverse : ";
    cin >> n;
    cout << "reverse is : " << reverse(n);
}