#include<bits/stdc++.h>
using namespace std;
int AppearsOnce(int arr[],int size){
    for(int i=0;i<size;i++){
        int num = arr[i];
        int cnt = 0;
        for(int j=i+1;j<size;j++){
            if(num == arr[j]){
               cnt++;
            }
        }
        if(cnt==0){
            return num;
        }
    }
}
int main(){
    int arr[] = {4,2,3,4,5,5,1,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "The Number That Appear Once Is " << AppearsOnce(arr,size); 
}