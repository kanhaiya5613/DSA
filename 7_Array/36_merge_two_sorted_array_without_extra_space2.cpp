#include <bits/stdc++.h>
using namespace std;

void swapIfGreater(vector<int> &nums1, vector<int> &nums2, int ind1, int ind2) {
    if (nums1[ind1] > nums2[ind2]) {
        swap(nums1[ind1], nums2[ind2]);
    }
}

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    int len = m + n;
    int gap = (len / 2) + (len % 2); // ceiling of len/2

    while (gap > 0) {
        int left = 0, right = left + gap;

        while (right < len) {
            // nums1 & nums2
            if (left < m && right >= m) {
                swapIfGreater(nums1, nums2, left, right - m);
            }
            // nums2 & nums2
            else if (left >= m) {
                swapIfGreater(nums2, nums2, left - m, right - m);
            }
            // nums1 & nums1
            else {
                swapIfGreater(nums1, nums1, left, right);
            }
            left++;
            right++;
        }

        if (gap == 1) break;
        gap = (gap / 2) + (gap % 2);
    }

    // Print arrays
    cout << "\nFinal first array : ";
    for (int i = 0; i < m; i++) cout << nums1[i] << " ";

    cout << "\nFinal second array : ";
    for (int i = 0; i < n; i++) cout << nums2[i] << " ";
}

int main() {
    int m;
    cout << "Enter the size of First array : ";
    cin >> m;
    vector<int> nums1(m);
    cout << "Enter the elements of first array : ";
    for (int i = 0; i < m; i++) cin >> nums1[i];

    int n;
    cout << "Enter the size of Second array: ";
    cin >> n;
    vector<int> nums2(n);
    cout << "Enter the elements of second array: ";
    for (int i = 0; i < n; i++) cin >> nums2[i];

    merge(nums1, m, nums2, n);
}
