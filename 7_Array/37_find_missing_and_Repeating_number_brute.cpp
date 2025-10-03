#include<bits/stdc++.h>
using namespace std;
void check_Numbers(int arr[],int n){
    for(int i=1;i<=n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(arr[j] == i){
                cnt++;
            }
        }
        if(cnt==2){
            cout << "\nRepeated Element is : " << i;
        }
        else if(cnt==0){
            cout << "\nMissing Element is : " << i;
        }
    }
}
int main(){
    int  n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    check_Numbers(arr,n);
}