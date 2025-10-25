#include<bits/stdc++.h>
using namespace std;
int FoundElement(int nums[],int n,int target){
    int left = 0;
        
        int right = n-1;
        while(left <= right){
           int mid = (left+right)/2;
            if(nums[mid]==target) return mid;

            // Left Sorted 

            if(nums[left]<=nums[mid]){
                if(nums[left] <= target && target <= nums[mid]){
                    right = mid - 1;
                }
                else
                    left = mid + 1;
                

            }
            else {
                if(nums[mid]<=target && target <=nums[right]){
                    left = mid + 1;
                }
                else{
                    right = mid - 1;
                }
            }
        }
        return -1;
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout<< "Enter the elements of array : ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int target;
    cout << "Enter the value of Target : ";
    cin >> target;
    int ans = FoundElement(arr,n,target);
    if(ans == -1){
        cout << "Element Not Found ";
    }
    else{
        cout<< "Element found at index " << ans;
    }
}