#include <bits/stdc++.h>
using namespace std;

int LongestConsecutive(vector<int>& arr, int n)
{
    sort(arr.begin(), arr.end());
    int longest = 1;
    int lastSmaller = INT_MIN;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] - 1 == lastSmaller)
        {
            cnt = cnt + 1;
            lastSmaller = arr[i];
        }
        else if (arr[i] != lastSmaller)
        {
            cnt = 1;
            lastSmaller = arr[i];
        }
        longest = max(longest, cnt);
    }
    return longest;
}

int main()
{
    int n;
    cout << "Enter the size of Array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The Longest consecutive sequence length is: " 
         << LongestConsecutive(arr, n);
}
