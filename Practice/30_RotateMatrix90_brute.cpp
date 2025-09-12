#include<bits/stdc++.h>
using namespace std;
void RotateMatrix(int** arr,int n,int m){
    int **ans = new int *[n];
    for(int i=0;i<n;i++){
        ans[i] = new int[m];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            //int temp = arr[j][m-j-1];
            ans[j][n-1-i]=arr[i][j];
        }
    }
    cout << "Final Matrix : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    int m;
    cout << "Enter the size of row and column respectively : ";
    cin >> n >> m;
    int **arr = new int *[n];
    for(int i=0;i<n;i++){
        arr[i] = new int[m];
    }
    cout << "Enter the Elements of Matrix : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    RotateMatrix(arr,n,m);
}