#include<bits/stdc++.h>
using namespace std;
int MarkRow(int** arr,int m,int i,int j){
    for(i=0;i<m;i++){
        if(arr[i][j] !=0){
            arr[i][j] =-1;
        }
    }
}
int MarkColumn(int** arr,int n,int i,int j){
    for(j=0;j<n;j++){
        if(arr[i][j] !=0){
            arr[i][j] =-1;
        }
    }
}
int set_matrix_zeros(int** arr,int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==0){
               MarkRow(arr,m,i,j);
               MarkColumn(arr,n,i,j);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==-1){
                arr[i][j]=0;
            }
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