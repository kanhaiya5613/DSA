#include<bits/stdc++.h>
using namespace std;
void insersion_sort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
         int j=i;
         
            while(j>0 && arr[j-1] > arr[j]){
                int temp = arr[j-1];
                arr[j-1] =arr[j];
                arr[j] = temp;
                j--;
                // cout << "runs";
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
    insersion_sort(arr,n);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}