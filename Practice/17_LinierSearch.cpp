#include<iostream>
using namespace std;
int LinierSearch(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cout << "Enter the size of array :";
    cin >> n;
    int arr[n];
    cout << "Enter the elements element of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout<< "Enter value which you want to search :" ;
    cin >>target;
    cout<<"The element is at index :" <<LinierSearch(arr,n,target);
}
