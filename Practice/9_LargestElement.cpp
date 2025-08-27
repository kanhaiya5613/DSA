#include<iostream>
using namespace std;
int LargestNumber(int arr[],int n){
    int LargestNumber=0;
    for(int i=0;i<n;i++){
        
        if(arr[i]>LargestNumber){
            LargestNumber = arr[i];
        }
        
    }
    return LargestNumber;
}
int main(){
     int n;
    cout << "Enter the Size of Array :";
    cin >> n;
    int arr[n];
    cout << "Enter the Elements of array :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Largest Number : " << LargestNumber(arr,n);
}