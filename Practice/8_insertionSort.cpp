#include<iostream>
using namespace std;
void InsertionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
    cout<<"Sorted Array :";
     for(int i=0;i<n;i++){
        cout << arr[i] << "\t";
    }
}
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
    InsertionSort(arr,n);
}