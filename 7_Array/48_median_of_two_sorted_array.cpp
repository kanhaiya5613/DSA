#include<bits/stdc++.h>
using namespace std;
 double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged;
        int i = 0, j = 0;
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] < nums2[j])
                merged.push_back(nums1[i++]);
            else
                merged.push_back(nums2[j++]);
        }

        while (i < nums1.size()) merged.push_back(nums1[i++]);
        while (j < nums2.size()) merged.push_back(nums2[j++]);

        int n = merged.size();
        if (n % 2 == 0)
            return (merged[n/2 - 1] + merged[n/2]) / 2.0;
        else
            return merged[n/2];
    }
    int main(){
         int n;
    cout << "enter the size of array : ";
    cin >> n;
    vector<int>arr1(n);
    cout << "Enter the elements of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    int m;
    cout<<"Enter the size of second array: ";
    cin >> m;
    vector<int>arr2(m);
    cout << "Enter the elements of array : ";
    
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    cout << "Median is : " << findMedianSortedArrays(arr1,arr2);
    }