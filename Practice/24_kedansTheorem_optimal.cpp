#include <iostream>
using namespace std;
int minSubArraySum(int arr[], int n)
{
    int maxi = INT8_MIN;
    long long sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
        if(sum>maxi){
            maxi = sum;
        }
        if(sum<0){
            sum = 0;
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