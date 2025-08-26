#include<bits/stdc++.h>
using namespace std;
void set_matrix_zeros(int** arr,int n,int m){
      int col0 = 1;
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==0){
                arr[i][0]=0;
                arr[0][j]=0;
                if(j==0){
                    col0=0;
                }
            }
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
          if(arr[i][0]==0||arr[0][j]==0){
              arr[i][j]=0;
          }
        }
    }
    if(col0==0){
        for(int i=0;i<n;i++){
            arr[i][0]=0;
        }
    }
    if(arr[0][0]==0){
        for(int j=0;j<m;j++){
            arr[0][j]=0;
        }
    }
}
void print_matrix(int** arr,int n,int m){
    cout << "The final matrix is : " << endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << arr[i][j]<< " ";
        }
        cout << endl;
    }
}
int main(){
    int n,m;
    cout << "Enter the number of rows of matrix : ";
    cin >> n ;
    cout << "Enter the number of columns of matrix :  ";
    cin >> m ;
    int** arr = new int *[n];
    for(int i=0;i<n;i++){
        arr[i] = new int[m];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            //cout << "Enter the element of " << i <<"th rows and "<< j << "th columns of matrix :";
            cin >> arr[i][j];
            cout << endl;
        }
    }
   set_matrix_zeros(arr,n,m);
   print_matrix(arr,n,m);
}