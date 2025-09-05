#include<bits/stdc++.h>
using namespace std;
 void spiral_matrix(int **arr,int n,int m){
int left=0;
int right=n-1;
int top=0;
int bottom=m-1;
while(top<=bottom && left <=right){
    for(int i=left;i<=right;i++){
        cout << arr[top][i]<<" ";
    }
    top++;
    for(int i=top;i<=bottom;i++){
        cout << arr[i][right]<<" ";
    }
     right--;
    for(int i=right;i>=left;i--){
        cout << arr[bottom][i]<<" ";
    }
     bottom--;
    for(int i=bottom;i>=top;i--){
        cout << arr[i][left]<<" ";
    }
      left++;
    }
}
int main(){
    int n,m;
    cout << "enter the number of rows : ";
    cin >> n;
    cout << "enter the number of columns : ";
    cin >> m;
    int **arr = new int*[n];
for(int i=0;i<n;i++){
    arr[i]= new int[m];
}
for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    spiral_matrix(arr,n,m);
}