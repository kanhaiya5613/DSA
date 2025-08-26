#include<bits/stdc++.h>
using namespace std;
int Function(int n,int r){
    int res=1;
    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);
    }
    return res;
}
int main(){
    int n,r;
    cout << "Enter Position of Element : ";
    cin >> n;
    cin >> r;
    cout << "Following is the Values At Given Place : " << Function(n,r);
}