#include<bits/stdc++.h>
using namespace std;
 int singleNumber(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            int cnt = 0;
            for(int j=0;j<n;j++){
                if(nums[i]==nums[j]){
                    cnt++;
                }
            }
            if(cnt == 1){
                return nums[i];
            }
        }
        return -1;
    }
int main(){
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of array : ";
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    cout << "Single Number is : "<< singleNumber(nums);
}