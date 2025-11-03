#include <bits/stdc++.h>
using namespace std;
    vector<int> nextPermutation(vector<int>& nums) {
        vector<vector<int>> all;
        sort(nums.begin(), nums.end());
        do {
            all.push_back(nums);
        } while (next_permutation(nums.begin(), nums.end()));
        for (int i = 0; i < all.size(); i++) {
            if (all[i] == nums) {
                if (i == all.size() - 1)
                    return all[0];
                return all[i + 1];
            }
        }

        return nums;
    }

int main() {
    vector<int> nums = {1, 2, 3};
    vector<int> result = nextPermutation(nums);
    for (int x : result) cout << x << " ";
    cout << endl;
    return 0;
}