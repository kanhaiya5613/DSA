#include<iostream>
using namespace std;

void IntersectionOfArray(int arr1[], int arr2[], int n, int m) {
    int i = 0, j = 0, k = 0;
    int arr[min(n, m)];

    while (i < n && j < m) {
        if (arr1[i] == arr2[j]) {
            if (k == 0 || arr[k - 1] != arr1[i]) {  // avoid duplicates
                arr[k] = arr1[i];
                k++;
            }
            i++;
            j++;
        }
        else if (arr1[i] > arr2[j]) {
            j++;  // move second array forward
        }
        else {
            i++;  // move first array forward
        }
    }

    cout << "Final Array is: ";
    for (int idx = 0; idx < k; idx++) {
        cout << arr[idx] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the size of First array: ";
    cin >> n;
    int arr1[n];
    cout << "Enter the elements of First array (sorted): ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    int m;
    cout << "Enter the Size of Second Array: ";
    cin >> m;
    int arr2[m];
    cout << "Enter the elements of Second Array (sorted): ";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    IntersectionOfArray(arr1, arr2, n, m);
}
