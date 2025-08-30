#include<iostream>
using namespace std;
void RotateArray(int arr[],int n,int k){
    int temp[k];
    for(int i=0;i<k;i++){
        temp[i]=arr[i];
    }
    
    for(int i=0;i<n-k;i++){
        arr[i]=arr[i+k];
    }
    for(int i = n-k; i<n; i++){
        arr[i]=temp[i-k];
    }
    cout<<"Rotated Array : ";
    for(int i=0;i<n;i++){
        cout << arr[i] << "\t";
    }
}
int main(){
     int n; 
    cout << "Enter the size of array :";
    cin >> n;
    int arr[n];
    int k;
    cout<<"Enter a number that you want to rotate the array: ";
    cin >> k;
    cout << "Enter the elements element of array"<<endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    RotateArray(arr,n,k);
}