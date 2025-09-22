#include<bits/stdc++.h>
using namespace std;
void set_matrix_zeros(int** arr,int n,int m){
    int row[n]={0};
    int column[m]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==0){
                row[i]=1;
                column[j]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(row[i]==1 || column[j]==1){
                arr[i][j]=0;
            }
        }
    }
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
            cout << "Enter the element of " << i <<"tn rows and "<< j << "th columns of matrix :" ;
            cin >> arr[i][j];
            cout << endl;
        }
    }
   set_matrix_zeros(arr,n,m);

}