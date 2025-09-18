 #include<bits/stdc++.h>
 using namespace std;
 vector<int> MajorityElement(vector<int>arr){
    int n = arr.size();
    unordered_map<int,int>mpp;
    vector<int> ls;
    int min = (n/3)+1;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
        if(mpp[arr[i]]==min){
            ls.push_back(arr[i]);
        }
    }
    return ls;
 }
 int main(){
    vector<int> arr = { 2,3,4,4,3,2,3,4};
    vector<int>ans = MajorityElement(arr);
     cout << "The majority elements are: ";
    for (auto it : ans)
        cout << it << " ";
    cout << "\n";
    return 0;
    
 }