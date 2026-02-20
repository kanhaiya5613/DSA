#include<bits/stdc++.h>
using namespace std;
string convert2Binary(int n){
    string result = "";
    while(n!=1){
        if(n%2==1) result += '1';
        else result += '0';
        n=n/2;
    }
    reverse(result.begin(),result.end());
    return result;
}
int main(){
    int n;
    cout << "Enter a value that you want to convert in Binary : ";
    cin >> n;
    cout << "Binary Form of "<< n << "is : "<< convert2Binary(n);
    return 0;
}