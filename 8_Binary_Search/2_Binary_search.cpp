#include<bits/stdc++.h>
using namespace std;
int BS(int nums[],int target,int n){
     int left = 0;
        int right = n-1;
        while(left <= right){
            int mid = (left + right)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target){
                right = mid - 1;

            }
            else{
                left = mid + 1;
            }
        }
        return -1;
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout<< "Enter the elements of array(Sorted) : ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int target;
    cout<<"Enter the value of target : ";
    cin >> target;
    int left = 0;
    int right = n-1;

    int index = BS(arr,target,n);
    if(index == -1){
        cout<< "Number is not present in this array ";
    }
    else{
        cout << "Number is present at index : "<< index;
    }
}