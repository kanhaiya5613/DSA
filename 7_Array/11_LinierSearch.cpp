#include<bits/stdc++.h>
using namespace std;
int Linier_Search(int arr[],int n,int s){
    for(int i=0;i<n;i++){
     if(arr[i]==s) return i;
      
    }
    return -1;
}
int main(){
    int n;
    cout << "Enter The Size Of Array : ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int s;
    cout << "Enter The Number That You Want To Search : ";
    cin >> s;
   cout << "The index of Searched Element Is : " << Linier_Search(arr,n,s);
    return 0;
}