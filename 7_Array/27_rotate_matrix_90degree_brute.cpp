#include<bits/stdc++.h>
using namespace std;
int** rotate_matrix(int** arr,int n,int m){
    int** ans=new int*[m];
    for(int i=0;i<m;i++){
        ans[i] = new int[n];
    }
    for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
          ans[j][n-1-i]=arr[i][j];
    }
    }
    return ans;
}
void print_matrix(int** arr,int n,int m){
    cout << "The final matrix is : " << endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j]<< " ";
        }
        cout << endl;
    }
}
int main(){
    int n,m;
    cout << "Enter the number of rows of matrix : ";
    cin >> n;
     cout << "Enter the number of columns of matrix : ";
    cin >> m;
    int** arr = new  int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[m];
    }
    cout << "Enter the elements of matrix : "<< endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    int** ans = rotate_matrix(arr,n,m);
    print_matrix(ans,m,n);
}
