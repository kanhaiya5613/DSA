#include<bits/stdc++.h>
using namespace std;
   void Arrange(int arr[], int n) {
    int posCount = n/2, negCount = n/2;
    
    int pos[posCount], neg[negCount];
    int a = 0, b = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            pos[a] = arr[i];
            a++;
        }
        else if (arr[i] < 0) {
            neg[b] = arr[i];
            b++;
        }
    }
    int j = 0;
    for (int i = 0; i < n/2; i++) {
        arr[j] = pos[i];
        j++;
        if (i < n/2) {
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
