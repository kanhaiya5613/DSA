#include<bits/stdc++.h>
using namespace std;
int MaximumProductSubarray(int arr[],int n,int product){
    int count = 0;
    int mult;
    for(int i=0;i<n;i++){
        mult = 1;
        for(int j=i;j<n;j++){
           mult *= arr[j];
            if(mult == product){
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
    int product;
    cout << "Enter the value of Product : ";
    cin >> product;
    int arr[n];
    cout << "Enter the elements of array : ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout<< "The maximum count of subarray is : "<<MaximumProductSubarray(arr,n,product);
}