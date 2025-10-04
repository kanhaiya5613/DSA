#include <bits/stdc++.h>
using namespace std;

vector<int> check_Numbers(int arr[], int n) {
    int xr = 0;

    // Step 1: XOR all array elements and numbers from 1 to n
    for (int i = 0; i < n; i++) {
        xr ^= arr[i];
    }
    for (int i = 1; i <= n; i++) {
        xr ^= i;
    }

    // Step 2: Find rightmost set bit
    int bitNo = 0;
    while (1) {
        if ((xr & (1 << bitNo)) != 0)
            break;
        bitNo++;
    }

    // Step 3: Divide numbers into two buckets and XOR separately
    int zero = 0, one = 0;
    for (int i = 0; i < n; i++) {
        if ((arr[i] & (1 << bitNo)) != 0)
            one ^= arr[i];
        else
            zero ^= arr[i];
    }

    for (int i = 1; i <= n; i++) {
        if ((i & (1 << bitNo)) != 0)
            one ^= i;
        else
            zero ^= i;
    }

    // Step 4: Identify which one is missing and which one is repeating
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == zero)
            cnt++;
    }

    if (cnt == 2)
        return {zero, one}; // zero is repeating, one is missing
    else
        return {one, zero}; // one is repeating, zero is missing
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> ans = check_Numbers(arr, n);

    cout << "Repeated Element is: " << ans[0] << endl;
    cout << "Missing Element is: " << ans[1] << endl;
    return 0;
}
