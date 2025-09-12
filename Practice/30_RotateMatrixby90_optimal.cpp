#include <bits/stdc++.h>
using namespace std;
void RotateMatrix(int **arr, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m/2;j++){
            int temp = arr[i][j];
             
             arr[i][j] =arr[i][m-j-1];
             arr[i][m-j-1]=temp;
            
        }
    }

cout<< "Final Matrix : " << endl;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        cout << arr[i][j] << " ";
    }
    cout << endl;
}
}
int main()
{
    int n;
    int m;
    cout << "Enter the size of row and column respectively : ";
    cin >> n >> m;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
    }
    cout << "Enter the Elements of Matrix : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    RotateMatrix(arr, n, m);
}