#include<bits/stdc++.h>
using namespace std;
int Second_Largest_element(int arr[],int n){
    int Largest = arr[0];
    for(int i=0;i<n;i++){
        if(Largest < arr[i]){
            Largest = arr[i];
        }
    }
     int Second_Largest = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] > Second_Largest && arr[i] != Largest ){
            Second_Largest = arr[i];
        }
    }
    return Second_Largest;
}
        int main(){
    int n;
    cout << "Enter The Size Of Array : ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << " Second_Largest Element is : " << Second_Largest_element(arr,n);
    return 0;
}