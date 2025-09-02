#include<iostream>
using namespace std;
int findMissing(int arr[],int n){
    int hash[n+1]={0};
    for(int i=1;i<n;i++){
        hash[arr[i]]=1;
    }
    for(int i=1;i<=n+1;i++){
        if(hash[i]==0){
            return i;
        }
    }

}
int main(){
     int n;
    cout << "Enter the size of Arrray :";
    cin >> n;
    int arr[n-1];
    cout <<"Enter the element of Array :";
    for(int i=0;i<n-1;i++){
        cin >>arr[i];
        
    }
    cout<< "Missing Element is :"<<  findMissing(arr,n);
    return 0;
}