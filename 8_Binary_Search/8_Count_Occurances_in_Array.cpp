#include <iostream>
#include <vector>
using namespace std;


int FirstOccurance(vector<int> &nums, int n, int target) {
    int low = 0, high = n - 1, first = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if(nums[mid]==target){
            first = mid;
            high = mid-1;
        }
        else if (nums[mid] > target) {
        
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return first;
}


int LastOccurance(vector<int> &nums, int n, int target) {
    int low = 0, high = n - 1, last = n;
    while (low <= high) {
        int mid = (low + high) / 2;
        if(nums[mid]==target){
            last = mid;
            low = mid + 1;
        }
        else if (nums[mid] > target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return last;
}

// Function to find first and last occurrence of target
vector<int> Occurrences(vector<int> &nums, int target) {
    int lb = FirstOccurance(nums, nums.size(), target);
    int ub = LastOccurance(nums, nums.size(), target);
    if (lb == nums.size() || nums[lb] != target) {
        return {-1, -1};
    }
    return {ub-lb+1};
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

    cout << "Total  occurrnce is: ";
    cout << ans[0] << endl;

    return 0;
}
