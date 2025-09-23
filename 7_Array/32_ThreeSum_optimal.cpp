#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> Triplet(int num[],int n){
    vector<vector<int>> ans ;
    sort(num,num+n);
    for(int i=0;i<n;i++){
        if(i>0 && num[i]==num[i-1]) continue;
        int j=i+1;
        int k=n-1;
        while(j<k){
            int sum = num[i] + num[j] + num[k];
            if(sum<0){
                j++;
            }
            else if(sum>0){
                k--;
            }
            else{
                vector<int> temp = { num[i],num[j],num[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j<k && num[j]==num[j-1]) j++;
                while(j<k && num[k]==num[k+1]) k--;
            }
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the Elements of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   
     vector<vector<int>> triplet =  Triplet(arr, n);;

   // Print Triplets
    cout << "\nUnique triplets with sum 0:\n";
    for (auto row : triplet) {
        for (auto val : row) {
            cout << val << " ";
        }
        cout << "\n";
    }
}