#include<bits/stdc++.h>
using namespace std;
int mejority_element(int arr[],int n){
     for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                cnt++;
            }
            if(cnt>((n/2))){
                return arr[i];
            }
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