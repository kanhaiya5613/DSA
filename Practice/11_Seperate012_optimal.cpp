#include<iostream>
using namespace std;
int main(){
      int n;
    cout << "Enter the Size of Array :";
    cin >> n;
    int arr[n];
    cout << "Enter the Elements of array :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int left = 0;
    int mid = 0;
    int right = n-1;
    while(mid<right){
        if(arr[mid]==0){
            int temp = arr[mid];
            arr[mid]=arr[left];
            arr[left]=temp;
            left++;
            mid++;
        }
        if(arr[mid]==2){
            int temp = arr[mid];
            arr[mid]=arr[right];
            arr[right]=temp;
            right--;
            
        }
        if(arr[mid]==1){
            mid++;
        }
    }
     cout<<"Sorted Array :";
     for(int i=0;i<n;i++){
        cout << "\t"<< arr[i] ;
    }
}