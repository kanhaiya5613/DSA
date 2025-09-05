#include<bits/stdc++.h>
using namespace std;
int maxConsicutive(int arr[],int size){
    int maxcount =1;
    int currentCount=0;
    for(int i=0;i<size;i++){
    if(arr[i] == 1){
        currentCount++;
        if(currentCount > maxcount){
            maxcount=currentCount;
        }
    }
    else{
        currentCount = 0;
    }
}
    return maxcount;
}
int main(){
   int arr[]={1,1,0,0,1,1,1,1,0,1,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << size;
     cout << "The Maximum Consicutive Number is " << maxConsicutive(arr,size);

}