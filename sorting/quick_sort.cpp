#include<bits/stdc++.h>
using namespace std;
int fun(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    while(i <= j){
        while(arr[i] <= pivot && i <= high)
            i++;
        while(arr[j] > pivot && j >= low)
            j--;
        if(i <= j){
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
};

int quick_sort(int arr[],int low,int high){
    if(low<high){
        int p_index=fun(arr,low,high);
        quick_sort(arr,low,p_index-1);
        quick_sort(arr,p_index+1,high);
    }
}

int main(){
    int n;
    cout << " Enter The Size Of Array : " ;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    quick_sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}