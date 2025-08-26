#include<bits/stdc++.h>
using namespace std;
unordered_map<int,int> mpp;
int AppearsOnce(int arr[],int size){
    for(int i=0;i<size;i++){
       mpp[arr[i]]++;
    }
    for(auto it : mpp){
        if(it.second==1){
            return it.first;
        }
    }
}
int main(){
    int arr[] = {4,2,3,4,5,5,1,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "The Number That Appear Once Is " << AppearsOnce(arr,size); 
}