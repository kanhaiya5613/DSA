#include <bits/stdc++.h>
using namespace std;
int CountSubArray(int arr[], int n, int k)
{
    int xr = 0;
    map<int, int> mpp;
    mpp[xr]++;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        xr = xr ^ arr[i];
        
        int x = xr ^ k;
        cnt += mpp[x];
        mpp[xr]++;
    }
    return cnt;
}

int main()
{
    int n;
    cout << "Enter the size of Array : ";
    cin >> n;

    int k;
    cout << "Enter the value of Target: ";
    cin >> k;

    int arr[n];
    cout << "Enter the Elements of Array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Count of Subarrays with XOR = " << k << " : "
         << CountSubArray(arr, n, k) << endl;
}