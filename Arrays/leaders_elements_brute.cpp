#include<bits/stdc++.h>
using namespace std;
void leadersElement(int arr[],int n){
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=i;j<n;j++){
            
            if(arr[i]<arr[j]){
                cnt++;
            }
            
            }
            if(cnt==0){
                cout <<  arr[i] << " ";
        }
    }
   
}
int main(){
     int n;
    cout << "Enter The Size Of Array : ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
     cout << " The leaders Element are : ";
     leadersElement(arr,n);
    return 0;
}