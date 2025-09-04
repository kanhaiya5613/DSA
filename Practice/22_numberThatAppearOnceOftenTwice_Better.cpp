#include<bits/stdc++.h>
using namespace std;
int AppearsOne(int arr[],int n){

    int maxi = arr[0];
    
    for(int i=0;i<n;i++){
        maxi = max(maxi,arr[i]);
    }
    vector<int> hash(maxi + 1, 0);
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(hash[arr[i]] == 1){
        return arr[i];
    }
    }

return -1;
}
int main(){
    int n;
    cout << "Enter the size of Arrray :";
    cin >> n;
    int arr[n];
    cout <<"Enter the element of Array :";
    for(int i=0;i<n;i++){
        cin >>arr[i];
        
    }
    cout<<" Element That Appears One is : " <<AppearsOne(arr,n);
}