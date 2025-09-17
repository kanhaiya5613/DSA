#include<bits/stdc++.h>
using namespace std;
int pascalTriangle(int n,int r){
    long long res = 1;
    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);
    }
    return res;
}
int main(){
    int n,m;
    cout << "Enter the number of rows and columns respectively of that element that you want to printed : ";
    cin >> n>>m;
    cout<<"The Element is : " << pascalTriangle(n,m) <<endl;

}