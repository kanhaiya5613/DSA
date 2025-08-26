#include<bits/stdc++.h>
using namespace std;
void LongestSubarray(int arr[],int size,int l){
    int length = 0;
    for(int i=0;i<size;i++){
    int sum = 0;
    for(int j=i;j<size;j++){
        sum += arr[j];
        if(sum == l){
            length = max(length,j-i+1);
        }
    }   
}
cout << length;
}
int main(){
    int arr[]= {0,1,1,2,1,2,1,3,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k=6;
    LongestSubarray(arr,size,k);
}