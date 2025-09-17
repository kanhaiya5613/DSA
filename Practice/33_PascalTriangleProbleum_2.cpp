#include<bits/stdc++.h>
using namespace std;
void pascalTriangle(int n){
    int r = n;
     long long res = 1;
     cout << 1 << " ";
    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);
        cout << res <<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the number of columns : ";
    cin>>n;
    pascalTriangle(n-1);
}