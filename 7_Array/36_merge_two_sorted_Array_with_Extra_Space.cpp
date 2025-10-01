#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    vector<int> num;
    int i = 0, j = 0;

    // merge like merge step of merge sort
    while (i < m && j < n)
    {
        if (nums1[i] < nums2[j])
        {
            num.push_back(nums1[i]);
            i++;
        }
        else
        {
            num.push_back(nums2[j]);
            j++;
        }
    }

    // if nums1 has remaining elements
    while (i < m)
    {
        num.push_back(nums1[i]);
        i++;
    }

    // if nums2 has remaining elements
    while (j < n)
    {
        num.push_back(nums2[j]);
        j++;
    }

    // copy back to nums1
    for (int k = 0; k < m ; k++)
    {
        nums1[k] = num[k];
    }
    for(int k=0;k<n;k++){
        nums2[k]=num[k+m];
    }

    // printing both array by arranging its element
    cout<<"\nFirst array is : ";
    for(int i=0;i<m;i++){
        cout<<nums1[i]<<" ";
    }
    cout<<"\nSecond array is: ";
    for(int i=0;i<n;i++){
        cout<<nums2[i]<<" ";
    }
    
}
int main()
{
    int n;
    cout << "Enter the size of First array :";
    cin >> n;
    vector<int> nums1(n);
    cout << "Enter the elements of first array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums1[i];
    }
    int m;
    cout << "Enter the size of second sorted array: ";
    cin >> m;
    vector<int> nums2(m);
    cout << "Enter the elements of second array: ";
    for (int i = 0; i < m; i++)
    {
        cin >> nums2[i];
    }
    merge(nums1, n, nums2, m);
}