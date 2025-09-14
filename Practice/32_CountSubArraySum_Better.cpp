#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Function to count subarrays with given sum using better approach (prefix sum + hashmap)
int countSubArraySum(const vector<int>& arr, int targetSum) {
    unordered_map<int, int> prefixSumCount;
    int currSum = 0, count = 0;
    prefixSumCount[0] = 1; // To handle subarrays starting from index 0

    for (int num : arr) {
        currSum += num;
        if (prefixSumCount.find(currSum - targetSum) != prefixSumCount.end()) {
            count += prefixSumCount[currSum - targetSum];
        }
        prefixSumCount[currSum]++;
    }
    return count;
}

int main() {
    vector<int> arr = {1, 2, 3, -2, 5, 1, 2};
    int targetSum = 5;
    cout << "Count of subarrays with sum " << targetSum << " is: "
         << countSubArraySum(arr, targetSum) << endl;
    return 0;
}