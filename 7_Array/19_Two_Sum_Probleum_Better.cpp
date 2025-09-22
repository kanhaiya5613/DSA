#include<bits/stdc++.h>
using namespace std;
void twoSum(int arr[],int n,int k){
    unordered_map<int, int> map;
    for(int i=0;i<n;i++){
        int num = arr[i];
        int more_needed=k-num;
        if(map.find(more_needed) != map.end()){
            cout << "Pair found: (" << more_needed << ", " << num << ")" << endl;
        }
        map[num] = i;
    }
}
int main(){
    int arr[]={1,3,5,6,8,9,4,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k = 15;
    twoSum(arr,size,k);
}