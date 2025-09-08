#include<bits/stdc++.h>
using namespace std;
void LeadersElement(int arr[],int n){
    
        vector<int>ans;
        int leader;
        for(int i=0;i<n;i++){
            leader = true;
            for(int j = i+1;j<n;j++){
                if(arr[j]>arr[i]){
                    leader = false;
                    break;
                }
            }
            if(leader==true) ans.push_back(arr[i]);
        }
        cout<<"The leaders Element are : ";
        for(int i=0;i<ans.size();i++){
            cout << ans[i] << " ";
        }
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
    LeadersElement(arr,n);
}