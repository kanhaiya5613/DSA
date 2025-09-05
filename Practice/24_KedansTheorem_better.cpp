#include <iostream>
using namespace std;
int minSubArraySum(int arr[], int n)
{
    int mini = INT8_MAX;
    int sum;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {

            sum += arr[j];
            mini = min(sum, mini);
        }
    }
    return mini;
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