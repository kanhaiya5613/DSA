#include<bits/stdc++.h>
using namespace std;
   void Arrange(int arr[], int n) {
   
    int posCount = 0, negCount = 0;
    int pos[posCount], neg[negCount];
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            pos[posCount] = arr[i];
            posCount++;
        }
        else if (arr[i] < 0) {
            neg[negCount] = arr[i];
            negCount++;
        }
    }
    int j = 0;
    for (int i = 0; i < posCount; i++) {
        arr[j] = pos[i];
        j++;
        if (i < negCount) {
            arr[j] = neg[i];
            j++;
        }
    }
    cout << "The Rearranged Array is : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
    int main(){
int n;
cout << "Enter the size of Array :";
cin >> n;
int arr[n];
cout << "Enter the elements of arrays : ";
for(int i=0;i<n;i++){
    cin >> arr[i];
} 
cout << "The given Array is : ";
    for(int i=0;i<n;i++){
        cout << arr[i]<< " ";
    }
cout << endl;
Arrange(arr,n);
return 0;
}
