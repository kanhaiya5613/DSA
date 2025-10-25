#include<bits/stdc++.h>
using namespace std;
 bool search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = (left + right) / 2;

            if (nums[mid] == target)
                return true;

            // 🔹 Handle duplicates at both ends
            if (nums[left] == nums[mid] && nums[mid] == nums[right]) {
                left++;
                right--;
            }
            // 🔹 Left part is sorted
            else if (nums[left] <= nums[mid]) {
                if (nums[left] <= target && target < nums[mid])
                    right = mid - 1;
                else
                    left = mid + 1;
            }
            // 🔹 Right part is sorted
            else {
                if (nums[mid] < target && target <= nums[right])
                    left = mid + 1;
                else
                    right = mid - 1;
            }
        }
        return false;
    }
    int main(){
        int n;
        cout << "Enter the size of array : ";
        cin >> n;
        vector<int>nums(n);
        cout<<"enter the Elements of Array : ";
        for(int i=0;i<n;i++){
            cin >> nums[i];
        }
        int target;
        cout << "Enter the value of target : ";
        cin >> target;
        bool ans = search(nums,target);
        if(ans == true ){
            cout << "The number is present in array "; 
        }
        else {
            cout << "The number is not present in the array";
        }
    }