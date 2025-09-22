#include<bits/stdc++.h>
using namespace std;
void Function(int n){
    int res=1;
    cout << 1 << " ";
    for(int i=1;i<n;i++){
        res=res*(n-i);
        res=res/(i);
        cout << res << " ";
    }
}
int main(){
    int n,r;
    cout << "Enter Row Number : ";
    cin >> n;
    Function(n);
}