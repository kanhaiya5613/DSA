#include<bits/stdc++.h>
using namespace std;
   int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        else{
            for(int i=0;i<nums.size();i++){
                if(i==0){
                    if(nums[i]!=nums[i+1]){
                        return nums[i];
                    }
                }
                else if(i==nums.size()-1){
                    if(nums[i]!=nums[i-1]){
                        return nums[i];
                    }
                }
                else{
                    if(nums[i]!=nums[i+1] && nums[i]!=nums[i-1]){
                        return nums[i];
                    }
                }
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
    cout << "Single Number is : "<< singleNonDuplicate(nums);
}