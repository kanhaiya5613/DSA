#include<bits/stdc++.h>
using namespace std;
int mejority_element(int arr[],int n){
    int cnt=0;
    int el;
   for(int i=0;i<n;i++){
    if(cnt==0){
        cnt++;
         el=arr[i];
    }
    if(el==arr[i]){
        cnt++;
    }
    else cnt--;
    int cnt1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==el){
            cnt1++;
        }
        if(cnt1>(n/2)){
            return el;
        }
    }
   }
     return -1;
}
int main(){
    int n;
    cout << "Enter the size of array :";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout << "Enter the "<< i <<"th element of array"<<endl;
        cin >> arr[i];
    }
    cout << "the mejority element is :" << mejority_element(arr,n);
     return 0;
}