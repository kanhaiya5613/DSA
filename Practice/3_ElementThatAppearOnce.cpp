#include <bits/stdc++.h>
using namespace std;

int ElementThatAppearOnce(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int k = 0; // count occurrences of arr[i]
        int num = arr[i];
        for (int j = 0; j < n; j++) {   // check the whole array
            if (num == arr[j]) {
                k++;
            }
        }
        if (k == 1) { // appears only once
            return num;
        }
    }
    return -1; // if no element appears once
}

int main() {
    int n;
    cout << "Enter the number of elements in array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = ElementThatAppearOnce(arr, n);
    if (ans != -1)
        cout << "The number that appears once is: " << ans << endl;
    else
        cout << "No element appears exactly once!" << endl;
}
