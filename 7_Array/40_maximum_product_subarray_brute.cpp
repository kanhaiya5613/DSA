#include <bits/stdc++.h>
using namespace std;

int MaximumProductSubarray(int arr[], int n)
{
    int maxi = INT_MIN;

    // Check every possible subarray
    for (int i = 0; i < n; i++)              // starting index
    {
        for (int j = i; j < n; j++)          // ending index
        {
            int mult = 1;                    // product of subarray [i..j]
            for (int k = i; k <= j; k++)     // traverse the subarray
            {
                mult *= arr[k];
                maxi = max(maxi,mult);
            }
        }
    }

    return maxi;
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

    cout << "The count of subarrays with product " << product << " is : "
         << MaximumProductSubarray(arr, n);
}
