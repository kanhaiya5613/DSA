#include<bits/stdc++.h>
using namespace std;
int Two_Sum(int arr[],int n,int k){
    int sum = 0;
    int left = 0;
    int right = n-1;
    while(left < right){
    sum = arr[left] + arr[right];
    if(sum > k){
        right--;  
    }
    else if(sum < k){
        left++;
    }
    else if(sum==k){
        return 1;
    }
} 
return 0;
}
int sort(int arr[], int size,int k){
    sort(arr, arr + size);
    return Two_Sum(arr,size,k);
}
int main(){
    int arr[]={2,4,7,9,1,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 16;
    if(sort(arr,n,k)){
        cout << "Two sum found" << endl;
    }
    else{
        cout << "Two sum not found" << endl;
    }
}