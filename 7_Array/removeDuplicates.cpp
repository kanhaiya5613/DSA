#include<bits/stdc++.h>
using namespace std;
int checkDuplicates(int arr[],int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}
int main(){
     int n;
    cout << "Enter The Size Of Array : ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "The Actual Size of Array is : " << checkDuplicates(arr,n);

    return 0;
}