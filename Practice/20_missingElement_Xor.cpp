#include<iostream>
using namespace std;
int findMissing(int arr[],int N){
   int xor1 = 0, xor2 = 0;
   int n=N-1;
    for (int i = 0; i < n; i++) {
        xor2 = xor2 ^ arr[i];
        xor1=xor1^(i+1);
    }
    xor1=xor1^N;
    return xor1 ^ xor2;
}
int main(){
     int n;
    cout << "Enter the size of Arrray :";
    cin >> n;
    int arr[n-1];
    cout <<"Enter the element of Array :";
    for(int i=0;i<n;i++){
        cin >>arr[i];
        
    }
    cout<< "Missing Element is :"<<  findMissing(arr,n);
    return 0;
}