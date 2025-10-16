#include <iostream>
#include <vector>
using namespace std;

// Lower bound: first index where nums[i] >= target
int lowerBound(vector<int> &nums, int n, int target) {
    int low = 0, high = n - 1, first = n;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] >= target) {
            first = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return first;
}

// Upper bound: first index where nums[i] > target
int upperBound(vector<int> &nums, int n, int target) {
    int low = 0, high = n - 1, last = n;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] > target) {
            last = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return last;
}

// Function to find first and last occurrence of target
vector<int> Occurrences(vector<int> &nums, int target) {
    int lb = lowerBound(nums, nums.size(), target);
    int ub = upperBound(nums, nums.size(), target);
    if (lb == nums.size() || nums[lb] != target) {
        return {-1, -1};
    }
    return {lb, ub - 1};
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of array (sorted): ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int target;
    cout << "Enter the target value: ";
    cin >> target;

    vector<int> ans = Occurrences(arr, target);

    cout << "First and last occurrence: ";
    cout << "[" << ans[0] << ", " << ans[1] << "]" << endl;

    return 0;
}
