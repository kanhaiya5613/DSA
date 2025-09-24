#include<bits/stdc++.h>
using namespace std;
 vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> st;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                set<int> Hashset;
                for (int k = j + 1; k < n; k++) {
                    long long sum = nums[i]+nums[j];
                    sum += nums[k];
                    long long fourth = (long long)target - sum;
                    if (Hashset.find(fourth) != Hashset.end()) {
                        if (fourth >= INT_MIN && fourth <= INT_MAX) {
                        vector<int> temp = {nums[i], nums[j],nums[k], (int)fourth};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                        }
                    }
                    Hashset.insert(nums[k]);
                }
                
            }
        }
        vector<vector<int>> ans(st.begin(), st.end());

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