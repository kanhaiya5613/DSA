#include<bits/stdc++.h>
using namespace std;
 double myPow(double x, int n) {
        long long power = n; 
    double result = 1.0;

    if (power < 0) {
        x = 1 / x;
        power = -power;
    }

    while (power > 0) {
        if (power % 2 == 1) {
            result *= x;
        }
        x *= x;
        power /= 2;
    }

    return result;
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