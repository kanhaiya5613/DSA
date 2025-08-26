#include<bits/stdc++.h>
using namespace std;
int missingNumber(int arr[], int n) {
    int arr2[n]={0};
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[i]==arr[j]){
                arr2[i+1]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            return i+1;
        }
    }

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
