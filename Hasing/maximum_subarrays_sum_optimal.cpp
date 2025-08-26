#include<bits/stdc++.h>
using namespace std;
int maximumsum_subarrays(int arr[],int n){
   int max=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        sum += arr[i];
        if(sum<0){
         sum=0;
        }
        if(sum>max){
            max=sum;
        }
    
    }
    return max;
   
}
int main(){
    int n;
    cout << "Enter the size of array :";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "the maximum sum of subarrays is :" << maximumsum_subarrays(arr,n);
     return 0;
}