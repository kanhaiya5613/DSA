#include<bits/stdc++.h>
using namespace std;
int CountSubArraySum(int arr[],int n,int k){
    map<int,int> mpp;
    mpp[0]=1;
    int presum = 0;
    int cnt=0;
    for(int i=0;i<n;i++){
        presum += arr[i];
        int remove = presum-k;
        cnt += mpp[remove];
        mpp[presum] +=1;
    }
    return cnt;

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