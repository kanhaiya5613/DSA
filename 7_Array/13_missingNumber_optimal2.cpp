#include<bits/stdc++.h>
using namespace std;
int missingNumber(int arr[], int N) {
    int sum = 0;
   for(int i=0;i<N-1;i++){
    sum += arr[i];
}
    int sum1=(N*(N+1))/2;
    return sum1-sum;
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
