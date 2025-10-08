#include<bits/stdc++.h>
using namespace std;
int CountInversions(int arr[],int n){
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                count++;
            }
            
        }
    }
    return count;
}
int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<< "Inversion Count is : "<< CountInversions(arr,n);
}