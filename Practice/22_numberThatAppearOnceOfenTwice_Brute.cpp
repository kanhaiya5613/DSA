#include<iostream>
using namespace std;
int AppearsOne(int arr[],int n){
for(int i = 0;i<n ; i++){
    int flag = 0;
    int num = arr[i];
    for(int j = 0;j<n;j++){
        if(arr[i]==arr[j]){
            flag++;
        }
    }
    if(flag==1){
        return num;
    }
}
return -1;
}
int main(){
    int n;
    cout << "Enter the size of Arrray :";
    cin >> n;
    int arr[n];
    cout <<"Enter the element of Array :";
    for(int i=0;i<n;i++){
        cin >>arr[i];
        
    }
    cout<<" Element That Appears One is : " <<AppearsOne(arr,n);
}