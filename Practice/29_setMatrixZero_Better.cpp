#include <iostream>
using namespace std;
int setMatrix(int **arr, int n, int m)
{
    int row[n] = {0};
    int col[m] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (row[i] == 1 || col[j] == 1)
            {
                arr[i][j] = 0;
            }
        }
    }
    cout << "Final matrix is : " << endl;
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
    cout << "Enter the numbers of rows and columns respectively : ";
    cin >> n >> m;
    int **arr = new int *[n];
    ;
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    setMatrix(arr, n, m);
}