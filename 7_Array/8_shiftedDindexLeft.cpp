#include<bits/stdc++.h>
using namespace std;
void Rotated_Array(int arr[],int n,int D){
     int temp[D];
     for(int i=0;i<=D;i++){
        temp[i]=arr[i];
     }
     for(int i=0;i<n-D;i++){
        arr[i]=arr[i+D];
     }
     for(int i=n-D;i<n;i++){
        arr[i]=temp[i-(n-D)];
     }
     for(int i=0;i<n;i++){
        cout << arr[i] << " ";
     }
    //  for(int i=0;i<D;i++){
    //     cout << temp[i] << " ";
    //  }
 }
int main(){
    int n;
      cout << "Enter The Size Of Array : ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int D;
    cout <<"Enter The Number  of places That You Want To Shift : ";
    cin >> D ;
     cout << " The Rotated Array is  : " ;
   Rotated_Array(arr,n,D);
    return 0;
}