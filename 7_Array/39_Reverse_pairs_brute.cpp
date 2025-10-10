#include<bits/stdc++.h>
using namespace std;
int ReversePairs(vector<int>arr,int n){
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>2*arr[j]){
                cnt++;
            }
        }
    }
    return cnt;
}
int main()
{    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int>arr(n);
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int cnt = ReversePairs(arr, n);
    cout << "The number of Reverse pairs are: "
         << cnt << endl;
    return 0;
}
