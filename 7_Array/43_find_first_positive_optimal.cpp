#include <bits/stdc++.h>
using namespace std;
int firstMissingPositive(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > 0 && nums[i] <= n)
        {
            ans[nums[i]] = 1;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (ans[i] == 0)
        {
            return i;
            break;
        }
    }
    return n + 1;
}
int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The first positive element is : " << firstMissingPositive(arr);
}