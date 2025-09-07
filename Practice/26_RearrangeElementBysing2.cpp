#include <bits/stdc++.h>
using namespace std;
void RearrangeArray(int arr[], int n)
{
    vector<int> pos,neg;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            pos.push_back(arr[i]);
        }
        else{
            neg.push_back(arr[i]);
        }
    }
    if(pos.size()>neg.size()){
        for(int i=0;i<neg.size();i++){
            arr[2*i] = pos[i];
            arr[2*1+i] = neg[i];
        }
        int index = neg.size()*2;
        for(int i=neg.size();i<pos.size();i++){
            arr[index] = pos[i];
            index++;
        }
    }
    else{
        for(int i=0;i<pos.size();i++){
            arr[2*i] = pos[i];
            arr[2*i+1]=neg[i];
        }
        int index = pos.size()*2;
        for(int i=pos.size();i<neg.size();i++){
            arr[index] = neg[i];
            index++;
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