#include<bits/stdc++.h>
using namespace std;
int ls(int arr[],int num,int n){
      for(int i=0;i<n;i++){
        if(arr[i]==num){
            return true;
        }
        
      }
      return false;
}
 int Longest_consecutive_sequence(int arr[],int n){
    int num ;
    for(int i=0;i<n;i++){
       num=arr[i];
        int cnt=1;
       while(ls(arr,num+1,n)==true){
           num=num+1;
           cnt++;
       }
       return cnt;
       
    }
    
 }
int main(){
    int n;
    cout << "Enter The Size Of Array : ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
   cout << "The Longest consecutive sequence  Is : " << Longest_consecutive_sequence(arr,n);
    return 0;
}