#include<iostream>
using namespace std;
int mostConsecutive(int arr[],int n){
    int num = 0;
    int maxi = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            num++;
           maxi = max(num,maxi);
        }
        else {
            num = 0;
        }
        
    }
    return maxi;
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
    cout << "Most consecutive ones are :" <<mostConsecutive(arr,n);
}