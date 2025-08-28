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
    int zero =0;
    int one = 0;
    int two = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zero++;
        }
        else if(arr[i]==1){
            one++;
        }
        else if(arr[i]==2){
            two++;
        }
    }
    for(int i=0;i<zero;i++){
        arr[i]=0;
    }
    for(int i=zero;i<zero+one;i++){
        arr[i]=1;
    }
    for(int i=zero+one;i<zero+one+two;i++){
        arr[i]=2;
    }
     cout<<"Sorted Array :";
     for(int i=0;i<n;i++){
        cout << "\t"<< arr[i] ;
    }
}