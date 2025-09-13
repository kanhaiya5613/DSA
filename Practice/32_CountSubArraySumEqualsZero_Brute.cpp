#include<bits/stdc++.h>
using namespace std;
int CountSubArraySum(int arr[],int n,int k){
    int count = 0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum += arr[j];
            if(sum == k){
                count++;
            }
        }
    }
    return count;
}
int main(){
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int k;
    cout << "Enter the Value of SubArray Sum : ";
    cin >> k;
    int arr[n]; 
    cout<<"Enter the elements of Array : ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Total SubArray Sum is : " << CountSubArraySum(arr,n,k);
}