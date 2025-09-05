#include<bits/stdc++.h>
using namespace std;
int CountNumber(int num ,int arr[],int n){
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            cnt++;
        }
    }
    return cnt;

}
int main(){
    int n;
    cout << "Please Enter The Size Of Array :" << endl;
    cin >> n;
   int arr[n];
   cout << "Enter The Elements Of Array :" << endl;
   for(int i=0;i<n;i++){
    cin >> arr[i];
   }
   int num;
   cout << "Enter the Number Which You Want to Count In Array :";
   cin >> num;
   int count = CountNumber(num,arr,n); 
   cout << count ;
}