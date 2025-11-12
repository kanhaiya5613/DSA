#include<bits/stdc++.h>
using namespace std;
double myPow(double x, int n) {
        return pow(x,n);
    }
int main(){
    double x;
    cout << "enter number : ";
    cin >> x;
    int n;
    cout << "enter power : ";
    cin >> n;
    cout << "answer : " << myPow(x,n);
    return 0;
}