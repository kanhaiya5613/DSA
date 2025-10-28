#include<bits/stdc++.h>
using namespace std;
int maxArea(vector<int>& height) {
        int n = height.size();
        if (n < 2) return 0;
        int area = 0;                       
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                area = max(area, min(height[i], height[j]) * (j - i));
            }
        }
        return area;
    }
    int main(){
        int n;
        cout << "Enter the size of array of heights : ";
        cin >> n;
        vector<int> arr(n);
        cout << "Enter heights : ";
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        cout<< "The maximum area of water is : "<<maxArea(arr);
    }