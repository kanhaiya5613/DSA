#include<bits/stdc++.h>
using namespace std;
int SearchInsertPosition(int arr[],int target,int n){
    int low = 0;
    int high = n-1;
    int ans = n;
    while(low<=high){
      int mid = (low+high)/2;
      if(arr[mid]>=target){
        ans = mid;
        high = mid-1;
      }  
      else{
        low = mid + 1;
      }
    }
    return ans;
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

    int index = SearchInsertPosition(arr,target,n);
    cout << "The Search Or Insert Position Is : "<< index;
    
}