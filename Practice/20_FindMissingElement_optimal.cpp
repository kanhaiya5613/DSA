#include<iostream>
using namespace std;
int findMissing(int arr[],int n){
   int sum = 0;
   int real_sum = (n*(n+1))/2;
   for(int i=0;i<n;i++){
    sum = sum + arr[i];
   }
   int element = real_sum - sum;
   return element;

}
int main(){
     int n;
    cout << "Enter the size of Arrray :";
    cin >> n;
    int arr[n-1];
    cout <<"Enter the element of Array :";
    for(int i=0;i<n;i++){
        cin >>arr[i];
        
    }
    cout<< "Missing Element is :"<<  findMissing(arr,n);
    return 0;
}