#include <iostream>
using namespace std;
int LongestSubArray(int arr[], int n, int k)
{
    int sum = 0;
    int seq = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++) 
        {
            sum = sum + arr[j];
            if (sum <= k)
            {
                
                seq = max(seq, j-i+1);
            }
            else
            {
                sum = 0;
            }
        }
    }

    return seq;
}
int main()
{
    int n;
    cout << "Enter the size of Arrray :";
    cin >> n;
    int k;
    cout << "Enter the value of K : ";
    cin >> k;
    int arr[n];
    cout << "Enter the element of Array :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Longest SubArray With Sum K is : " << LongestSubArray(arr, n, k);
}