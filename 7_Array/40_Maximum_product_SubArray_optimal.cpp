#include <bits/stdc++.h>
using namespace std;
int MaximumProductSubarray(int arr[],int n){
    int suffix = 1;
    int prefix = 1;
    int maxi = INT_MIN;
    for(int i = 0;i<n;i++){
        if(prefix == 0) prefix = 1;
        if(suffix == 0) prefix = 1;
        prefix = prefix * arr[i];
        suffix = suffix * arr[n-i-1];
        maxi = max(maxi,max(prefix,suffix));
    }
    return maxi;
}
int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The maximum product of subarray is : " << MaximumProductSubarray(arr, n);
}