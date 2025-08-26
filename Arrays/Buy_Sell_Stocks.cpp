#include<bits/stdc++.h>
using namespace std;
int maxprofit(int arr[],int n){
    int maxProfit =0;
    int mini = arr[0];
    for(int i=0;i<n;i++){
        int cost = arr[i]-mini;
        maxProfit=max(maxProfit,cost);
        mini = min(mini,arr[i]);
    }
    return maxProfit;
}
int main(){
int n;
cout << "Enter the size of Array :";
cin >> n;
int arr[n];
cout << "Enter the elements of arrays : ";
for(int i=0;i<n;i++){
    cin >> arr[i];
} 
cout << "The Maximum Profit is : "<< maxprofit(arr,n);
}