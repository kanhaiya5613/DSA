#include <iostream>
using namespace std;
void RearrangeArray(int arr[], int n)
{
    int ans[n];
    int posIndex =0;
    int negIndex = 1;
    for (int i = 0; i < n; i++)
    {
       if(arr[i]>0){
        ans[posIndex]=arr[i];
        posIndex +=2;
       } 
       else{
        ans[negIndex] = arr[i];
        negIndex +=2;
       }
    }
    
    cout<<"Rearranged array is : ";
    for(int i=0;i<n;i++){
        cout << ans[i] << " ";
    }
}
int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    RearrangeArray(arr, n);
}