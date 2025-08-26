#include<bits/stdc++.h>
using namespace std;
void merge( int arr[], int low, int mid, int high){
    int temp[high - low + 1];
    int left = low;
    int right = mid+1;
    int k = 0;
    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){ 
            temp[k] = arr[left];
            left++;
        }
        else{
        temp[k] = arr[right];
        right++;
        }
        k++;
    }
    while(left<=mid){
        temp[k] = arr[left];
        left++;
        k++;
    }
    while(right <= high){
        temp[k] = arr[right];
        right++;
        k++;
    }
    for(int i = low;i<=high;i++){
        arr[i] = temp[i-low];
    }
}
void mS(int arr[], int low, int high){
    if(low == high) return;
    int mid = (low + high) / 2;
    mS(arr, low, mid);
    mS(arr, mid+1, high);
    merge(arr, low, mid, high);
}
void mergesort(int arr[], int n) {
    mS(arr, 0, n-1);
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    mergesort(arr, n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}