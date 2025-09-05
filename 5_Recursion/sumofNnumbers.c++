#include<bits/stdc++.h>
using namespace std;
int func(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + func(n - 1);
    }
}
int main(){
    int n;
    cin >> n;
    int sum = func(n);
    cout << sum;
}