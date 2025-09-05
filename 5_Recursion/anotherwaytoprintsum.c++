#include<bits/stdc++.h>
using namespace std;
void func(int n,int sum){
    if(n==0){
        cout << sum;
    }
    func(n-1,sum+n);
}
int main(){
    int n;
    cin >> n;
    func(n,0);
}