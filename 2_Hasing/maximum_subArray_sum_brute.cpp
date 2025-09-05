#include<bits/stdc++.h>
using namespace std;
int maximumsum_subarrays(int arr[],int n){
    for(int i=0;i<n;i++){
        int max=INT_MIN;
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<n;k++){
                sum += arr[k];
            }
            if(sum>max){
                max=sum;
            }
        }
        return max;
    }
    return -1;
}
 main(){
    int n;
    cout << "Enter the size of array :";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "the maximum sum of subarrays is :" << maximumsum_subarrays(arr,n);
     return 0;
}