class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int num = nums[i];
            int complement = target - num;
            if (mpp.find(complement) != mpp.end()) {
                return {mpp[complement], i};
            }
            mpp[num] = i;
        }
        return {-1, -1};
    }
};