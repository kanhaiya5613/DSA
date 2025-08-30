#include<iostream>
using namespace std;
void RotateArray(int arr[],int n){
    int temp = arr[0];
    
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
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
    cout << "Enter the elements element of array"<<endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    RotateArray(arr,n);
}