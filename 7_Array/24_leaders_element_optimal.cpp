#include<bits/stdc++.h>
using namespace std;
void leadersElement(int arr[],int n){
    vector<int> ans;
    int maxi=INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(maxi<arr[i]){
            maxi=arr[i];
            ans.push_back(maxi);
        }
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
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
     cout << " The leaders Element are : ";
     leadersElement(arr,n);
    return 0;
}