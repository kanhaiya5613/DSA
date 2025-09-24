#include<bits/stdc++.h>
using namespace std;
 vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> st;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    for(int l=k+1;l<n;l++){
                        long long sum = 1LL * nums[i]+nums[j]+nums[k]+nums[l];
                        if(sum == target){
                            vector<int>temp = {nums[i],nums[j],nums[k],nums[l]};
                            sort(temp.begin(),temp.end());
                            st.insert(temp);
                        }
                    }
                }
            }
        }
        vector<vector<int>>  ans(st.begin(), st.end());
      
        return ans;
    }
int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    
     int Target;
    cout<< "Enter the Value of Target : ";
    cin >> Target;
    cout << "Enter the Elements of array : ";

      vector<int> nums(n); 
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
   
     vector<vector<int>> FourSum = fourSum(nums, Target);

   
    cout << "\nUnique Foursum is:\n";
    for (auto row : FourSum) {
        for (auto val : row) {
            cout << val << " ";
        }
        cout << "\n";
    }
}