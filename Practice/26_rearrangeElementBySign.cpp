#include <iostream>
using namespace std;
void RearrangeArray(int arr[], int n)
{
    int pos[n / 2];
    int neg[n / 2];

    for (int i = 0; i < n; i++)
    {
        int k = 0;
        int j = 0;
        while (k < n / 2 && j < n / 2)
        {
            if (arr[i] >= 0)
            {
                pos[k] = arr[i];
                k++;
            }
            else if (arr[i] < 0)
            {
                neg[j] = arr[i];
                j++;
            }
        }
    }
    int j=0;
    int k=0;
    for(int i=0;i<n;i++){
        if(i/2==0){
            arr[i]=pos[k];
            k++;
        }
        if(i/2!=0){
            arr[i]=neg[j];
            j++;
        }
    }
    cout<<"Rearranged array is : ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
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