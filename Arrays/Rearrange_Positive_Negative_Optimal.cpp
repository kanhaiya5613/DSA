#include<bits/stdc++.h>
using namespace std;
void Arrange(int arr[],int n){
    int posIndex=0;
    int NegIndex=1;
    int ans[n];
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            ans[posIndex]=arr[i];
            posIndex += 2;
        }
        if(arr[i]<0){
            ans[NegIndex]=arr[i];
            NegIndex += 2;
        }
    }
    cout << "The Rearranged Array is : ";
    for(int i=0;i<n;i++){
        cout << ans[i]<< " ";
    }
}
int main(){
int n;
cout << "Enter the size of Array :";
cin >> n;
int arr[n];
cout << "Enter the elements of arrays : ";
for(int i=0;i<n;i++){
    cin >> arr[i];
} 
cout << "The given Array is : ";
    for(int i=0;i<n;i++){
        cout << arr[i]<< " ";
    }
cout << endl;
Arrange(arr,n);
return 0;
}