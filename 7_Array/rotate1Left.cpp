#include<bits/stdc++.h>
using namespace std;
void Rotated_Array(int arr[],int n){
    int temp=arr[0];
    for(int i=0;i<n;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1] = temp;
      for(int i=0;i<n;i++){
        cout << arr[i] << " ";
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
     cout << " The Rotated Array is  : " ;
   Rotated_Array(arr,n);
    return 0;
}