#include<bits/stdc++.h>
using namespace std;
void sort(int arr[],int n){
    int low=0;
    int high=n-1;
    int mid=0;
    for(int i=0;i<n;i++){
        if(arr[mid]==0){
            int temp = arr[low];
            arr[low]=arr[mid];
            arr[mid]=temp;
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else {
             int temp = arr[mid];
            arr[mid]=arr[high];
            arr[high]=temp;
              high--;
        }
    }
    cout << endl;
    cout << "The Unsorted array is :";
      for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
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
     
    cout << "The Unsorted array is :";
      for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    sort(arr,n);
    cout << endl;
     return 0;
}