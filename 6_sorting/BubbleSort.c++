#include<bits/stdc++.h>
using namespace std;
int Bubble_sort(int arr[],int n){
    for(int i=n-1;i>=0;i--){
         int didsort = 0;
         for(int j=0;j<=i;j++){
            if(arr[j] > arr[j+1]){  
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                didsort =1;
            }
         }
         if(didsort==0){
            break;
         }
         cout << "runs"<< endl;
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
    Bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        cout << arr[i] << "\t";
    }
}