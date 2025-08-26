#include<bits/stdc++.h>
using namespace std;
int Largest_element(int arr[],int n){
    int Largest = arr[0];
    for(int i=0;i<n;i++){
        if(Largest < arr[i]){
            Largest = arr[i];
        }
    }
    return Largest;
}
int main(){
    int n;
    cout << "Enter The Size Of Array : ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Largest Element Is : " << Largest_element(arr,n);
    return 0;
}