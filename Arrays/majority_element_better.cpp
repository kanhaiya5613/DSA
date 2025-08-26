
#include<bits/stdc++.h>
using namespace std;
vector<int> Majority_element(vector<int>arr){
    vector<int>ls;
    int n=arr.size();
    map<int,int> mpp;
    int mini = (int)(n/3)+1;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
        if(mpp[arr[i]]==mini){
            ls.push_back(arr[i]);
        }
        if(ls.size()==2) break;
    } 
    sort(ls.begin(),ls.end());
    return ls;
}
int main(){
    vector<int> arr ={5,5,5,5,4,4,3,2,4,4};
    vector <int> ans=Majority_element(arr);
    cout <<"The Majority Elements Are : ";
    for(auto it : ans){
        cout << it << " ";
    }
}
