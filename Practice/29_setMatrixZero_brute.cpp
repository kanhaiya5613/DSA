#include<iostream>
using namespace std;
int markRow(int** arr,int m,int i,int j){
    for(i=0;i<m;i++){
        if(arr[i][j] != 0){
            arr[i][j] = -1;
        }
    }
}
int markColumn(int** arr,int n,int i,int j){
    for(int j=0;j<n;j++){
        if(arr[i][j]!=0){
            arr[i][j]=-1;
        }
    }
}
void setMatrixZero(int** arr,int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==0){
                markRow(arr,m,i,j);
                markColumn(arr,n,i,j);
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

    cout << "Final matrix is : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout <<arr[i][j] <<" ";
        }
        cout << endl;
    }
}
int main(){
    int n,m;
    cout << "enter the number of rows and columns of a matrix respectively : ";
    cin >> n >> m;
    int** arr = new int *[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[m];
    }
    cout<< "Enter the number of Element of matrix : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    setMatrixZero(arr,n,m);
}