#include <bits/stdc++.h>
using namespace std;
int minSubArraySum(int arr[], int n)
{
    int maxi = INT_MIN;
    int sum;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {

            sum += arr[j];
            maxi = max(sum, maxi);
        }
    }
    return maxi;
}
int main()
{
    int n;
    cout << "Enter the size of Arrray :";
    cin >> n;
    int arr[n];
    cout << "Enter the element of Array :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "T=minimum subarray sum is : " << minSubArraySum(arr, n);
}