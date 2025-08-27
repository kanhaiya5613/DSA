#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Size of Array :" ;
    cin>>n;
    int arr[n];
    cout<<"Enter the Element Of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int Target;
    cout << "Enter the value of Target : ";
    cin>>Target;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]+arr[j]==Target){
                cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
            }
        }
    }
}