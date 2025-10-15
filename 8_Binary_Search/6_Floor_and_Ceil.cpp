#include<bits/stdc++.h>
using namespace std;
void FloorAndCeil(int arr[],int target,int n){
    int low = 0;
    int high = n-1;
    int floor = -1;
    int ceil = -1;

    while(low<=high){
        int mid = ( low + high)/2;
        if(arr[mid]==target){
            ceil = arr[mid];
            floor = arr[mid];
            break;
        }
        else if(arr[mid] > target){
            ceil = arr[mid];
            high = mid - 1;
        }
        else{
            floor = arr[mid];
            low = mid + 1;
        }
    }
    cout << "Floor is : "<< floor;
    cout << "\nCeil is : "<< ceil;

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

    FloorAndCeil(arr,target,n);
}