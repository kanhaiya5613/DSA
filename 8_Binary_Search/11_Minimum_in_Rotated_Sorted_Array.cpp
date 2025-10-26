#include<bits/stdc++.h>
using namespace std;
int findMinimum(int arr[],int n){
    int low = 0;
    int high = n-1;
    int minimum = INT_MAX;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[low]<=arr[mid]){
            minimum = min(minimum,arr[low]);
            low = mid + 1;
        }
        else{
            minimum = min(minimum,arr[mid]);
            high = mid - 1;
        }

    }
    return minimum;
}
int main(){
    int n;
    cout << "enter the size of array : ";
    cin >> n;
    int arr[n];
    cout<< "Enter the elements of array : ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int ans = findMinimum(arr,n);
    cout << "The minimum element in the array is : "<< ans;
}
