#include<bits/stdc++.h>
using namespace std;
int BestTime(int arr[],int n){
    int mini = arr[0];
    int profit = 0;
    for(int i=0;i<n;i++){
        int cost = arr[i]-mini;
        profit = max(profit,cost);
        mini = min(mini,arr[i]);
    }
    return profit;
}
int main(){
    int n;
    cout << "Enter the size of Arrray :";
    cin >> n;
    int arr[n];
    cout << "Enter the element of Array :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"max profit : " << BestTime(arr,n);
}