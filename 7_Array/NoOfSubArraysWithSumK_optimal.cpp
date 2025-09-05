#include<bits/stdc++.h>
using namespace std;
int noOfSubArrays(int arr[], int n, int k) {
    map<int, int> mpp;
    mpp[0] = 1;
    int preSum = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        preSum += arr[i];
        int remove = preSum - k;
        if (mpp.find(remove) != mpp.end()) {
            cnt += mpp[remove];
        }
        mpp[preSum]++;
    }
    return cnt;
}
int main(){
    int n,m;
    cout << "Enter the number of elements of Arrays : ";
    cin >> n ;
    int arr[n];
    cout << "Enter The elements of array : ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int k;
    cout << "Enter the value of K : ";
    cin >> k;
    cout << "The Number of SubArrays With Sum K is : " <<  noOfSubArrays(arr,n,k) ;
    return 0;
}