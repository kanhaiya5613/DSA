#include <bits/stdc++.h>
using namespace std;
bool isPowerOfFour(int n)
{
    if (n <= 0)
    {
        return false;
    }
    while (n % 4 == 0)
    {
        n /= 4;
    }
    return n == 1;
}
int main()
{
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    if (isPowerOfFour(n))
    {
        cout << "number is power of 4";
    }
    else
    {
        cout << "number is not a power of 4";
    }
}