#include <iostream>
using namespace std;
void unionofArray(int arr1[], int arr2[], int n, int m)
{
    int i = 0;
    int k = 0;
    int j = 0;
    int arr[m + n];
    while (i < n || j < m)
    {

        if (arr1[i] < arr2[j])
        {
            arr[k] = arr1[i];
            k++;
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            arr[k] = arr2[j];
            j++;
            k++;
        }
        else if (arr1[i] == arr2[j])
        {
            arr[k] = arr1[i];
            i++;
            k++;
            j++;
        }
    }
    cout << "Final Array is :";
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cout << "Enter the size of First array :";
    cin >> n;
    int arr1[n];
    cout << "Enter the elements element of First array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    int m;
    cout << "Enter the Size of Second Array :";
    cin >> m;
    int arr2[m];
    cout << "Enter the Elements of Second Array :";
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    unionofArray(arr1, arr2, n, m);
}