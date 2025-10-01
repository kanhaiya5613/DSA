#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>nums1,int n,vector<int>nums2,int m){
    int left = n-1;
    int right = 0;
    while(left >= 0 && right < m){
        if(nums1[left]>nums2[right]){
            swap(nums1[left],nums2[right]);
            left--;
            right++;
        }
        else{
            break;
        }
    }
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());

    cout<<"\nFinal first array : ";
    for(int i=0;i<n;i++){
        cout<<nums1[i]<<" ";
    }
    cout<<"\nFinal Second array : ";
    for(int i=0;i<m;i++){
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