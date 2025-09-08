#include <bits/stdc++.h>
using namespace std;
void LeadersElement(int arr[], int n)
{
    int maxi = INT_MIN;
    vector<int> ans;
    for (int i = n - 1; i >= -0; i--)
    {
        if(arr[i]>maxi){
        maxi = arr[i];
        ans.push_back(maxi);
        }
    }
    cout << "The leader Elements are: " ;
    for (int j = ans.size() - 1; j > 0; j--)
    {
        cout << ans[j] <<" ";
    }
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
    LeadersElement(arr, n);
}