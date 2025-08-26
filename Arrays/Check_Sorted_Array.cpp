#include<bits/stdc++.h>
using namespace std;
void Check_Sort(int arr[],int n){
    int Check = 0;
       for(int i=0;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i] = temp;
                Check = 1;
            }
        }
       }
        if(Check==0){
            cout << "The Array is Sorted";
        }
        else {
            cout << "The Array is Not Sorted";
        }
        cout << endl <<"The Sorted array is : ";
         for(int i=0;i<=n;i++){
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
    Check_Sort(arr,n-1);
    return 0;
}