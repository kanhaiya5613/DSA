#include<bits/stdc++.h>
using namespace std;
int mejority_element(int arr[],int n){
     unordered_map<int , int> mpp;
     for(int i=0;i<n;i++){
        mpp[arr[i]]++;
     }
     for(auto it:mpp){
        if(it.second > n/2){
            return it.first;
        }
     }
     return -1;
}
int main(){
    int n;
    cout << "Enter the size of array :";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout << "Enter the "<< i <<"th element of array"<<endl;
        cin >> arr[i];
    }
    cout << "the mejority element is :" << mejority_element(arr,n);
     return 0;
}