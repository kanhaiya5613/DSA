#include<iostream>
using namespace std;
int LongestSubArray(int arr[],int n,int k){
    int left = 0;
    int right = 0;
    int sum = 0;
    int length = 0;
    while(right<n){
        while(left<=right && sum > k){
            sum -= arr[left];
            left++;
        }
        
        if(sum==k){
            length = max(length,right-left);
        }
        right++;
        if(right<n){
            sum += arr[right];
        }
    }
    return length;
}
int main(){
      int n;
    cout << "Enter the size of Arrray :";
    cin >> n;
    int k;
    cout << "Enter the value of K : ";
    cin >> k;
    int arr[n];
    cout << "Enter the element of Array :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Longest SubArray With Sum K is : " << LongestSubArray(arr, n, k);
}