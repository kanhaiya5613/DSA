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
    
    for(int i=0;i<n;i++){
        int count = 0;
        for (int j = i; j < n; j++)
        {
            if(arr[i]==arr[j]){
                count++;
            }
        }
         if(count>((n/2))){
            cout << "Mejority Elements are : " << arr[i];
        }
        
        count = 0;
        
    }
   
}