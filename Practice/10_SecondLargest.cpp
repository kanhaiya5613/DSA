#include<iostream>
using namespace std;
int secondLargestNumber(int arr[],int n){
    int LargestNumber=0;
    int SecondLargest = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>LargestNumber){
            LargestNumber = arr[i];
        }
        if(arr[i]>SecondLargest&&arr[i]!=LargestNumber){
            SecondLargest=arr[i];
        }
    }
    return SecondLargest;
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
    cout << " Second Largest Number : " << secondLargestNumber(arr,n);
}