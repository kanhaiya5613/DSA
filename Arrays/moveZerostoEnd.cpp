#include<bits/stdc++.h>
using namespace std;
void zerosAtend(int arr[],int n){
    int s=0;
    for(int i=0; i<n;i++){
        if(arr[i] != 0){
            arr[s]=arr[i];
            s++;
        }
    }
    for(int i=s;i<n;i++){
        arr[i]=0;
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

}
int main(){
    int n;
    cout << "Enter The Size Of Array : ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    zerosAtend(arr,n);
    return 0;
}