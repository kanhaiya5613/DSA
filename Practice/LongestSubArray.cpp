#include<bits/stdc++.h>
using namespace std;
int longestSubarray(int arr[],int size,int k){
    int sum=arr[0];
    int left=0;
    int right=0;
    int maxlenght = 0;
    while(right <= size){            // TWO POINTER METHOD
       if(right >= left && sum > k){
        sum = sum - arr[left];
        left++;
       }
       if(sum==k){
        maxlenght = max(maxlenght,right-left+1);
       }
       right++;
       sum += arr[right];
    }
    return maxlenght;
}
int main(){
    int arr[]={1,-2,-3,2,1,3,2,3,1,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    cout << "The maximum Length is : " <<  longestSubarray(arr,size,k);
}