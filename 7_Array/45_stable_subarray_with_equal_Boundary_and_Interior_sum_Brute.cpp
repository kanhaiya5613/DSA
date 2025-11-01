#include<bits/stdc++.h>
using namespace std;
long long countStableSubarrays(vector<int>& capacity) {
        int n = capacity.size();
        long long count = 0;

        for (int i = 0; i < n; i++) {
            int interiorSum = 0; 
            for (int j = i + 1; j < n; j++) {
                if (j - i >= 2) { 
                    interiorSum += capacity[j - 1];
                }
                if (j - i + 1 >= 3 && capacity[i] == capacity[j] && capacity[i] == interiorSum) {
                    count++;
                }
            }
        }
        return count;
    }

int main(){
     int n;
    cout << "Enter the size of array : ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Number of Stable subarray with equal boundary and interior sum is : " << countStableSubarrays(arr);
}