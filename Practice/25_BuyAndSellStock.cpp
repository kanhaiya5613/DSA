#include<bits/stdc++.h>
using namespace std;
int BestTime(int arr[],int n){
    int profit = 0;
    int max_profit = INT_MIN;
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i;j++){
            profit=arr[i]-arr[j];
            max_profit=max(profit,max_profit);
        }
    }
    return max_profit;
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