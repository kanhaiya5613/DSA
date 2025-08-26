#include<bits/stdc++.h>
using namespace std;
int LongestSubarray(int arr[], int size, int k){
    int left = 0;
    int right = 0;
    int sum = arr[0];
    int maxLen = 0;
    int n = size;
    while(right < n){
        while(left <= right && sum > k){
            sum -= arr[left];
            left++;
        }
        if(sum==k){
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if(right < n) sum +=arr[right];
    }
    return maxLen;
}
int main(){
    int arr[]= {0,1,1,2,1,2,1,3,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k=6;
    cout << "The size Of Longest SubArray is "<< LongestSubarray(arr,size,k);
}