#include<iostream>
using namespace std;
bool CheckSorted(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
      cout << "Enter the size of array :";
    cin >> n;
    int arr[n];
    cout << "Enter the elements element of array"<<endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    if(CheckSorted(arr,n)){
        cout<<"Array is Sorted ";
    }
    else{
        cout<<"Array is not sorted";
    }
}