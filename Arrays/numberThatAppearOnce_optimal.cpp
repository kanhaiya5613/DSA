#include<bits/stdc++.h>
using namespace std;
int AppearsOnce(int arr[], int size) {
    int xorr = 0;
    for (int i = 0; i < size; i++) {
        xorr = xorr ^ arr[i];
    }
    return xorr;
}
int main(){
    int arr[] = {4,2,3,4,5,5,1,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int result = AppearsOnce(arr,size);
    cout << "The Number That Appears Once Is " << result << endl;
}