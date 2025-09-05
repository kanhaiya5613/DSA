#include<bits/stdc++.h>
using namespace std;
int minSubArraySum(int arr[],int n){
    int maxi = INT_MIN;
    int sum;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sum = 0;
            for(int k = i;k <=j;k++){
                sum +=arr[k];
                maxi = max(sum,maxi);
            }
        }
    }
    return maxi;
}
int main(){
    int n;
    cout << "Enter the size of Arrray :";
    cin >> n;
    int arr[n];
    cout <<"Enter the element of Array :";
    for(int i=0;i<n;i++){
        cin >>arr[i];
        
    }
     cout << "T=minimum subarray sum is : " << minSubArraySum(arr,n);
}