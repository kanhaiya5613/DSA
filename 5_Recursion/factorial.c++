
#include<bits/stdc++.h>
using namespace std;
// int fact = 1;
int func(int n){
    if(n ==1){
     return 1;
    }
    return n*func(n-1);
}
int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    int fact = func(n);
    cout << fact;
    return 0;
}