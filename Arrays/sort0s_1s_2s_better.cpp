#include<bits/stdc++.h>
using namespace std;
void sort(int arr[],int n){
    int count1=0;
    int count2=0;
    int count0=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0) count0++;
        if(arr[i]==1) count1++;
        else count2++;
    }
    for(int i=0;i<count0;i++) arr[i]=0;
    for(int i=count0;i<count0+count1;i++) arr[i]=1;
    for(int i=count0+count1;i<n;i++) arr[i]=2;
    cout << endl;
    cout << "The sorted array is :";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
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
     
    cout << "The Unsorted array is :";
      for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    sort(arr,n);
    cout << endl;
     return 0;
   cout << "The sorted array is :";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}