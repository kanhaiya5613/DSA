#include<bits/stdc++.h>
using namespace std;
int BS(int arr[],int left,int right,int target){
    int mid = (left+right)/2;
    if(left > right){
        return -1;
    }
    else if(arr[mid]==target){
        return mid;
    }
    else if(arr[mid]>target){
        return BS(arr,left,mid-1,target);
    }
    else{
        return BS(arr,mid+1,right,target);
    }
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

    int index = BS(arr,left,right,target);
    if(index == -1){
        cout<< "Number is not present in this array ";
    }
    else{
        cout << "Number is present at index : "<< index;
    }
}