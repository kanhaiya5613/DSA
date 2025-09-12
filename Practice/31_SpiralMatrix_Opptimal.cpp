#include<bits/stdc++.h>
using namespace std;
void SpiralMatrix(int **arr,int n,int m){
    int left = 0;
    int right = m-1;
    int bottom = n-1;
    int top = 0;
    vector<int>ans;
    while(top<= bottom && left <= right){
    for(int i=left;i<=right;i++){
        // cout << arr[top][i] << " ";
        ans.push_back(arr[top][i]);

    }
    top++;
    for(int i=top;i<=bottom;i++){
        //cout<<arr[i][right] << " ";
        ans.push_back(arr[i][right]);
        
    }
    right--;
    if(top<=bottom){
        for(int i=right;i>=left;i--){
        //cout<<arr[bottom][i] << " ";
        ans.push_back(arr[bottom][i]);
    }
    
    
    bottom--;
}
    if(left<=right){
    for(int i=bottom;i>=top;i--){
        //cout<<arr[i][left]<<" ";
        ans.push_back(arr[i][left]);
       
    }
    left++;
}

}
  cout<< "Final Matrix : " << endl;
for (int i = 0; i <ans.size(); i++)
{
 cout << ans[i] << " ";   
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
    SpiralMatrix(arr, n, m);
}