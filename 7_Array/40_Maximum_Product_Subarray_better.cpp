#include<bits/stdc++.h>
using namespace std;
int MaximumProductSubarray(int arr[],int n){
    int maxi = INT_MIN;
    int mult;
    for(int i=0;i<n;i++){
        mult = 1;
        for(int j=i;j<n;j++){
           mult *= arr[j];
           maxi = max(maxi,mult);
        }
    }
    return maxi;
}
int main(){
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array : ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout<< "The maximum count of subarray is : "<<MaximumProductSubarray(arr,n);
}