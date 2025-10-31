#include <bits/stdc++.h>
using namespace std;
int missingMultiple(vector<int> &nums, int k)
{
    int n = nums.size();
    unordered_set<int> s(nums.begin(), nums.end());
    for (int i = 1; i <= n; i++)
    {
        int multiple = k * i;
        if (s.find(multiple) == s.end())
        {
            return multiple;
        }
    }
    return k * (n + 1);
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
    int k;
    cout << "Enter element thats multiple you want to find : ";
    cin >> k;
    cout << "The smallest missing element is : " << missingMultiple(arr, k);
}