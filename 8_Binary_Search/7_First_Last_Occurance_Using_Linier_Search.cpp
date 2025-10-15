#include<bits/stdc++.h>
using namespace std;
void Occurances(int arr[],int target,int n){
    int first = -1;
    int last = -1;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            if(first==-1) first=i;
            last = i;
        }
    }
    cout << "Occurances : ("<<first<<","<<last<<")"; 
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout<< "Enter the elements of array(Sorted) : ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int target;
    cout<<"Enter the value of target : ";
    cin >> target;
    int left = 0;
    int right = n-1;

    Occurances(arr,target,n);
}