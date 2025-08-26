#include<bits/stdc++.h>
using namespace std;
int noOfSubArrays(int arr[],int n,int k){
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum=sum+arr[k];
            }
            if(sum==k){
                cnt++;
            }
        }  
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