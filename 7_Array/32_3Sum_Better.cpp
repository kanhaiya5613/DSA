#include<bits/stdc++.h>
using namespace std;
void Triplet(int num[],int n){
    set<vector<int>> st;
    for(int i=0;i<n;i++){
        set<int> hashset;
        for(int j=i+1;j<n;j++){
            int third = -(num[i]+num[j]);
            if(hashset.find(third) != hashset.end() ){
                vector<int> temp = {num[i],num[j],third };
                sort(temp.begin(),temp.end());
                st.insert(temp);
            }
            hashset.insert(num[j]);
        }
    }
    vector<vector<int>> ans(st.begin(),st.end());
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
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
    Triplet(arr, n);
}