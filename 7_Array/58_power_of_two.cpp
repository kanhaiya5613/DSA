#include<bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n) {
        if(n<=0){
            return false;
        }
        while(n%2==0){
            n /= 2;
        }
        return n==1;
    }
int main(){
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    if(isPowerOfTwo(n)){
        cout << "number is power of 2";
    }
    else{
        cout << "number is not a power of 2";
    }
}