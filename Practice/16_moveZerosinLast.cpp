#include <iostream>
using namespace std;
void moveZerosinLast(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {

            arr[j] = arr[i];
            j++;
        }
    }
    for (int i = j; i < n; i++)
    {
        arr[i] = 0;
    }
    cout << "Final array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}
int main()
{
    int n;
    cout << "Enter the size of array :";
    cin >> n;
    int arr[n];
    cout << "Enter the elements element of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    moveZerosinLast(arr, n);
}