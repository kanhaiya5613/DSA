#include<bits/stdc++.h>
using namespace std;

void unionOfArray(int arr[], int Arr[], int n, int m){
    set<int> st;
    for(int i = 0; i < n; i++){
        st.insert(arr[i]);
    }
    for(int i = 0; i < m; i++){
        st.insert(Arr[i]);
    }
    cout << "Union of two arrays: ";
    for(auto it = st.begin(); it != st.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cout << "Enter The Size Of First Array : ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int m;
    cout << "Enter The Size Of Second Array : ";
    cin >> m;
    int Arr[m];
    for(int i = 0; i < m; i++){
        cin >> Arr[i];
    }
    unionOfArray(arr, Arr, n, m);
    return 0;
}