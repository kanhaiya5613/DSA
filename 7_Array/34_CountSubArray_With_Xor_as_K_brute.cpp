#include <bits/stdc++.h>
using namespace std;

int CountSubArray(int arr[], int n, int k) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int xorr = 0;
            for (int t = i; t <= j; t++) {
                xorr = xorr ^ arr[t];
            }
            if (xorr == k) cnt++;
        }
    }
    return cnt;
}

int main() {
    int n;
    cout << "Enter the size of Array : ";
    cin >> n;

    int k;
    cout << "Enter the value of Target: ";
    cin >> k;

    int arr[n];
    cout << "Enter the Elements of Array : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Count of Subarrays with XOR = " << k << " : "
         << CountSubArray(arr, n, k) << endl;
}
