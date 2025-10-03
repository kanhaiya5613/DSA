#include <bits/stdc++.h>
using namespace std;
vector<int> check_Numbers(int arr[], int n)
{
    //  S_Sn=X-Y
    // S2-S2n
    long long SN = (n * (n + 1)) / 2;
    long long S2N = (n * (n + 1) * (2 * n + 1)) / 6;
    long long S = 0;
    long long S2 = 0;
    for (int i = 0; i < n; i++)
    {
        S += arr[i];
        S2 += (long long)arr[i] * (long long)arr[i];
    }
    long long val1 = S - SN; //X-Y
    long long val2 = S2 - S2N; 
    val2 = val2 / val1;        // X+Y
    long long x = (val1 + val2) / 2;
    long long y = x - val1;
    return {(int)x,(int)y};
}
int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
       vector<int> ans = check_Numbers(arr, n);

    cout << "Repeated Element is : " << ans[0] << endl;
    cout << "Missing Element is : " << ans[1] << endl;
}