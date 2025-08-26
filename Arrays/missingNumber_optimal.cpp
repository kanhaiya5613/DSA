#include<bits/stdc++.h>
using namespace std;
int missingNumber(int arr[], int N) {
    int xor1 = 0, xor2 = 0;
   int n=N-1;
    for (int i = 0; i < n; i++) {
        xor2 = xor2 ^ arr[i];
        xor1=xor1^(i+1);
    }
    xor1=xor1^N;
    return xor1 ^ xor2;
}

int main() {
   int n;
    cout << "Enter The Size Of array (between 1 and 100): ";
    cin >> n;
    while (n < 1 || n > 100) {
        cout << "Invalid size. Please enter a size between 1 and 100: ";
        cin >> n;
    }
    int arr[n];
    for (int i = 0; i < n-1; i++) {
        cin >> arr[i];
    }
    cout << "The missing number is: " << missingNumber(arr, n);
}
