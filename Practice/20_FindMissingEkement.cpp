#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of Arrray :";
    cin >> n;
    int arr[n-1];
    cout <<"Enter the element of Array :";
    for(int i=0;i<n-1;i++){
        cin >>arr[i];
        
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=(i+1)){
            cout <<"The missing element is : " << i+1;
            break;
        }
       
    }
   

}