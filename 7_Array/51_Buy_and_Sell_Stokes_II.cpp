#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        int i=0;
        int j=1;
        while(j<n){
            while(j<n && prices[j]>=prices[j-1]){
                j++;
            }
            profit = profit + (prices[j-1]-prices[i]);
            i=j;
            j++;
        }
        return profit;
    }
int main(){
    int n;
    cout << "Enter how much number of day you want to analyze stokes : ";
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "The maximum profit is : "<< maxProfit(arr);
}