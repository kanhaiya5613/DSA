#include <bits/stdc++.h>
using namespace std;
int firstMissingPositive(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 1; i <= n + 1; i++)
    {
        int flag = 0;
        for (int j = 0; j < n; j++)
        {
            if (nums[j] == i)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            return i;
        }
    }
    return -1;
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