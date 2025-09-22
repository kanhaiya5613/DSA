#include<bits/stdc++.h>
using namespace std;
void twoSum(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) continue;
            if(arr[i]+arr[j]==k){
                cout << "("<<i<<","<<j<<")"<<endl;
            }
        }
    }
}
int main(){
    int arr[]={1,3,5,6,8,9,4,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k = 15;
    twoSum(arr,size,k);
}